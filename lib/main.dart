import 'dart:async';
import 'dart:math';
import 'package:flutter/material.dart';

void main() {
  runApp(const CampingSimApp());
}

class WorldObject {
  final double x;
  final double y;
  final Widget widget;
  final double depth;

  WorldObject({required this.x, required this.y, required this.widget, required double sinZ, required double cosZ})
      : depth = x * sinZ + y * cosZ;
}

class VisitingCar {
  double x, y;
  final int targetX, targetY;
  VisitingCar(this.x, this.y, this.targetX, this.targetY);
}

class CampingSimApp extends StatelessWidget {
  const CampingSimApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Camping Simulator',
      theme: ThemeData(
        colorScheme: ColorScheme.fromSeed(seedColor: Colors.green),
        useMaterial3: true,
      ),
      home: const GameScreen(),
    );
  }
}

class GameScreen extends StatefulWidget {
  const GameScreen({super.key});

  @override
  State<GameScreen> createState() => _GameScreenState();
}

class _GameScreenState extends State<GameScreen> {
  final int gridSize = 20; 
  late List<List<int>> mapData;
  
  // Kamera-Winkel für Isometrie (Startwert -45 Grad für klassische Diamant-Perspektive)
  double cameraZ = -pi / 4; 
  final double cameraTilt = 0.95; // Feste isometrische Neigung (~54.4 Grad)
  bool usePerspective = false; // false = Reine isometrische Parallelprojektion (kein trapezförmiges Verzerren)

  // 0 = Wiese, 1 = Meer, 2 = Parzelle, 4 = Fußweg, 5 = Straße, 6 = Rezeption, 7 = Hauptanschluss Wasser, 12 = Abwasser Stadt, 13 = Strom Stadt
  // Werkzeuge für den Untergrund -> 8 = Trinkwasser, 9 = Abwasser, 10 = Strom, 11 = Abriss Leitungen
  int selectedTool = 5; // Standardmäßig Straße ausgewählt
  bool isDragging = false;

  // Untergrund-Netze (true = Leitung liegt hier)
  late List<List<bool>> undergroundWater; 
  late List<List<bool>> undergroundWaste; 
  late List<List<bool>> undergroundPower; 

  // Netzwerk-Status (true = erfolgreich mit dem Hauptanschluss/Meer verbunden)
  late List<List<bool>> connectedWater;
  late List<List<bool>> connectedWaste;
  late List<List<bool>> connectedPower;

  // Parzellen-Status (true = Parzelle wird versorgt)
  late List<List<bool>> parcelWater;
  late List<List<bool>> parcelWaste;
  late List<List<bool>> parcelPower;

  // Speichert den exakten Spawnpunkt für das Fahrzeug einer Zone
  late List<List<bool>> isParcelAnchor;
  // Speichert, ob die Zone groß genug für einen Wohnwagen ist (sonst Zelt)
  late List<List<bool>> isBigParcel;
  // Speichert, ob auf dieser Parzelle genug Platz für ein Kinder-Zusatzzelt ist
  late List<List<bool>> isExtraTent;

  // 0 = Leerer Schotter, 1 = Aufbau-Animation, 2 = Fertig bezogen
  late List<List<int>> parcelState;
  // Speichert den Fortschritt des Ladebalkens (0.0 bis 1.0)
  late List<List<double>> setupProgress;
  // Speichert, ob auf der Parzelle ein Wohnwagen (true) oder Zelt (false) kommt
  late List<List<bool>> parcelIsCaravan;

  // Wirtschafts-Variablen
  double money = 15000.0; // Startkapital in Euro
  double dailyIncome = 0.0;

  // Tech-Tree / Upgrade-Baum
  bool hasWaterUnlocked = false; // Erst wenn das gekauft ist, fließt Wasser
  double waterUpgradeCost = 5000.0; // Kostet 5000€, den städtischen Anschluss legen zu lassen

  // Simulations-Variablen
  Timer? gameLoop;
  Timer? renderLoop;
  double guestX = 1.0; // Startposition X (bei der Rezeption)
  double guestY = 10.0; // Startposition Y
  double waterWaveOffset = 0.0;
  // 0.0 = Mittag, 0.25 = Nachmittag, 0.5 = Mitternacht, 0.75 = Morgen
  double timeOfDay = 0.25; 
  int inGameDay = 1;
  int activeCampers = 0;
  int maxCapacity = 0; // Wie viele Parzellen sind ans Netz angeschlossen?

  List<VisitingCar> activeCars = [];
  double barrierAngle = 0.0; // 0.0 = geschlossen, 1.2 = hochgeklappt

  Color getAtmosphereColor() {
    if (timeOfDay < 0.3) {
      // Tag / Nachmittag: Leicht warmes Sonnenlicht
      return const Color(0xFFFF9E00).withValues(alpha: 0.1);
    } else if (timeOfDay < 0.5) {
      // Abend: Kräftiges, stimmungsvolles Orange-Rot
      return const Color(0xFFFF4500).withValues(alpha: 0.3);
    } else if (timeOfDay < 0.8) {
      // Nacht: Tiefes, kühles Mitternachtsblau
      return const Color(0xFF001133).withValues(alpha: 0.5);
    } else {
      // Morgen: Frisches, zartes Morgenlicht
      return const Color(0xFF87CEEB).withValues(alpha: 0.15);
    }
  }

  // Kosten für die jeweiligen Bauteile
  double getCost(int toolId) {
    switch (toolId) {
      case 2: return 100.0; // NEU: Kosten für eine Kachel Schotter-Parzelle
      case 3: return 50.0;  // Baum / Natur
      case 8: return 120.0; // Trinkwasserleitung
      case 9: return 90.0;  // Abwasserrohr
      case 10: return 60.0; // Stromkabel
      case 4: return 30.0;  // Fußweg
      case 5: return 80.0;  // Asphalt-Straße
      case 6: return 2500.0;// Rezeption & Schranke
      case 7: return 1500.0;// Wasser-Hauptanschluss
      case 12: return 1200.0;// Abwasser-Sammelschacht
      case 13: return 2000.0;// Trafo-Station Strom
      case 14: return 20.0;  // Hecke / Zaun
      default: return 0.0;
    }
  }

  @override
  void initState() {
    super.initState();
    _generatePrototypeMap();
    _startGameLoop();
    
    renderLoop = Timer.periodic(const Duration(milliseconds: 16), (timer) {
      setState(() {
        guestX += 0.03; 
        if (guestX > 13.0) guestX = 1.0; 

        waterWaveOffset += 0.03;

        for (int x = 0; x < gridSize; x++) {
          for (int y = 0; y < gridSize; y++) {
            if (parcelState[x][y] == 1) {
              setupProgress[x][y] += 0.005; 
              if (setupProgress[x][y] >= 1.0) {
                parcelState[x][y] = 2; 
              }
            }
          }
        }

        for (var car in activeCars) {
          if (car.x < car.targetX) car.x += 0.05;
          else if (car.x > car.targetX) car.x -= 0.05;
          if (car.y < car.targetY) car.y += 0.05;
          else if (car.y > car.targetY) car.y -= 0.05;
        }

        activeCars.removeWhere((car) {
          bool arrived = (car.x - car.targetX).abs() < 0.1 && (car.y - car.targetY).abs() < 0.1;
          if (arrived) {
            parcelState[car.targetX][car.targetY] = 1; 
            setupProgress[car.targetX][car.targetY] = 0.0;
          }
          return arrived;
        });

        if (activeCars.isNotEmpty) {
          if (barrierAngle < 1.2) barrierAngle += 0.1;
        } else {
          if (barrierAngle > 0.0) barrierAngle -= 0.1;
        }
      });
    });
  }

  @override
  void dispose() {
    gameLoop?.cancel(); // Beendet den Loop, wenn das Fenster geschlossen wird
    renderLoop?.cancel(); // Wichtig: Neuen Loop auch beenden
    super.dispose();
  }

  void _startGameLoop() {
    // Ein In-Game Tag vergeht alle 3 Sekunden
    gameLoop = Timer.periodic(const Duration(seconds: 3), (timer) {
      setState(() {
        inGameDay++;
        money += dailyIncome; // Tägliche Einnahmen werden gutgeschrieben

        // Die Uhrzeit rückt pro Tick ein Stück vor
        timeOfDay += 0.1;
        if (timeOfDay >= 1.0) timeOfDay = 0.0;

        // Gäste-Ankunft an der Rezeption
        if (activeCampers < maxCapacity) {
          // Sucht den ersten leeren, funktionierenden Stellplatz
          for (int x = 0; x < gridSize; x++) {
            for (int y = 0; y < gridSize; y++) {
              if (isParcelAnchor[x][y] && parcelState[x][y] == 0) {
                parcelState[x][y] = 3; // Zustand 3 = Auto ist unterwegs zur Parzelle
                activeCampers++;

                // Abwechslung: Zufällig entscheiden, ob Wohnwagen oder Zelt kommt
                parcelIsCaravan[x][y] = Random().nextBool(); 

                // Das Auto fährt von der Rezeption (1, 9) zum Ziel-Stellplatz
                activeCars.add(VisitingCar(1.0, 9.0, x, y));
                return; // Nur 1 Gast pro In-Game-Tick zuweisen
              }
            }
          }
        } else if (activeCampers > maxCapacity) {
          activeCampers = maxCapacity; // (Abriss-Logik)
        }
      });
    });
  }

  // Generiert die Startkarte mit Wiese, 10 Parzellen, Meer, Hauptstraße, Rezeption und Platzstraße
  void _generatePrototypeMap() {
    mapData = List.generate(gridSize, (x) => List.generate(gridSize, (y) => (x >= 16) ? 1 : 0));
    
    undergroundWater = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    undergroundWaste = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    undergroundPower = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));

    connectedWater = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    connectedWaste = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    connectedPower = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));

    parcelWater = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    parcelWaste = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    parcelPower = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));

    isParcelAnchor = List.generate(gridSize, (_) => List.filled(gridSize, false));
    isBigParcel = List.generate(gridSize, (_) => List.filled(gridSize, false));
    isExtraTent = List.generate(gridSize, (_) => List.filled(gridSize, false));

    parcelState = List.generate(gridSize, (_) => List.filled(gridSize, 0));
    setupProgress = List.generate(gridSize, (_) => List.filled(gridSize, 0.0));
    parcelIsCaravan = List.generate(gridSize, (_) => List.filled(gridSize, true));

    // Öffentliche Hauptstraße am linken Rand (Spalte 0)
    for (int y = 0; y < gridSize; y++) {
      mapData[0][y] = 5; // Straße
    }

    // Rezeption & Schranke an der Einfahrt
    mapData[1][9] = 6;  
    mapData[1][10] = 5; 

    // Campingplatz-Hauptstraße von der Schranke durch den Platz
    for (int x = 2; x <= 13; x++) {
      mapData[x][10] = 5; // Straße zwischen den Parzellen-Reihen
    }

    // 10 Parzellen platzieren (2x2 Kacheln)
    int parcelCount = 0;
    for (int col = 0; col < 2; col++) {
      for (int row = 0; row < 5; row++) {
        int startX = 4 + (col * 6); 
        int startY = 2 + (row * 3); 
        
        mapData[startX][startY] = 2;
        mapData[startX+1][startY] = 2;
        mapData[startX][startY+1] = 2;
        mapData[startX+1][startY+1] = 2;
        
        parcelCount++;
        if (parcelCount >= 10) break;
      }
    }

    // Organischer Sandstrand entlang des Wassers (Spalte 15)
    for (int y = 4; y <= 15; y++) {
      mapData[15][y] = 15; // Sandstrand
    }

    // Einige isometrische Startbäume / Natur pflanzen
    mapData[2][2] = 3;
    mapData[2][3] = 3;
    mapData[3][2] = 3;

    _updateNetworks(); // Start-Berechnung des Netzwerks
  }

  // Prüft, ob eine Parzelle (Startpunkt) eine gültige Verbindung zur Straße/Rezeption (Typ 5 oder 6) hat
  bool checkRoadConnection(int startX, int startY) {
    List<List<bool>> visited = List.generate(gridSize, (_) => List.filled(gridSize, false));
    List<Point<int>> queue = [Point(startX, startY)];
    
    while (queue.isNotEmpty) {
      Point<int> p = queue.removeAt(0);
      if (p.x < 0 || p.x >= gridSize || p.y < 0 || p.y >= gridSize) continue;
      if (visited[p.x][p.y]) continue;
      visited[p.x][p.y] = true;
      
      int tileType = mapData[p.x][p.y];
      // Verbindung zur Straße (5) oder Rezeption (6) gefunden
      if (tileType == 5 || tileType == 6) return true;
      
      // Erlaubte Fortbewegung auf Wegen (4), Straßen (5), Parzellen (2) oder Rezeption (6)
      if (tileType == 2 || tileType == 4 || tileType == 5 || tileType == 6) {
        queue.add(Point(p.x + 1, p.y));
        queue.add(Point(p.x - 1, p.y));
        queue.add(Point(p.x, p.y + 1));
        queue.add(Point(p.x, p.y - 1));
      }
    }
    return false;
  }

  void buildTile(int x, int y) {
    if (selectedTool == 11) {
      // Löscht ausschließlich Leitungen im Untergrund
      setState(() {
        undergroundWater[x][y] = false;
        undergroundWaste[x][y] = false;
        undergroundPower[x][y] = false;
        _updateNetworks();
      });
      return;
    } else if (selectedTool >= 8 && selectedTool <= 10) {
      double cost = getCost(selectedTool);
      if (money < cost) return;

      // Baut im Untergrund
      setState(() {
        if (selectedTool == 8 && !undergroundWater[x][y]) {
          money -= cost;
          undergroundWater[x][y] = true;
        } else if (selectedTool == 9 && !undergroundWaste[x][y]) {
          money -= cost;
          undergroundWaste[x][y] = true;
        } else if (selectedTool == 10 && !undergroundPower[x][y]) {
          money -= cost;
          undergroundPower[x][y] = true;
        }
        _updateNetworks();
      });
      return;
    }

    // Oberfläche: Nur das Meer ist gesperrt!
    if (mapData[x][y] == 1) return; 
    if (mapData[x][y] == selectedTool) return;
    
    double cost = getCost(selectedTool);
    if (money < cost) return;

    setState(() {
      money -= cost;
      mapData[x][y] = selectedTool;
      // Wichtig: Netzwerke neu berechnen, falls ein Hauptanschluss gebaut/abgerissen wird
      _updateNetworks(); 
    });
  }

  void _updateNetworks() {
    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        connectedWater[x][y] = false; connectedWaste[x][y] = false; connectedPower[x][y] = false;
        parcelWater[x][y] = false; parcelWaste[x][y] = false; parcelPower[x][y] = false;
      }
    }

    List<Point<int>> waterStarts = [];
    List<Point<int>> wasteStarts = [];
    List<Point<int>> powerStarts = [];

    // Alle möglichen Startpunkte für die Netzwerke suchen
    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        if (mapData[x][y] == 7 && hasWaterUnlocked) waterStarts.add(Point(x, y));
        if (mapData[x][y] == 12) wasteStarts.add(Point(x, y));
        if (mapData[x][y] == 13) powerStarts.add(Point(x, y));
        // Umwelt-Mechanik: Das Meer (1) fungiert ebenfalls als gültiger Abwasser-Abfluss!
        if (mapData[x][y] == 1) wasteStarts.add(Point(x, y));
      }
    }

    _runMultiBFS(waterStarts, undergroundWater, connectedWater);
    _runMultiBFS(wasteStarts, undergroundWaste, connectedWaste);
    _runMultiBFS(powerStarts, undergroundPower, connectedPower);

    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        if (mapData[x][y] == 2) {
          // Prüft, ob das Rohr anliegt ODER die Parzelle direkt neben dem Anschluss steht
          parcelWater[x][y] = _isAdjacentToConnected(x, y, connectedWater, [7]);
          parcelWaste[x][y] = _isAdjacentToConnected(x, y, connectedWaste, [12, 1]); // Meer ist erlaubt
          parcelPower[x][y] = _isAdjacentToConnected(x, y, connectedPower, [13]);
        }
      }
    }

    // --- NEU: INTELLIGENTES ZONING FÜR PARZELLEN ---
    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        isParcelAnchor[x][y] = false;
        isBigParcel[x][y] = false;
      }
    }

    List<List<bool>> visited = List.generate(gridSize, (_) => List.filled(gridSize, false));

    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        if (mapData[x][y] == 2 && !visited[x][y]) {
          // Neue zusammenhängende Parzellen-Zone gefunden!
          List<Point<int>> zone = [];
          List<Point<int>> queue = [Point(x, y)];
          visited[x][y] = true;

          // Flood-Fill: Alle angrenzenden Schotter-Kacheln suchen
          while (queue.isNotEmpty) {
            Point<int> p = queue.removeAt(0);
            zone.add(p);
            
            List<Point<int>> neighbors = [Point(p.x + 1, p.y), Point(p.x - 1, p.y), Point(p.x, p.y + 1), Point(p.x, p.y - 1)];
            for (var n in neighbors) {
              if (n.x >= 0 && n.x < gridSize && n.y >= 0 && n.y < gridSize) {
                if (mapData[n.x][n.y] == 2 && !visited[n.x][n.y]) {
                  visited[n.x][n.y] = true;
                  queue.add(n);
                }
              }
            }
          }

          // Ab 4 Kacheln Gesamtfläche (egal welche Form!) ist genug Platz für einen Wohnwagen
          bool isBig = zone.length >= 4; 

          // Den optisch besten Platz für das Fahrzeug finden (am weitesten oben links)
          Point<int> anchor = zone[0];
          for (var p in zone) {
            if ((p.x + p.y) < (anchor.x + anchor.y)) {
              anchor = p;
            }
          }

          isParcelAnchor[anchor.x][anchor.y] = true;
          isBigParcel[anchor.x][anchor.y] = isBig;
        }
      }
    }
    // --- ENDE ZONING ---

    _calculateEconomy();
  }

  // Algorithmus, der mehrere Quellen gleichzeitig verarbeiten kann
  void _runMultiBFS(List<Point<int>> starts, List<List<bool>> pipeLayer, List<List<bool>> connectedLayer) {
    List<Point<int>> queue = [];
    List<List<bool>> visited = List.generate(gridSize, (_) => List.filled(gridSize, false));
    
    for (var start in starts) {
      queue.add(start);
      visited[start.x][start.y] = true;
    }

    while (queue.isNotEmpty) {
      Point<int> p = queue.removeAt(0);
      List<Point<int>> neighbors = [Point(p.x + 1, p.y), Point(p.x - 1, p.y), Point(p.x, p.y + 1), Point(p.x, p.y - 1)];
      
      for (var n in neighbors) {
        if (n.x >= 0 && n.x < gridSize && n.y >= 0 && n.y < gridSize) {
          if (!visited[n.x][n.y] && pipeLayer[n.x][n.y]) {
            visited[n.x][n.y] = true;
            connectedLayer[n.x][n.y] = true;
            queue.add(n);
          }
        }
      }
    }
  }

  bool _isAdjacentToConnected(int x, int y, List<List<bool>> connected, List<int> validSources) {
    if (x > 0 && (connected[x-1][y] || validSources.contains(mapData[x-1][y]))) return true;
    if (x < gridSize - 1 && (connected[x+1][y] || validSources.contains(mapData[x+1][y]))) return true;
    if (y > 0 && (connected[x][y-1] || validSources.contains(mapData[x][y-1]))) return true;
    if (y < gridSize - 1 && (connected[x][y+1] || validSources.contains(mapData[x][y+1]))) return true;
    return false;
  }

  // Prüft, ob in einer bestimmten Richtung eine Verbindung gezeichnet werden soll
  bool _hasConnection(int x, int y, int dx, int dy, List<List<bool>> layer, List<int> validSources) {
    int nx = x + dx;
    int ny = y + dy;
    if (nx < 0 || nx >= gridSize || ny < 0 || ny >= gridSize) return false;
    // Zeichnet eine Linie, wenn ein Rohr, eine Parzelle (2) oder der richtige Hauptanschluss anliegt
    return layer[nx][ny] || mapData[nx][ny] == 2 || validSources.contains(mapData[nx][ny]);
  }

  // Berechnet den Auto-Tiling-Wert (0 bis 15) für eine Wasser-Kachel
  int _getCoastMask(int x, int y) {
    int mask = 0;
    // 1 = Meer. Wenn der Nachbar KEIN Meer ist (oder der Kartenrand), brauchen wir dort Strand.
    
    // Nord (y - 1)
    if (y == 0 || mapData[x][y - 1] != 1) mask += 1;
    // Ost (x + 1)
    if (x == gridSize - 1 || mapData[x + 1][y] != 1) mask += 2;
    // Süd (y + 1)
    if (y == gridSize - 1 || mapData[x][y + 1] != 1) mask += 4;
    // West (x - 1)
    if (x == 0 || mapData[x - 1][y] != 1) mask += 8;

    return mask;
  }

  bool _isRoadConnection(int nx, int ny) {
    if (nx < 0 || nx >= gridSize || ny < 0 || ny >= gridSize) return false;
    int t = mapData[nx][ny];
    // Der Weg verbindet sich mit: Straßen (5), Fußwegen (4), Rezeption (6) und Parzellen (2)
    return t == 4 || t == 5 || t == 6 || t == 2;
  }

  void _calculateEconomy() {
    double income = 0.0;
    int capacity = 0;
    
    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        if (mapData[x][y] == 2) {
          bool hasRoad = checkRoadConnection(x, y);
          bool hasPipe = parcelWater[x][y];
          
          if (hasRoad && hasPipe) {
            income += 150.0; 
            capacity++; // Parzelle ist voll funktionsfähig
          } else if (hasRoad || hasPipe) {
            income += 70.0; 
            capacity++; // Parzelle läuft im Notbetrieb
          }
        }
      }
    }
    dailyIncome = income;
    maxCapacity = capacity;
  }

  Color getTileColor(int type) {
    switch (type) {
      case 1: return Colors.blue[800]!; // Meer
      case 2: return Colors.orange[200]!; // Parzelle
      case 3: return Colors.green[800]!; // Baum
      case 4: return Colors.grey[500]!; // Fußweg
      case 5: return Colors.grey[900]!; // Asphalt-Straße (Fahrweg)
      case 6: return Colors.amber[800]!; // Rezeption / Schranke (Einfahrt)
      case 7: return Colors.cyan[900]!;  // Hauptanschluss Wasser
      case 12: return Colors.brown[800]!; // Abwasser Stadt
      case 13: return Colors.yellow[800]!; // Strom Stadt
      case 14: return Colors.lightGreen; // Hecke / Zaun
      case 15: return const Color(0xFFE2C499); // Strand / Sandstrand
      default: return Colors.green[400]!; // Wiese
    }
  }

  Widget _buildGroundTile(int x, int y, int tileType) {
    bool isUndergroundView = selectedTool >= 8;

    return Stack(
      fit: StackFit.expand,
      children: [
        // Basis-Böden
        if (tileType == 1) // Meer
          Stack(
            fit: StackFit.expand,
            children: [
              Opacity(
                opacity: isUndergroundView ? 0.3 : 1.0,
                child: Image.asset(
                  'assets/water.png',
                  fit: BoxFit.cover,
                  filterQuality: FilterQuality.none,
                  errorBuilder: (c, e, s) => Container(color: getTileColor(1)),
                ),
              ),
              Opacity(
                opacity: isUndergroundView ? 0.3 : 1.0,
                child: CustomPaint(painter: CoastPainter(_getCoastMask(x, y))),
              ),
            ],
          )
        else if (tileType == 15) // Sandstrand
          Stack(
            fit: StackFit.expand,
            children: [
              Container(color: const Color(0xFFE2C499)),
              CustomPaint(painter: CoastPainter(_getCoastMask(x, y))),
            ],
          )
        else if (tileType == 2 || tileType == 6) // Schotter (Parzelle & Rezeption)
          Image.asset(
            'assets/gravel.png',
            fit: BoxFit.cover,
            filterQuality: FilterQuality.none,
            errorBuilder: (c, e, s) => Container(color: getTileColor(tileType)),
          )
        else if (tileType == 4 || tileType == 5) // Straßen & Wege
          Stack(
            fit: StackFit.expand,
            children: [
              Image.asset('assets/grass.png', fit: BoxFit.cover, errorBuilder: (c, e, s) => Container(color: getTileColor(0))),
              CustomPaint(
                painter: RoadPainter(
                  hasTop: _isRoadConnection(x, y - 1),
                  hasRight: _isRoadConnection(x + 1, y),
                  hasBottom: _isRoadConnection(x, y + 1),
                  hasLeft: _isRoadConnection(x - 1, y),
                  roadColor: tileType == 5 ? Colors.grey[700]! : Colors.brown[300]!,
                ),
              ),
            ],
          )
        else // Standard Wiese (Typ 0 & 3)
          Builder(
            builder: (context) {
              int variant = (x * 13 + y * 37) % 4;
              return Stack(
                fit: StackFit.expand,
                children: [
                  Image.asset(
                    'assets/grass.png',
                    fit: BoxFit.cover,
                    filterQuality: FilterQuality.none,
                    errorBuilder: (c, e, s) => Container(color: getTileColor(0)),
                  ),
                  if (!isUndergroundView && variant == 1)
                    const Center(child: Icon(Icons.eco, size: 12, color: Colors.black12)),
                ],
              );
            },
          ),

        // Versorgungs-Statuspunkte auf Parzellen
        if (tileType == 2)
          Positioned(
            bottom: 2,
            right: 2,
            child: Row(
              children: [
                if (parcelWater[x][y]) Icon(Icons.circle, size: 5, color: Colors.cyanAccent[400]),
                if (parcelWaste[x][y]) Icon(Icons.circle, size: 5, color: Colors.brown[400]),
                if (parcelPower[x][y]) Icon(Icons.circle, size: 5, color: Colors.yellowAccent[700]),
              ],
            ),
          ),

        // Untergrund-Leitungen
        if (undergroundWater[x][y])
          CustomPaint(
            size: const Size(double.infinity, double.infinity),
            painter: PipePainter(
              hasLeft: _hasConnection(x, y, -1, 0, undergroundWater, [7]),
              hasRight: _hasConnection(x, y, 1, 0, undergroundWater, [7]),
              hasTop: _hasConnection(x, y, 0, -1, undergroundWater, [7]),
              hasBottom: _hasConnection(x, y, 0, 1, undergroundWater, [7]),
              color: connectedWater[x][y] ? Colors.cyanAccent[400]! : Colors.blue[900]!,
              offset: -6.0,
            ),
          ),
        if (undergroundWaste[x][y])
          CustomPaint(
            size: const Size(double.infinity, double.infinity),
            painter: PipePainter(
              hasLeft: _hasConnection(x, y, -1, 0, undergroundWaste, [12, 1]),
              hasRight: _hasConnection(x, y, 1, 0, undergroundWaste, [12, 1]),
              hasTop: _hasConnection(x, y, 0, -1, undergroundWaste, [12, 1]),
              hasBottom: _hasConnection(x, y, 0, 1, undergroundWaste, [12, 1]),
              color: connectedWaste[x][y] ? Colors.brown[400]! : Colors.brown[900]!,
              offset: 0.0,
            ),
          ),
        if (undergroundPower[x][y])
          CustomPaint(
            size: const Size(double.infinity, double.infinity),
            painter: PipePainter(
              hasLeft: _hasConnection(x, y, -1, 0, undergroundPower, [13]),
              hasRight: _hasConnection(x, y, 1, 0, undergroundPower, [13]),
              hasTop: _hasConnection(x, y, 0, -1, undergroundPower, [13]),
              hasBottom: _hasConnection(x, y, 0, 1, undergroundPower, [13]),
              color: connectedPower[x][y] ? Colors.yellowAccent[700]! : Colors.yellow[900]!,
              offset: 6.0,
            ),
          ),
      ],
    );
  }

  Widget _buildObjectWidget(int tileType, int x, int y, Matrix4 billboardMatrix) {
    // 1. REZEPTION MIT SCHRANKE
    if (tileType == 6) {
      return Stack(
        clipBehavior: Clip.none,
        alignment: Alignment.bottomCenter,
        children: [
          // Flacher Bodenschatten
          Positioned(
            bottom: 4,
            child: Container(
              width: 55,
              height: 25,
              decoration: BoxDecoration(
                color: Colors.black.withValues(alpha: 0.35),
                borderRadius: BorderRadius.circular(30),
              ),
            ),
          ),
          // Aufrechtes Rezeptionsgebäude
          Positioned(
            bottom: 6,
            child: Transform(
              alignment: Alignment.bottomCenter,
              transform: billboardMatrix,
              child: SizedBox(
                width: 80,
                height: 80,
                child: Image.asset(
                  'assets/reception.png',
                  fit: BoxFit.contain,
                  errorBuilder: (c, e, s) => const Icon(Icons.house, size: 50, color: Colors.brown),
                ),
              ),
            ),
          ),
          // Schranke
          Positioned(
            bottom: 8,
            right: -10,
            child: Transform(
              alignment: Alignment.bottomCenter,
              transform: billboardMatrix,
              child: SizedBox(
                width: 35,
                height: 35,
                child: Stack(
                  clipBehavior: Clip.none,
                  children: [
                    Positioned(
                      bottom: 0,
                      left: 15,
                      child: Container(width: 4, height: 16, color: Colors.grey[800]),
                    ),
                    Positioned(
                      bottom: 12,
                      left: 17,
                      child: Transform(
                        alignment: Alignment.bottomLeft,
                        transform: Matrix4.identity()..rotateZ(-barrierAngle),
                        child: Container(
                          width: 30,
                          height: 4,
                          color: Colors.red[700],
                          child: Row(
                            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                            children: [
                              Container(width: 5, color: Colors.white),
                              Container(width: 5, color: Colors.white),
                            ],
                          ),
                        ),
                      ),
                    ),
                  ],
                ),
              ),
            ),
          ),
        ],
      );
    }

    // 2. PARZELLEN-INHALTE (WOHNWAGEN, ZELTE, TISCH)
    if (tileType == 2 && isParcelAnchor[x][y]) {
      int state = parcelState[x][y];
      if (state == 0) return const SizedBox.shrink();

      bool isBigPitch = isBigParcel[x][y];
      bool extraTent = isExtraTent[x][y];
      bool isCaravan = parcelIsCaravan[x][y];

      return Stack(
        clipBehavior: Clip.none,
        alignment: Alignment.bottomCenter,
        children: [
          // Flacher Bodenschatten
          Positioned(
            bottom: 4,
            child: Container(
              width: 52,
              height: 24,
              decoration: BoxDecoration(
                color: Colors.black.withValues(alpha: 0.35),
                borderRadius: BorderRadius.circular(30),
              ),
            ),
          ),
          // Fahrzeug / Hauptzelt
          Positioned(
            bottom: 6,
            child: Transform(
              alignment: Alignment.bottomCenter,
              transform: billboardMatrix,
              child: Opacity(
                opacity: state == 1 ? 0.45 : 1.0,
                child: SizedBox(
                  width: 72,
                  height: 72,
                  child: Image.asset(
                    isCaravan ? 'assets/caravan.png' : 'assets/tent.png',
                    fit: BoxFit.contain,
                    errorBuilder: (c, e, s) => Icon(
                      isCaravan ? Icons.rv_hookup : Icons.holiday_village,
                      size: 40,
                      color: Colors.orange,
                    ),
                  ),
                ),
              ),
            ),
          ),
          // Picknicktisch
          Positioned(
            bottom: 2,
            left: -12,
            child: Transform(
              alignment: Alignment.bottomCenter,
              transform: billboardMatrix,
              child: Opacity(
                opacity: state == 1 ? 0.45 : 1.0,
                child: SizedBox(
                  width: 30,
                  height: 30,
                  child: Image.asset(
                    'assets/table.png',
                    fit: BoxFit.contain,
                    errorBuilder: (c, e, s) => const Icon(Icons.table_restaurant, size: 18, color: Colors.brown),
                  ),
                ),
              ),
            ),
          ),
          // Zusatzzelt
          if (extraTent)
            Positioned(
              bottom: 2,
              right: -10,
              child: Transform(
                alignment: Alignment.bottomCenter,
                transform: billboardMatrix,
                child: Opacity(
                  opacity: state == 1 ? 0.45 : 1.0,
                  child: SizedBox(
                    width: 42,
                    height: 42,
                    child: Image.asset('assets/tent.png', fit: BoxFit.contain),
                  ),
                ),
              ),
            ),
          // Aufbau-Ladebalken
          if (state == 1)
            Positioned(
              bottom: 65,
              child: Transform(
                alignment: Alignment.center,
                transform: Matrix4.identity()..rotateZ(-cameraZ),
                child: SizedBox(
                  width: 35,
                  height: 5,
                  child: LinearProgressIndicator(
                    value: setupProgress[x][y],
                    backgroundColor: Colors.black54,
                    color: Colors.greenAccent,
                  ),
                ),
              ),
            ),
        ],
      );
    }

    // 3. BÄUME
    if (tileType == 3) {
      return Stack(
        clipBehavior: Clip.none,
        alignment: Alignment.bottomCenter,
        children: [
          Positioned(
            bottom: 2,
            child: Container(
              width: 32,
              height: 16,
              decoration: BoxDecoration(
                color: Colors.black.withValues(alpha: 0.35),
                borderRadius: BorderRadius.circular(20),
              ),
            ),
          ),
          Positioned(
            bottom: 4,
            child: Transform(
              alignment: Alignment.bottomCenter,
              transform: billboardMatrix,
              child: SizedBox(
                width: 65,
                height: 65,
                child: Image.asset(
                  'assets/tree.png',
                  fit: BoxFit.contain,
                  errorBuilder: (c, e, s) => const Icon(Icons.park, size: 40, color: Colors.green),
                ),
              ),
            ),
          ),
        ],
      );
    }

    // 4. HECKEN
    if (tileType == 14) {
      return Stack(
        clipBehavior: Clip.none,
        alignment: Alignment.bottomCenter,
        children: [
          Positioned(
            bottom: 2,
            child: Container(
              width: 40,
              height: 16,
              decoration: BoxDecoration(
                color: Colors.black.withValues(alpha: 0.35),
                borderRadius: BorderRadius.circular(20),
              ),
            ),
          ),
          Positioned(
            bottom: 4,
            child: Transform(
              alignment: Alignment.bottomCenter,
              transform: billboardMatrix,
              child: SizedBox(
                width: 55,
                height: 55,
                child: Image.asset(
                  'assets/hedge.png',
                  fit: BoxFit.contain,
                  errorBuilder: (c, e, s) => const Icon(Icons.grass, size: 30, color: Colors.lightGreen),
                ),
              ),
            ),
          ),
        ],
      );
    }

    // 5. STRAND-SONNENSCHIRME
    if (tileType == 15) {
      return Stack(
        clipBehavior: Clip.none,
        alignment: Alignment.bottomCenter,
        children: [
          Positioned(
            bottom: 2,
            child: Container(
              width: 22,
              height: 10,
              decoration: BoxDecoration(
                color: Colors.black.withValues(alpha: 0.25),
                borderRadius: BorderRadius.circular(15),
              ),
            ),
          ),
          Positioned(
            bottom: 4,
            child: Transform(
              alignment: Alignment.bottomCenter,
              transform: billboardMatrix,
              child: SizedBox(
                width: 40,
                height: 40,
                child: Image.asset(
                  'assets/parasol.png',
                  fit: BoxFit.contain,
                  errorBuilder: (c, e, s) => const Icon(Icons.beach_access, size: 24, color: Colors.orangeAccent),
                ),
              ),
            ),
          ),
        ],
      );
    }

    return const SizedBox.shrink();
  }

  Widget _buildMenuButton(String title, int toolId, IconData icon, Color color) {
    bool isActive = selectedTool == toolId;
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 4.0),
      child: ElevatedButton.icon(
        style: ElevatedButton.styleFrom(
          backgroundColor: isActive ? color : Colors.grey[200],
          foregroundColor: isActive ? (toolId == 8 || toolId == 10 ? Colors.black : Colors.white) : Colors.black87,
          alignment: Alignment.centerLeft,
          minimumSize: const Size(double.infinity, 50),
        ),
        onPressed: () => setState(() => selectedTool = toolId),
        icon: Icon(icon),
        label: Text(title, style: const TextStyle(fontWeight: FontWeight.bold)),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.blueGrey[900],
      appBar: AppBar(
        title: const Text('Camping Simulator - Prototyp'),
        backgroundColor: Theme.of(context).colorScheme.inversePrimary,
      ),
      body: Row(
        children: [
          Container(
            width: 340,
            color: Colors.white,
            padding: const EdgeInsets.all(20),
            child: SingleChildScrollView(
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  // Kamera-Steuerung
                  const Text('Kamera (Isometrie)', style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold)),
                  const SizedBox(height: 8),
                  Row(
                    children: [
                      Expanded(
                        child: ElevatedButton.icon(
                          onPressed: () => setState(() => cameraZ -= pi / 2), // Dreht 90 Grad nach links
                          icon: const Icon(Icons.rotate_left, size: 18),
                          label: const Text('Links'),
                        ),
                      ),
                      const SizedBox(width: 8),
                      Expanded(
                        child: ElevatedButton.icon(
                          onPressed: () => setState(() => cameraZ += pi / 2), // Dreht 90 Grad nach rechts
                          icon: const Icon(Icons.rotate_right, size: 18),
                          label: const Text('Rechts'),
                        ),
                      ),
                    ],
                  ),
                  const SizedBox(height: 6),
                  ElevatedButton.icon(
                    style: ElevatedButton.styleFrom(
                      minimumSize: const Size(double.infinity, 38),
                    ),
                    onPressed: () => setState(() => usePerspective = !usePerspective),
                    icon: Icon(usePerspective ? Icons.grid_view : Icons.view_in_ar, size: 18),
                    label: Text(usePerspective ? 'Ansicht: Fluchtpunkt 3D' : 'Ansicht: Parallel Isometrie'),
                  ),
                  const Divider(height: 24, thickness: 2),

                  // Wirtschafts- & Simulations-HUD
                  Container(
                    padding: const EdgeInsets.all(12),
                    decoration: BoxDecoration(
                      color: Colors.blueGrey[800],
                      borderRadius: BorderRadius.circular(8),
                    ),
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text('Tag: $inGameDay', 
                          style: const TextStyle(color: Colors.white, fontSize: 14, fontWeight: FontWeight.bold)),
                        const SizedBox(height: 4),
                        Text('Gäste: $activeCampers / $maxCapacity', 
                          style: const TextStyle(color: Colors.orangeAccent, fontSize: 14)),
                        const Divider(color: Colors.white24),
                        Text('Budget: ${money.toStringAsFixed(0)} €', 
                          style: const TextStyle(color: Colors.greenAccent, fontSize: 16, fontWeight: FontWeight.bold)),
                        const SizedBox(height: 4),
                        Text('Tagesbilanz: +${dailyIncome.toStringAsFixed(0)} €', 
                          style: const TextStyle(color: Colors.white70, fontSize: 13)),
                      ],
                    ),
                  ),
                  const SizedBox(height: 16),
                  
                  // Tech-Tree / Upgrade-Baum
                  const Text('Tech-Tree / Upgrades', style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold)),
                  const SizedBox(height: 8),
                  ElevatedButton.icon(
                    style: ElevatedButton.styleFrom(
                      backgroundColor: hasWaterUnlocked ? Colors.cyan[800] : Colors.grey[300],
                      foregroundColor: hasWaterUnlocked ? Colors.white : Colors.black54,
                      minimumSize: const Size(double.infinity, 50),
                    ),
                    onPressed: () {
                      if (!hasWaterUnlocked && money >= waterUpgradeCost) {
                        setState(() {
                          money -= waterUpgradeCost;
                          hasWaterUnlocked = true;
                          _updateNetworks(); // Berechnet Netzwerke & Einnahmen neu
                        });
                      }
                    },
                    icon: Icon(hasWaterUnlocked ? Icons.check_circle : Icons.lock),
                    label: Text(hasWaterUnlocked ? 'Trinkwassernetz aktiv' : 'Netzanschluss kaufen (5.000 €)'),
                  ),
                  const Divider(height: 20, thickness: 2),

                  // Städtische Anschlüsse
                  const Text('Städtische Anschlüsse', style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold)),
                  const SizedBox(height: 8),
                  _buildMenuButton('Wasser-Hauptanschluss', 7, Icons.water_damage, Colors.cyan[900]!),
                  _buildMenuButton('Abwasser-Sammelschacht', 12, Icons.delete, Colors.brown[800]!),
                  _buildMenuButton('Trafo-Station (Strom)', 13, Icons.electric_bolt, Colors.yellow[800]!),
                  const Divider(height: 20, thickness: 2),

                  const Text('Baumaterial & Natur', style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold)),
                  const SizedBox(height: 8),
                  _buildMenuButton('Stellplatz ausweisen', 2, Icons.crop_free, Colors.orange[400]!),
                  _buildMenuButton('Hecke / Zaun', 14, Icons.grass, Colors.lightGreen),
                  _buildMenuButton('Straße / Fahrweg', 5, Icons.directions_car, Colors.grey[900]!),
                  _buildMenuButton('Fußweg', 4, Icons.directions_walk, Colors.grey[500]!),
                  _buildMenuButton('Rezeption & Schranke', 6, Icons.security, Colors.amber[800]!),
                  _buildMenuButton('Baum pflanzen', 3, Icons.park, Colors.green[800]!),
                  _buildMenuButton('Trinkwasserleitung', 8, Icons.water_drop, Colors.cyanAccent[400]!),
                  _buildMenuButton('Abwasserrohr', 9, Icons.delete_outline, Colors.brown[600]!),
                  _buildMenuButton('Stromkabel', 10, Icons.bolt, Colors.yellowAccent[700]!),
                  _buildMenuButton('Abriss (Leitungen)', 11, Icons.link_off, Colors.redAccent),
                  const Divider(height: 20, thickness: 2),
                  _buildMenuButton('Abriss (Wiese)', 0, Icons.grass, Colors.green),
                  const SizedBox(height: 16),
                  const Text('Legende:', style: TextStyle(fontWeight: FontWeight.bold)),
                  const SizedBox(height: 8),
                  Row(children: [Icon(Icons.square, color: Colors.blue[800]), const SizedBox(width: 8), const Text('Meer (Einleitung)')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.orange[200]), const SizedBox(width: 8), const Text('Stellplatz Parzelle')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.cyan[900]), const SizedBox(width: 8), const Text('Hauptanschluss Wasser')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.brown[800]), const SizedBox(width: 8), const Text('Abwasser Schacht Stadt')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.yellow[800]), const SizedBox(width: 8), const Text('Trafo-Station Strom')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.grey[900]), const SizedBox(width: 8), const Text('Straße / Fahrweg')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.grey[500]), const SizedBox(width: 8), const Text('Fußweg')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.amber[800]), const SizedBox(width: 8), const Text('Rezeption & Schranke')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.cyanAccent[400]), const SizedBox(width: 8), const Text('Trinkwasser (Untergrund)')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.brown[600]), const SizedBox(width: 8), const Text('Abwasser (Untergrund)')]),
                  const SizedBox(height: 4),
                  Row(children: [Icon(Icons.square, color: Colors.yellowAccent[700]), const SizedBox(width: 8), const Text('Strom (Untergrund)')]),
                ],
              ),
            ),
          ),
          Expanded(
            child: Stack(
              fit: StackFit.expand,
              children: [
                InteractiveViewer(
                  boundaryMargin: const EdgeInsets.all(500),
                  minScale: 0.1,
                  maxScale: 4.0,
                  constrained: false,
                  child: Center(
                    child: Transform(
                      transform: Matrix4.identity()
                        ..scale(1.0, 0.5)
                        ..rotateZ(cameraZ),
                      alignment: FractionalOffset.center,
                      child: GestureDetector(
                        onPanStart: (details) => isDragging = true,
                        onPanEnd: (details) => isDragging = false,
                        child: Container(
                          width: 800,
                          height: 800,
                          decoration: BoxDecoration(
                            border: Border.all(color: Colors.white24, width: 2),
                            boxShadow: const [
                              BoxShadow(color: Colors.black54, blurRadius: 40, offset: Offset(20, 20))
                            ]
                          ),
                          child: Builder(
                            builder: (context) {
                              Matrix4 parentMatrix = Matrix4.identity()
                                ..scale(1.0, 0.5)
                                ..rotateZ(cameraZ);
                              Matrix4 billboardMatrix = Matrix4.copy(parentMatrix)..invert();

                              double sinZ = sin(cameraZ);
                              double cosZ = cos(cameraZ);
                              const double tileSize = 40.0;

                              // PASS 1: Alle flachen Bodenkacheln
                              List<Widget> groundLayer = [];
                              for (int x = 0; x < gridSize; x++) {
                                for (int y = 0; y < gridSize; y++) {
                                  groundLayer.add(
                                    Positioned(
                                      left: x * tileSize,
                                      top: y * tileSize,
                                      width: tileSize,
                                      height: tileSize,
                                      child: MouseRegion(
                                        onEnter: (_) {
                                          if (isDragging) buildTile(x, y);
                                        },
                                        child: GestureDetector(
                                          onTap: () => buildTile(x, y),
                                          child: _buildGroundTile(x, y, mapData[x][y]),
                                        ),
                                      ),
                                    ),
                                  );
                                }
                              }

                              // PASS 2: Aufrechte 3D-Objekte einsammeln & sortieren
                              List<WorldObject> objectList = [];

                              for (int x = 0; x < gridSize; x++) {
                                for (int y = 0; y < gridSize; y++) {
                                  int type = mapData[x][y];

                                  if (type == 2 && isParcelAnchor[x][y] && parcelState[x][y] > 0) {
                                    objectList.add(WorldObject(
                                      x: x + 0.5,
                                      y: y + 0.5,
                                      sinZ: sinZ,
                                      cosZ: cosZ,
                                      widget: Positioned(
                                        left: (x + 0.5) * tileSize - (tileSize / 2),
                                        top: (y + 0.5) * tileSize - (tileSize / 2),
                                        width: tileSize,
                                        height: tileSize,
                                        child: _buildObjectWidget(type, x, y, billboardMatrix),
                                      ),
                                    ));
                                  } else if (type == 3 || type == 6 || type == 14 || type == 15) {
                                    objectList.add(WorldObject(
                                      x: x.toDouble(),
                                      y: y.toDouble(),
                                      sinZ: sinZ,
                                      cosZ: cosZ,
                                      widget: Positioned(
                                        left: x * tileSize,
                                        top: y * tileSize,
                                        width: tileSize,
                                        height: tileSize,
                                        child: _buildObjectWidget(type, x, y, billboardMatrix),
                                      ),
                                    ));
                                  }
                                }
                              }

                              for (var car in activeCars) {
                                objectList.add(WorldObject(
                                  x: car.x,
                                  y: car.y,
                                  sinZ: sinZ,
                                  cosZ: cosZ,
                                  widget: Positioned(
                                    left: car.x * tileSize,
                                    top: car.y * tileSize,
                                    width: tileSize,
                                    height: tileSize,
                                    child: Transform(
                                      alignment: Alignment.bottomCenter,
                                      transform: billboardMatrix,
                                      child: const Icon(Icons.directions_car, size: 28, color: Colors.blueAccent),
                                    ),
                                  ),
                                ));
                              }

                              objectList.add(WorldObject(
                                x: guestX,
                                y: guestY,
                                sinZ: sinZ,
                                cosZ: cosZ,
                                widget: Positioned(
                                  left: guestX * tileSize,
                                  top: guestY * tileSize,
                                  width: tileSize,
                                  height: tileSize,
                                  child: Transform(
                                    alignment: Alignment.bottomCenter,
                                    transform: billboardMatrix,
                                    child: const Icon(Icons.emoji_people, size: 32, color: Colors.white),
                                  ),
                                ),
                              ));

                              objectList.sort((a, b) => a.depth.compareTo(b.depth));

                              return SizedBox(
                                width: gridSize * tileSize,
                                height: gridSize * tileSize,
                                child: Stack(
                                  clipBehavior: Clip.none,
                                  children: [
                                    ...groundLayer,
                                    ...objectList.map((obj) => obj.widget),
                                  ],
                                ),
                              );
                            },
                          ),
                        ),
                      ),
                    ),
                  ),
                ),

                IgnorePointer(
                  child: AnimatedContainer(
                    duration: const Duration(seconds: 2),
                    color: getAtmosphereColor(),
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}

class PipePainter extends CustomPainter {
  final bool hasTop, hasBottom, hasLeft, hasRight;
  final Color color;
  final double offset; // Verschiebt die Linie, damit sie sich nicht überlagern

  PipePainter({
    required this.hasTop, required this.hasBottom, 
    required this.hasLeft, required this.hasRight, 
    required this.color, required this.offset
  });

  @override
  void paint(Canvas canvas, Size size) {
    final paint = Paint()
      ..color = color
      ..strokeWidth = 4.0 // Dicke der Leitung
      ..strokeCap = StrokeCap.square;
    
    // Die Mitte der jeweiligen Leitung (verschoben durch den Offset)
    final center = Offset(size.width / 2 + offset, size.height / 2 + offset);

    if (hasLeft) canvas.drawLine(Offset(0, center.dy), center, paint);
    if (hasRight) canvas.drawLine(center, Offset(size.width, center.dy), paint);
    if (hasTop) canvas.drawLine(Offset(center.dx, 0), center, paint);
    if (hasBottom) canvas.drawLine(center, Offset(center.dx, size.height), paint);
    
    // Kleiner Knotenpunkt in der Mitte
    canvas.drawCircle(center, 2.0, paint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) => true;
}

class CoastPainter extends CustomPainter {
  final int mask;
  CoastPainter(this.mask);

  @override
  void paint(Canvas canvas, Size size) {
    // Eine weiche Sandfarbe für den Strand
    final paint = Paint()..color = const Color(0xFFE2C284);
    const double beachWidth = 8.0; // Wie weit der Sand ins Wasser ragt

    // Bit-Prüfung: Zeichnet den Strandrand an den entsprechenden Kanten
    if ((mask & 1) != 0) canvas.drawRect(Rect.fromLTRB(0, 0, size.width, beachWidth), paint); // Nord
    if ((mask & 2) != 0) canvas.drawRect(Rect.fromLTRB(size.width - beachWidth, 0, size.width, size.height), paint); // Ost
    if ((mask & 4) != 0) canvas.drawRect(Rect.fromLTRB(0, size.height - beachWidth, size.width, size.height), paint); // Süd
    if ((mask & 8) != 0) canvas.drawRect(Rect.fromLTRB(0, 0, beachWidth, size.height), paint); // West
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) => true;
}

class RoadPainter extends CustomPainter {
  final bool hasTop, hasRight, hasBottom, hasLeft;
  final Color roadColor;

  RoadPainter({
    required this.hasTop,
    required this.hasRight,
    required this.hasBottom,
    required this.hasLeft,
    required this.roadColor,
  });

  @override
  void paint(Canvas canvas, Size size) {
    final paint = Paint()..color = roadColor;
    final double w = size.width;
    final double h = size.height;
    
    // Die Dicke des Weges (20% Randabstand bedeutet der Weg füllt 60% der Kachel)
    final double pStart = w * 0.2; 
    final double pEnd = w * 0.8;

    // 1. Das abgerundete Zentrum des Weges
    canvas.drawRRect(
      RRect.fromLTRBR(pStart, pStart, pEnd, pEnd, const Radius.circular(6)), 
      paint
    );

    // 2. Die Arme zu den Nachbarn (ohne Rundung an der Außenkante für nahtlosen Übergang)
    if (hasTop) canvas.drawRect(Rect.fromLTRB(pStart, 0, pEnd, pStart + 1), paint);
    if (hasRight) canvas.drawRect(Rect.fromLTRB(pEnd - 1, pStart, w, pEnd), paint);
    if (hasBottom) canvas.drawRect(Rect.fromLTRB(pStart, pEnd - 1, pEnd, h), paint);
    if (hasLeft) canvas.drawRect(Rect.fromLTRB(0, pStart, pStart + 1, pEnd), paint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) => true;
}

class IsometricTilePainter extends CustomPainter {
  final int tileType;
  IsometricTilePainter(this.tileType);

  @override
  void paint(Canvas canvas, Size size) {
    final paint = Paint()
      ..color = _getTileColor()
      ..style = PaintingStyle.fill;

    // Isometrisches Karo (Rhombus)
    final path = Path()
      ..moveTo(size.width / 2, 0)
      ..lineTo(size.width, size.height / 2)
      ..lineTo(size.width / 2, size.height)
      ..lineTo(0, size.height / 2)
      ..close();

    canvas.drawPath(path, paint);

    // Subtiler Rand für die plastische Kantenwirkung
    final borderPaint = Paint()
      ..color = Colors.black.withOpacity(0.15)
      ..style = PaintingStyle.stroke
      ..strokeWidth = 1.0;
    canvas.drawPath(path, borderPaint);
  }

  Color _getTileColor() {
    switch (tileType) {
      case 1: return const Color(0xFF589c32); // Satter, natürlicher Rasen
      case 2: return const Color(0xFF8c7b65); // Strukturierter Schotter
      default: return const Color(0xFF4c8728);
    }
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) => false;
}
