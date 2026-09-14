// lib/main.dart
import 'dart:async';
import 'dart:math';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter/scheduler.dart';

import 'game_items.dart'; // <--- NEUER IMPORT

void main() {
  runApp(const CampingSimApp());
}

// --- NATÜRLICHE CAMPING-FARBPALETTE (Vom Kumpel) ---
class CampingColors {
  static const Color woodDark = Color(0xFF5C4033);      // Sattes Holzbraun
  static const Color woodMedium = Color(0xFF8B5A2B);    // Mittleres Braun
  static const Color beigeBackground = Color(0xFFF5F2EB); // Warmes Pergament-Beige
  static const Color forestGreen = Color(0xFF4A6B41);   // Sanftes Waldgrün
  static const Color textDark = Color(0xFF3B2F2F);      // Dunkler Text
  static const Color moneyGreen = Color(0xFF2E7D32);    // Geld-Grün
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

class PlantVisual {
  final String asset;
  final double size;
  final double yOffset;
  const PlantVisual(this.asset, this.size, this.yOffset);
}

PlantVisual resolvePlantVisual(int type, int x, int y) {
  // Streuungswert für abwechslungsreiche Varianten pro Kachel
  final int seed = (x * 37 + y * 19).abs();

  switch (type) {
    // --- 1. NADELBÄUME (8 dichte Tannen + 8 halbdichte Varianten) ---
    case 30:
    case 3:
      final pines = [
        'pine-full01.png', 'pine-full02.png', 'pine-full03.png', 'pine-full04.png',
        'pine-full05.png', 'pine-full06.png', 'pine-full07.png', 'pine-full08.png',
        'pine-half01.png', 'pine-half02.png', 'pine-half03.png', 'pine-half04.png',
      ];
      return PlantVisual('assets/${pines[seed % pines.length]}', 72.0, 24.0);

    // --- 2. LAUBBÄUME (3 große Laubbäume) ---
    case 31:
      final bigTrees = ['bigtree01.png', 'bigtree02.png', 'bigtree03.png'];
      return PlantVisual('assets/${bigTrees[seed % bigTrees.length]}', 76.0, 26.0);

    // --- 3. ZYPRESSEN & SCHLANKE TANNEN (8 schlanke Tannen + 3 Hanf/Schilfbäume) ---
    case 32:
      final slimTrees = [
        'pine-none01.png', 'pine-none02.png', 'pine-none03.png', 'pine-none04.png',
        'pine-none05.png', 'pine-none06.png', 'pine-none07.png', 'pine-none08.png',
        'hemp01.png', 'hemp02.png', 'hemp03.png',
      ];
      return PlantVisual('assets/${slimTrees[seed % slimTrees.length]}', 64.0, 20.0);

    // --- 4. BÜSCHE & STRÄUCHER (5 Büsche + 10 Ziersträucher) ---
    case 33:
      final bushes = [
        'bush01.png', 'bush02.png', 'bush03.png', 'bush04.png', 'bush05.png',
        'shrub1-01.png', 'shrub1-02.png', 'shrub1-03.png', 'shrub1-04.png', 'shrub1-05.png',
        'shrub2-01.png', 'shrub2-02.png', 'shrub2-03.png', 'shrub2-04.png', 'shrub2-05.png',
      ];
      return PlantVisual('assets/${bushes[seed % bushes.length]}', 38.0, 10.0);

    // --- 5. PALMEN (6 mediterrane Palmen) ---
    case 37:
      final palms = [
        'palm01.png', 'palm02.png', 'palm03.png',
        'palm04.png', 'palm05.png', 'palm06.png',
      ];
      return PlantVisual('assets/${palms[seed % palms.length]}', 72.0, 24.0);

    // --- 6. BAMBUS (6 Bambus-Haine) ---
    case 38:
      final bamboos = [
        'bamboo01.png', 'bamboo02.png', 'bamboo03.png',
        'bamboo04.png', 'bamboo05.png', 'bamboo06.png',
      ];
      return PlantVisual('assets/${bamboos[seed % bamboos.length]}', 56.0, 16.0);

    // --- 7. KAKTEEN (4 Wüsten-Kakteen) ---
    case 39:
      final cacti = ['cactus01.png', 'cactus02.png', 'cactus03.png', 'cactus04.png'];
      return PlantVisual('assets/${cacti[seed % cacti.length]}', 48.0, 14.0);

    // --- 8. TROPISCHE PFLANZEN & BLUMEN (5 Tropenblumen) ---
    case 34:
    case 51:
      final tropicals = [
        'tropical01.png', 'tropical02.png', 'tropical03.png',
        'tropical04.png', 'tropical05.png',
      ];
      return PlantVisual('assets/${tropicals[seed % tropicals.length]}', 40.0, 8.0);

    // --- 9. GRÄSER & WILDKRÄUTER (5 Ziergräser + 6 Wildkräuter + 2 Swirls) ---
    case 16:
    case 52:
      final grasses = [
        'grasses01.png', 'grasses02.png', 'grasses03.png', 'grasses04.png', 'grasses05.png',
        'weed01.png', 'weed02.png', 'weed03.png', 'weed04.png', 'weed05.png', 'weed06.png',
        'swirl01.png', 'swirl02.png',
      ];
      return PlantVisual('assets/${grasses[seed % grasses.length]}', 32.0, 6.0);

    // --- 10. HECKE (Zierhecke) ---
    case 14:
    case 36:
      return const PlantVisual('assets/hedge.png', 55.0, 16.0);

    // --- 11. SONNENSCHIRM ---
    case 15:
    case 90:
      return const PlantVisual('assets/parasol.png', 40.0, 14.0);

    // --- 12. STEIN ---
    case 18:
    case 35:
      return const PlantVisual('assets/stone.png', 34.0, 6.0);

    default:
      return const PlantVisual('assets/tree.png', 60.0, 16.0);
  }
}

class _GameScreenState extends State<GameScreen> with SingleTickerProviderStateMixin {
  final int gridSize = 20; // Zurück auf die Originalgröße
  late List<List<int>> mapData;

  // Kamera-Winkel für Isometrie
  double cameraZ = -pi / 4;
  final double cameraTilt = 0.95;
  bool usePerspective = false;

  // Werkzeug-ID
  int selectedTool = 5;
  bool isDragging = false;

  final FocusNode _focusNode = FocusNode();
  final TransformationController _mapController = TransformationController();

  // Hover-Position für den "Geist"
  int _hoveredX = -1;
  int _hoveredY = -1;

  // Tasten-Status für flüssige Bewegung
  bool _wPressed = false;
  bool _aPressed = false;
  bool _sPressed = false;
  bool _dPressed = false;

  late Ticker _ticker;
  Duration _lastTick = Duration.zero;

  // UI Status
  bool _isLegendVisible = false;
  String _selectedCategory = ''; // Leer = Menü zu, oder 'Zoning'
  String _activeToolName = 'Keins';
  bool _isGodMode = false;

  // Untergrund-Netze
  late List<List<bool>> undergroundWater;
  late List<List<bool>> undergroundWaste;
  late List<List<bool>> undergroundPower;

  // Netzwerk-Status
  late List<List<bool>> connectedWater;
  late List<List<bool>> connectedWaste;
  late List<List<bool>> connectedPower;

  // Parzellen-Status (jetzt direkt 1:1 pro Kachel)
  late List<List<bool>> parcelWater;
  late List<List<bool>> parcelWaste;
  late List<List<bool>> parcelPower;
  late List<List<int>> parcelState;
  late List<List<double>> setupProgress;
  late List<List<bool>> parcelIsCaravan;

  // Wirtschafts-Variablen
  double money = 15000.0;
  double dailyIncome = 0.0;
  double prestige = 0.0; // NEU: Prestige-Wert des Platzes

  // Tech-Tree
  bool hasWaterUnlocked = false;
  double waterUpgradeCost = 5000.0;

  // Simulation
  Timer? gameLoop;
  Timer? renderLoop;
  double guestX = 1.0;
  double guestY = 11.0; // Auf der Asphaltstraße (y = 11.0)
  double waterWaveOffset = 0.0;
  double timeOfDay = 0.25;
  int inGameDay = 1;
  int activeCampers = 0;
  int maxCapacity = 0;

  List<VisitingCar> activeCars = [];
  double barrierAngle = 0.0;

  bool _isParcelId(int t) => t == 2 || (t >= 20 && t <= 24);
  bool _isRoadId(int t) => t == 4 || t == 5 || t == 6 || (t >= 1 && t <= 6) || (t >= 20 && t <= 23);

  Color getAtmosphereColor() {
    return Colors.transparent;
  }

  // Kosten für die jeweiligen Bauteile
  double getCost(int toolId) {
    switch (toolId) {
      case 2: return 100.0; // Parzelle
      case 3: return 50.0;  // Baum
      case 16: return 15.0; // Pflanze
      case 17: return 5.0;  // Blumen
      case 18: return 10.0; // Stein
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

    // Ticker für flüssige Kamerabewegung starten
    _ticker = createTicker(_onTick)..start();

    // Fordert den Fokus für die Tastatursteuerung an
    WidgetsBinding.instance.addPostFrameCallback((_) {
      _focusNode.requestFocus();
    });

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

  void _onTick(Duration elapsed) {
    if (_lastTick == Duration.zero) {
      _lastTick = elapsed;
      return;
    }

    final double dt = (elapsed - _lastTick).inMilliseconds / 1000.0;
    _lastTick = elapsed;

    if (!_wPressed && !_sPressed && !_aPressed && !_dPressed) return;

    const double speed = 500.0;
    double dx = 0.0;
    double dy = 0.0;

    if (_wPressed) dy += speed * dt;
    if (_sPressed) dy -= speed * dt;
    if (_aPressed) dx += speed * dt;
    if (_dPressed) dx -= speed * dt;

    final matrix = _mapController.value.clone();
    matrix.translate(dx, dy);
    _mapController.value = matrix;
  }

  @override
  void dispose() {
    _ticker.dispose();
    _focusNode.dispose();
    _mapController.dispose();
    gameLoop?.cancel();
    renderLoop?.cancel();
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
        // Chance steigt mit Prestige: Basis 20% + Bonus durch Prestige
        double arrivalChance = 0.2 + (prestige / 200);
        if (Random().nextDouble() < arrivalChance && activeCampers < maxCapacity) {
          for (int x = 0; x < gridSize; x++) {
            for (int y = 0; y < gridSize; y++) {
              // Direkte Prüfung auf freie 1x1-Parzelle
              if (_isParcelId(mapData[x][y]) && parcelState[x][y] == 0) {
                parcelState[x][y] = 3;
                activeCampers++;
                parcelIsCaravan[x][y] = Random().nextBool();
                activeCars.add(VisitingCar(1.0, 9.0, x, y));
                return;
              }
            }
          }
        } else if (activeCampers > maxCapacity) {
          activeCampers = maxCapacity; // (Abriss-Logik)
        }
      });
    });
  }

  // Generiert die Startkarte mit Wiese, 10 Parzellen, Meer, Hauptstraße und Rezeption
  void _generatePrototypeMap() {
    mapData = List.generate(gridSize, (x) => List.generate(gridSize, (y) => (x >= gridSize - 3) ? 1 : 0));

    undergroundWater = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    undergroundWaste = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    undergroundPower = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));

    connectedWater = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    connectedWaste = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    connectedPower = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));

    parcelWater = List.generate(gridSize, (_) => List.filled(gridSize, false));
    parcelWaste = List.generate(gridSize, (_) => List.filled(gridSize, false));
    parcelPower = List.generate(gridSize, (_) => List.filled(gridSize, false));

    parcelState = List.generate(gridSize, (_) => List.filled(gridSize, 0));
    setupProgress = List.generate(gridSize, (_) => List.filled(gridSize, 0.0));
    parcelIsCaravan = List.generate(gridSize, (_) => List.filled(gridSize, true));

    // Öffentliche Hauptstraße am linken Rand
    for (int y = 0; y < gridSize; y++) {
      mapData[0][y] = 5;
    }

    // Rezeption & Schranke
    int midY = gridSize ~/ 2;
    mapData[1][midY] = 6;
    mapData[1][midY + 1] = 5;

    // Hauptweg in den Platz
    for (int x = 2; x <= 15; x++) {
      mapData[x][midY + 1] = 5;
    }

    // 10 Start-Parzellen als saubere 1x1-Kacheln direkt an der Straße
    for (int i = 0; i < 5; i++) {
      int posX = 3 + (i * 2);
      mapData[posX][midY] = 2;     // Oberhalb der Straße (y = 10, Straße ist bei y = 11)
      mapData[posX][midY + 2] = 2; // Unterhalb der Straße (y = 12, Straße ist bei y = 11)
    }

    // Saubere Küste & Wasser aus Bild 1
    for (int y = 0; y < gridSize; y++) {
      mapData[gridSize - 4][y] = 15; // Sandstrand (Kachel 16)
      mapData[gridSize - 3][y] = 1;  // Wasser
      mapData[gridSize - 2][y] = 1;  // Tiefes Wasser
      mapData[gridSize - 1][y] = 1;  // Tiefes Wasser
    }

    _updateNetworks();
  }

  // Prüft, ob eine Parzelle (Startpunkt) eine gültige Verbindung zur Straße/Rezeption hat
  bool checkRoadConnection(int startX, int startY) {
    List<List<bool>> visited = List.generate(gridSize, (_) => List.filled(gridSize, false));
    List<Point<int>> queue = [Point(startX, startY)];

    while (queue.isNotEmpty) {
      Point<int> p = queue.removeAt(0);
      if (p.x < 0 || p.x >= gridSize || p.y < 0 || p.y >= gridSize) continue;
      if (visited[p.x][p.y]) continue;
      visited[p.x][p.y] = true;

      int t = mapData[p.x][p.y];
      if (_isRoadId(t)) return true;

      if (_isParcelId(t) || _isRoadId(t)) {
        queue.add(Point(p.x + 1, p.y));
        queue.add(Point(p.x - 1, p.y));
        queue.add(Point(p.x, p.y + 1));
        queue.add(Point(p.x, p.y - 1));
      }
    }
    return false;
  }

  void buildTile(int x, int y) {
    if (selectedTool == 0 || selectedTool == 99) {
      setState(() {
        undergroundWater[x][y] = false;
        undergroundWaste[x][y] = false;
        undergroundPower[x][y] = false;
        mapData[x][y] = 0;
        _updateNetworks();
      });
      return;
    }

    if (selectedTool >= 10 && selectedTool <= 12) {
      final item = allItems.firstWhere((i) => i.id == selectedTool);
      if (money < item.cost && !_isGodMode) return;
      setState(() {
        if (!_isGodMode) money -= item.cost;
        if (selectedTool == 10) undergroundWater[x][y] = true;
        if (selectedTool == 11) undergroundWaste[x][y] = true;
        if (selectedTool == 12) undergroundPower[x][y] = true;
        _updateNetworks();
      });
      return;
    }

    if (mapData[x][y] == 1) return; // Meer sperren
    if (mapData[x][y] == selectedTool) return;

    try {
      final item = allItems.firstWhere((i) => i.id == selectedTool);
      if (money < item.cost && !_isGodMode) return;

      setState(() {
        if (!_isGodMode) money -= item.cost;
        mapData[x][y] = selectedTool;
        _updateNetworks();
      });
    } catch (_) {}
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

    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        if (mapData[x][y] == 7 && hasWaterUnlocked) waterStarts.add(Point(x, y));
        if (mapData[x][y] == 12) wasteStarts.add(Point(x, y));
        if (mapData[x][y] == 13) powerStarts.add(Point(x, y));
        if (mapData[x][y] == 1) wasteStarts.add(Point(x, y)); // Meer
      }
    }

    _runMultiBFS(waterStarts, undergroundWater, connectedWater);
    _runMultiBFS(wasteStarts, undergroundWaste, connectedWaste);
    _runMultiBFS(powerStarts, undergroundPower, connectedPower);

    // Direkte 1x1-Versorgungsprüfung für jede Parzelle
    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        if (_isParcelId(mapData[x][y])) {
          parcelWater[x][y] = _isAdjacentToConnected(x, y, connectedWater, [7]);
          parcelWaste[x][y] = _isAdjacentToConnected(x, y, connectedWaste, [12, 98]); // 98 = Meer
          parcelPower[x][y] = _isAdjacentToConnected(x, y, connectedPower, [13]);
        }
      }
    }

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
    double currentPrestige = 0.0;

    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        int tile = mapData[x][y];

        // Prestige-Berechnung
        if (tile == 3 || tile == 40) currentPrestige += 5;   // Baum
        if (tile == 16 || tile == 44) currentPrestige += 2;  // Pflanze / Blume
        if (tile == 17) currentPrestige += 3;                // Blumen
        if (tile == 18 || tile == 45) currentPrestige += 1;  // Stein

        if (_isParcelId(tile)) {
          bool hasRoad = checkRoadConnection(x, y);
          bool hasPipe = parcelWater[x][y];

          if (hasRoad && hasPipe) {
            income += 150.0;
            capacity++;
          } else if (hasRoad || hasPipe) {
            income += 70.0;
            capacity++;
          } else {
            // Jede platzierte Parzelle erhöht die Kapazität um mindestens 1
            capacity++;
          }
        }
      }
    }
    // Prestige Bonus: +0.5% Einkommen pro Prestige-Punkt
    dailyIncome = income * (1 + (currentPrestige / 200));
    maxCapacity = capacity;
    prestige = currentPrestige;
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

  Widget _getTileTexture(int tileType) {
    switch (tileType) {
      case 1: // Schotterstraße / Pfad
        return Image.asset('assets/medieval_architecture_floor_dirt_path_01.png', fit: BoxFit.cover);
      case 2: // Stellplatz-Schotter
        return Image.asset('assets/medieval_architecture_floor_dirt_path_01.png', fit: BoxFit.cover);
      case 3: // Kiesweg
        return Image.asset('assets/medieval_architecture_floor_dirt_path_01.png', fit: BoxFit.cover);
      case 6: // Rezeption / Schranken-Vorplatz (Kopfsteinpflaster)
        return Image.asset('assets/medieval_architecture_floor_cobblestone_road_01.png', fit: BoxFit.cover);
      case 80: // Pool-Umrandung / Gehwegplatten
        return Image.asset('assets/medieval_architecture_floor_stone_slab_interior_01.png', fit: BoxFit.cover);
      case 85: // Holzsteg (Beach / Bar)
        return Image.asset('assets/medieval_architecture_floor_wood_plank_interior_01.png', fit: BoxFit.cover);
      default:
        return Image.asset('assets/grass.png', fit: BoxFit.cover);
    }
  }

  Widget _buildGroundTile(int x, int y, int tileType) {
    bool isUndergroundView = selectedTool >= 8 && selectedTool <= 15;
    // NEU: Ein zentraler Wert, der alle Böden beim Röntgen auf 30% dimmt
    double groundOpacity = isUndergroundView ? 0.3 : 1.0;

    return Stack(
      fit: StackFit.expand,
      children: [
        // Basis-Böden
        if (tileType == 1) // Meer
          Stack(
            fit: StackFit.expand,
            children: [
              Opacity(
                opacity: groundOpacity,
                child: Image.asset(
                  'assets/water.png',
                  fit: BoxFit.cover,
                  filterQuality: FilterQuality.none,
                  errorBuilder: (c, e, s) => Container(color: const Color(0xFF006994)),
                ),
              ),
              // Brandung nur auf dem Wasser
              Opacity(
                opacity: groundOpacity,
                child: CustomPaint(
                  painter: CoastPainter(
                    mask: _getCoastMask(x, y),
                    waveOffset: waterWaveOffset,
                    gridY: y,
                  ),
                ),
              ),
            ],
          )
        else if (tileType == 15) // Sandstrand: Nur sauberer, trockener Sand
          Opacity(
            opacity: groundOpacity,
            child: Container(color: const Color(0xFFE2C499)),
          )
        // --- 3. STELLPLÄTZE (ZONING) ---
        // A) Freifläche (ID 23): Naturrasen mit Platzmarkierungs-Ecken
        else if (tileType == 23)
          Opacity(
            opacity: groundOpacity,
            child: Stack(
              fit: StackFit.expand,
              children: [
                Image.asset('assets/grass.png', fit: BoxFit.cover),
                CustomPaint(painter: ParcelBorderPainter(parcelType: 23)),
              ],
            ),
          )
        // B) Gehobener Stellplatz 2 (ID 21): Kiesbett mit Holzkanten
        else if (tileType == 21)
          Opacity(
            opacity: groundOpacity,
            child: Stack(
              fit: StackFit.expand,
              children: [
                Image.asset(
                  'assets/medieval_architecture_floor_dirt_path_01.png',
                  fit: BoxFit.cover,
                  filterQuality: FilterQuality.none,
                ),
                CustomPaint(painter: ParcelBorderPainter(parcelType: 21)),
              ],
            ),
          )
        // C) Standard-Stellplatz (ID 2 & ID 20 & 22 & 24): Reines Kiesbett
        else if (_isParcelId(tileType) && tileType != 6)
          Opacity(
            opacity: groundOpacity,
            child: Image.asset(
              'assets/medieval_architecture_floor_dirt_path_01.png',
              fit: BoxFit.cover,
              filterQuality: FilterQuality.none,
            ),
          )
        // --- 4. REZEPTIONS-VORPLATZ (Kopfsteinpflaster) ---
        else if (tileType == 6)
          Opacity(
            opacity: groundOpacity,
            child: Image.asset(
              'assets/medieval_architecture_floor_cobblestone_road_01.png',
              fit: BoxFit.cover,
              filterQuality: FilterQuality.none,
            ),
          )
        // --- 5. WEGE & STRASSEN ---
        else if (_isRoadId(tileType))
          Opacity(
            opacity: groundOpacity,
            child: Stack(
              fit: StackFit.expand,
              children: [
                // Rasen als Untergrund
                Image.asset('assets/grass.png', fit: BoxFit.cover),
                // Passender Weg-Painter je nach Straßentyp
                CustomPaint(
                  painter: RoadPainter(
                    hasTop: _isRoadConnection(x, y - 1),
                    hasRight: _isRoadConnection(x + 1, y),
                    hasBottom: _isRoadConnection(x, y + 1),
                    hasLeft: _isRoadConnection(x - 1, y),
                    roadColor: Color(tileType), // Hack to pass tileType since we modified RoadPainter
                  ),
                ),
              ],
            ),
          )
        // --- 6. SANITÄR- & POOLPLATTEN (Steinplatten) ---
        else if (tileType >= 70 && tileType <= 75 || tileType == 80)
          Opacity(
            opacity: groundOpacity,
            child: Image.asset(
              'assets/medieval_architecture_floor_stone_slab_interior_01.png',
              fit: BoxFit.cover,
              filterQuality: FilterQuality.none,
            ),
          )
        // --- 7. STANDARD-WIESE ---
        else // Standard Wiese (Typ 0 & Natur)
          Opacity(
            opacity: groundOpacity,
            child: Builder(
              builder: (context) {
                int variant = (x * 13 + y * 37) % 4;
                    return Stack(
                      fit: StackFit.expand,
                      children: [
                        _getTileTexture(tileType),
                        if (!isUndergroundView && variant == 1)
                          const Center(child: Icon(Icons.eco, size: 12, color: Colors.black12)),
                      ],
                    );
                  },
                ),
              ),

        // --- NEU: DER GHOST (KACHEL-INDIKATOR) ---
        if (x == _hoveredX && y == _hoveredY && selectedTool != 0)
          Builder(
            builder: (context) {
              // Blockiert auf Meer (98) oder wenn man dasselbe noch einmal bauen will
              bool isBlocked = (mapData[x][y] == 98) || (mapData[x][y] == selectedTool);
              Color indicatorColor = isBlocked ? Colors.redAccent : Colors.greenAccent;

              return Container(
                decoration: BoxDecoration(
                  color: indicatorColor.withValues(alpha: 0.25),
                  border: Border.all(color: indicatorColor, width: 2),
                ),
                child: Center(
                  child: Icon(
                    isBlocked ? Icons.block : Icons.add,
                    color: indicatorColor.withValues(alpha: 0.8),
                    size: 18,
                  ),
                ),
              );
            },
          ),
        // --- ENDE GHOST ---

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

        // Untergrund-Leitungen (NUR IM RÖNTGENBLICK SICHTBAR)
        if (isUndergroundView && undergroundWater[x][y])
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
        if (isUndergroundView && undergroundWaste[x][y])
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
        if (isUndergroundView && undergroundPower[x][y])
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

  Widget _buildTopBar(int stars) {
    return Container(
      height: 60,
      decoration: const BoxDecoration(
        color: CampingColors.woodDark,
        border: Border(
          bottom: BorderSide(color: CampingColors.woodMedium, width: 3),
        ),
        boxShadow: [
          BoxShadow(color: Colors.black45, blurRadius: 8, offset: Offset(0, 2)),
        ],
      ),
      padding: const EdgeInsets.symmetric(horizontal: 20),
      child: Row(
        children: [
          // Tag-Anzeige (Gedrückt halten schaltet God-Mode um)
          GestureDetector(
            onLongPress: () => setState(() => _isGodMode = !_isGodMode),
            child: Text(
              'TAG $inGameDay',
              style: TextStyle(
                color: _isGodMode ? Colors.redAccent : CampingColors.beigeBackground,
                fontWeight: FontWeight.bold,
                fontSize: 16,
              ),
            ),
          ),
          const SizedBox(width: 25),

          // Kontostand
          Text(
            '${money.toStringAsFixed(0)} €',
            style: const TextStyle(
              color: Colors.greenAccent,
              fontSize: 18,
              fontWeight: FontWeight.bold,
            ),
          ),
          const Spacer(),

          // 10-Sterne-Prestige-System
          Row(
            children: List.generate(10, (i) {
              int starLevel = i + 1;
              bool isUnlocked = i < stars;
              bool isVisible = (i < stars + 2) || _isGodMode;

              if (!isVisible) return const SizedBox(width: 24);
              return GestureDetector(
                onTap: () => _showUnlockInfo(starLevel),
                child: Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 2),
                  child: Icon(
                    isUnlocked ? Icons.star : Icons.star_border,
                    color: isUnlocked ? Colors.amber : CampingColors.woodMedium,
                    size: 22,
                  ),
                ),
              );
            }),
          ),
          const SizedBox(width: 20),

          // Kamera-Drehung & Legende
          IconButton(
            icon: const Icon(Icons.rotate_left, color: CampingColors.beigeBackground),
            onPressed: () => setState(() => cameraZ -= pi / 2),
          ),
          IconButton(
            icon: const Icon(Icons.rotate_right, color: CampingColors.beigeBackground),
            onPressed: () => setState(() => cameraZ += pi / 2),
          ),
          IconButton(
            icon: Icon(
              _isLegendVisible ? Icons.close : Icons.help_outline,
              color: CampingColors.beigeBackground,
            ),
            onPressed: () => setState(() => _isLegendVisible = !_isLegendVisible),
          ),
        ],
      ),
    );
  }

  void _showUnlockInfo(int starLevel) {
    int neededPrestige = starLevel * 100;
    List<String> unlockedCats = categoryUnlockPrestige.entries
        .where((e) => e.value == neededPrestige)
        .map((e) => e.key)
        .toList();
    List<GameItem> unlockedItems =
        allItems.where((item) => item.requiredPrestige == neededPrestige).toList();

    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          backgroundColor: CampingColors.beigeBackground,
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(15),
            side: const BorderSide(color: CampingColors.woodMedium, width: 2),
          ),
          title: Text(
            'Freischaltungen ab Stern $starLevel',
            style: const TextStyle(
              color: CampingColors.textDark,
              fontWeight: FontWeight.bold,
            ),
          ),
          content: SingleChildScrollView(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              mainAxisSize: MainAxisSize.min,
              children: [
                Text(
                  'Benötigtes Prestige: $neededPrestige',
                  style: const TextStyle(
                    color: CampingColors.forestGreen,
                    fontWeight: FontWeight.bold,
                  ),
                ),
                const SizedBox(height: 10),
                if (unlockedCats.isNotEmpty) ...[
                  const Text(
                    'Neue Kategorien:',
                    style: TextStyle(
                      color: CampingColors.woodMedium,
                      fontWeight: FontWeight.bold,
                    ),
                  ),
                  ...unlockedCats.map((c) => Text('• $c', style: const TextStyle(color: CampingColors.textDark))),
                  const SizedBox(height: 8),
                ],
                if (unlockedItems.isNotEmpty) ...[
                  const Text(
                    'Neue Objekte & Gebäude:',
                    style: TextStyle(
                      color: CampingColors.woodMedium,
                      fontWeight: FontWeight.bold,
                    ),
                  ),
                  ...unlockedItems.map((item) => Text('• ${item.name}', style: const TextStyle(color: CampingColors.textDark))),
                ],
                if (unlockedCats.isEmpty && unlockedItems.isEmpty)
                  const Text(
                    'Erhöht die Besucherchance und Einnahmen.',
                    style: TextStyle(color: CampingColors.textDark),
                  ),
              ],
            ),
          ),
          actions: [
            TextButton(
              onPressed: () => Navigator.of(context).pop(),
              child: const Text(
                'Verstanden',
                style: TextStyle(
                  color: CampingColors.forestGreen,
                  fontWeight: FontWeight.bold,
                ),
              ),
            ),
          ],
        );
      },
    );
  }

  Widget _topBarItem(IconData icon, String text, Color color) {
    return Row(
      children: [
        Icon(icon, color: color, size: 20),
        const SizedBox(width: 8),
        Text(text, style: TextStyle(color: color, fontSize: 16, fontWeight: FontWeight.bold)),
      ],
    );
  }

  Widget _buildLegendBox() {
    return Container(
      width: 220,
      padding: const EdgeInsets.all(15),
      decoration: BoxDecoration(
        color: Colors.black.withOpacity(0.85),
        borderRadius: BorderRadius.circular(12),
        border: Border.all(color: Colors.white24),
      ),
      child: Column(
        mainAxisSize: MainAxisSize.min,
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          const Text('KARTEN-LEGENDE', style: TextStyle(color: Colors.white, fontWeight: FontWeight.bold, letterSpacing: 1.2)),
          const Divider(color: Colors.white24),
          _legendItem(Colors.blue[800]!, 'Meer (Abwasser-Einleitung)'),
          _legendItem(Colors.orange[200]!, 'Stellplatz Parzelle'),
          _legendItem(Colors.grey[900]!, 'Hauptstraße / Asphalt'),
          _legendItem(Colors.amber[800]!, 'Rezeption / Schranke'),
          _legendItem(Colors.cyan[900]!, 'Haupt-Wasseranschluss'),
          _legendItem(Colors.brown[800]!, 'Abwasser-Sammelschacht'),
          _legendItem(Colors.yellow[800]!, 'Strom-Trafostation'),
        ],
      ),
    );
  }

  Widget _legendItem(Color color, String label) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 4.0),
      child: Row(
        children: [
          Container(width: 14, height: 14, decoration: BoxDecoration(color: color, borderRadius: BorderRadius.circular(2))),
          const SizedBox(width: 10),
          Expanded(child: Text(label, style: const TextStyle(color: Colors.white70, fontSize: 11))),
        ],
      ),
    );
  }

  Widget _buildBottomMenu(List<String> categories) {
    final currentItems = allItems.where((i) => i.category == _selectedCategory).toList();

    return Column(
      mainAxisSize: MainAxisSize.min,
      children: [
        // 1. Aufklappbares Pergament-Fenster
        if (_selectedCategory.isNotEmpty)
          Container(
            height: 120,
            margin: const EdgeInsets.symmetric(horizontal: 10),
            decoration: BoxDecoration(
              color: CampingColors.beigeBackground,
              borderRadius: const BorderRadius.vertical(top: Radius.circular(15)),
              border: Border.all(color: CampingColors.woodMedium, width: 2),
            ),
            child: ListView.builder(
              scrollDirection: Axis.horizontal,
              itemCount: currentItems.length,
              itemBuilder: (context, index) {
                final item = currentItems[index];
                bool isSel = selectedTool == item.id;
                return GestureDetector(
                  onTap: () => setState(() {
                    selectedTool = item.id;
                    _activeToolName = item.name;
                  }),
                  child: Container(
                    width: 100,
                    margin: const EdgeInsets.all(8),
                    decoration: BoxDecoration(
                      color: isSel ? CampingColors.forestGreen.withOpacity(0.2) : Colors.white,
                      borderRadius: BorderRadius.circular(10),
                      border: Border.all(
                        color: isSel ? CampingColors.forestGreen : Colors.transparent,
                        width: 2,
                      ),
                    ),
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Icon(item.icon, color: CampingColors.woodDark),
                        const SizedBox(height: 4),
                        Text(
                          item.name,
                          style: const TextStyle(fontSize: 8, color: CampingColors.textDark),
                          textAlign: TextAlign.center,
                        ),
                      ],
                    ),
                  ),
                );
              },
            ),
          ),

        // 2. Horizontale Holz-Leiste
        Container(
          height: 60,
          color: CampingColors.woodDark,
          child: SingleChildScrollView(
            scrollDirection: Axis.horizontal,
            child: Row(
              children: categories.map((cat) => TextButton(
                onPressed: () => setState(() {
                  _selectedCategory = (_selectedCategory == cat) ? '' : cat;
                }),
                child: Text(
                  cat,
                  style: TextStyle(
                    color: _selectedCategory == cat ? Colors.amber : Colors.white,
                    fontWeight: _selectedCategory == cat ? FontWeight.bold : FontWeight.normal,
                  ),
                ),
              )).toList(),
            ),
          ),
        ),
      ],
    );
  }

  @override
  Widget build(BuildContext context) {
    int activeStars = (prestige / 100).floor().clamp(0, 10);
    List<String> visibleCategories = categoryUnlockPrestige.keys.where((cat) {
      return categoryUnlockPrestige[cat]! <= prestige || _isGodMode;
    }).toList();

    return CallbackShortcuts(
      bindings: <ShortcutActivator, VoidCallback>{
        const SingleActivator(LogicalKeyboardKey.keyQ): () => setState(() => cameraZ -= pi / 2),
        const SingleActivator(LogicalKeyboardKey.keyE): () => setState(() => cameraZ += pi / 2),
      },
      child: Focus(
        focusNode: _focusNode,
        autofocus: true,
        onKeyEvent: (FocusNode node, KeyEvent event) {
          bool isPressed = event is KeyDownEvent || event is KeyRepeatEvent;

          if (event.logicalKey == LogicalKeyboardKey.keyW) {
            _wPressed = isPressed;
          } else if (event.logicalKey == LogicalKeyboardKey.keyS) {
            _sPressed = isPressed;
          } else if (event.logicalKey == LogicalKeyboardKey.keyA) {
            _aPressed = isPressed;
          } else if (event.logicalKey == LogicalKeyboardKey.keyD) {
            _dPressed = isPressed;
          } else {
            return KeyEventResult.ignored;
          }

          return KeyEventResult.handled;
        },
        child: Scaffold(
          backgroundColor: Colors.blueGrey[900],
          body: Stack(
            children: [
              // 1. Spielfeld (2-Pass 2.5D Isometrie)
              Positioned.fill(
                child: InteractiveViewer(
                  transformationController: _mapController,
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
                              border: Border.all(color: Colors.white10, width: 2),
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
                                          setState(() {
                                            _hoveredX = x;
                                            _hoveredY = y;
                                          });
                                          if (isDragging) buildTile(x, y);
                                        },
                                        onExit: (_) {
                                          setState(() {
                                            _hoveredX = -1;
                                            _hoveredY = -1;
                                          });
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

                              // DIE OPENTTD-METHODE: 0x0 Pixel Anker!
                              // 1. Positioned(width: 0, height: 0) verhindert jede diagonale Verzerrung.
                              // 2. OverflowBox zwingt das Bild in Originalgröße auf den Bildschirm.
                              // 3. Transform.translate schiebt nur noch senkrecht nach oben/unten.
                              Widget buildTycoonObject(double gridX, double gridY, double width, double height, Widget image, {double yOffset = 0}) {
                                return Positioned(
                                  left: gridX * tileSize,
                                  top: gridY * tileSize,
                                  width: 0,
                                  height: 0, // Der Anker ist nur ein mathematischer Punkt!
                                  child: Transform(
                                    alignment: Alignment.center, // Rotiert den 0x0 Punkt
                                    transform: billboardMatrix,
                                    child: OverflowBox(
                                      minWidth: width, maxWidth: width,
                                      minHeight: height, maxHeight: height,
                                      alignment: Alignment.bottomCenter, // Bild-Unterkante steht exakt auf dem 0x0 Punkt
                                      child: Transform.translate(
                                        offset: Offset(0, yOffset), // Feinjustierung kerzengerade nach unten (falls nötig)
                                        child: image,
                                      ),
                                    ),
                                  ),
                                );
                              }

                              for (int x = 0; x < gridSize; x++) {
                                for (int y = 0; y < gridSize; y++) {
                                  int type = mapData[x][y];

                                  // --- 1. PARZELLEN (1x1 Wohnwagen & Zelt) ---
                                  if (_isParcelId(type) && parcelState[x][y] > 0) {
                                    int state = parcelState[x][y];
                                    bool isCaravan = parcelIsCaravan[x][y];
                                    double anchorX = x + 0.5;
                                    double anchorY = y + 0.5;

                                    Widget content = Stack(
                                      clipBehavior: Clip.none,
                                      alignment: Alignment.bottomCenter,
                                      children: [
                                        Opacity(
                                          opacity: state == 1 ? 0.45 : 1.0,
                                          child: isCaravan
                                              ? Transform.translate(
                                                  // Schiebt den Wohnwagen genau in die Mitte der Schotterfläche
                                                  offset: const Offset(4.0, 6.0),
                                                  child: Image.asset(
                                                    'assets/caravan.png',
                                                    width: 44,
                                                    height: 44,
                                                    fit: BoxFit.contain,
                                                    alignment: Alignment.bottomCenter,
                                                    errorBuilder: (c, e, s) => const Icon(
                                                      Icons.rv_hookup,
                                                      size: 32,
                                                      color: Colors.orange,
                                                    ),
                                                  ),
                                                )
                                              : Transform.translate(
                                                  offset: const Offset(0, 4.0),
                                                  child: Image.asset(
                                                    'assets/tent.png',
                                                    width: 44,
                                                    height: 44,
                                                    fit: BoxFit.contain,
                                                    alignment: Alignment.bottomCenter,
                                                    errorBuilder: (c, e, s) => const Icon(
                                                      Icons.holiday_village,
                                                      size: 32,
                                                      color: Colors.orange,
                                                    ),
                                                  ),
                                                ),
                                        ),
                                        if (state == 1)
                                          Positioned(
                                            top: -8,
                                            child: SizedBox(
                                              width: 28,
                                              height: 4,
                                              child: LinearProgressIndicator(
                                                value: setupProgress[x][y],
                                                backgroundColor: Colors.black54,
                                                color: Colors.greenAccent,
                                              ),
                                            ),
                                          ),
                                      ],
                                    );

                                    objectList.add(WorldObject(
                                      x: anchorX, y: anchorY, sinZ: sinZ, cosZ: cosZ,
                                      widget: buildTycoonObject(anchorX, anchorY, 44, 44, content, yOffset: 6.0),
                                    ));
                                  }
                                  // --- 2. REZEPTION ---
                                  else if (type == 23 || type == 4 || type == 6) {
                                    Widget content = Stack(
                                      clipBehavior: Clip.none,
                                      alignment: Alignment.bottomCenter,
                                      children: [
                                        Image.asset(
                                          'assets/reception.png',
                                          width: 80, height: 80,
                                          fit: BoxFit.contain,
                                          alignment: Alignment.bottomCenter,
                                          errorBuilder: (c, e, s) => const Icon(Icons.house, size: 50, color: Colors.brown),
                                        ),
                                        Positioned(
                                          right: -8,
                                          bottom: 4,
                                          child: SizedBox(
                                            width: 35, height: 35,
                                            child: Stack(
                                              clipBehavior: Clip.none,
                                              children: [
                                                Positioned(bottom: 0, left: 15, child: Container(width: 4, height: 16, color: Colors.grey[800])),
                                                Positioned(
                                                  bottom: 12, left: 17,
                                                  child: Transform(
                                                    alignment: Alignment.bottomLeft,
                                                    transform: Matrix4.identity()..rotateZ(-barrierAngle),
                                                    child: Container(width: 30, height: 4, color: Colors.red[700]),
                                                  ),
                                                ),
                                              ],
                                            ),
                                          ),
                                        ),
                                      ],
                                    );

                                    objectList.add(WorldObject(
                                      x: x + 0.5, y: y + 0.5, sinZ: sinZ, cosZ: cosZ,
                                      // yOffset: 22.0 setzt das Haus exakt auf die Schotterkachel
                                      widget: buildTycoonObject(x + 0.5, y + 0.5, 90, 80, content, yOffset: 22.0),
                                    ));
                                  }
                                  // --- 3. NATUR, STRAND & DEKO ---
                                  else if ((type >= 30 && type <= 39) || (type >= 51 && type <= 52) || 
                                           type == 3 || type == 14 || type == 15 || type == 90 || 
                                           (type >= 16 && type <= 18)) {

                                    final visual = resolvePlantVisual(type, x, y);

                                    Widget content = Image.asset(
                                      visual.asset,
                                      width: visual.size,
                                      height: visual.size,
                                      fit: BoxFit.contain,
                                      alignment: Alignment.bottomCenter,
                                      errorBuilder: (c, e, s) => const Icon(Icons.nature, size: 36, color: Colors.green),
                                    );

                                    objectList.add(WorldObject(
                                      x: x + 0.5, y: y + 0.5, sinZ: sinZ, cosZ: cosZ,
                                      widget: buildTycoonObject(
                                        x + 0.5, y + 0.5,
                                        visual.size, visual.size,
                                        content,
                                        yOffset: visual.yOffset,
                                      ),
                                    ));
                                  }
                                }
                              }

                              // --- GHOST-VORSCHAU FÜR 3D-OBJEKTE ---
                              if (_hoveredX >= 0 && _hoveredY >= 0 && selectedTool != 0 && selectedTool != 99) {
                                double gx = _hoveredX + 0.5;
                                double gy = _hoveredY + 0.5;
                                bool isBlocked = mapData[_hoveredX][_hoveredY] == 98;

                                // Vorschau für Bäume, Sträucher und Deko
                                if ((selectedTool >= 30 && selectedTool <= 39) || (selectedTool >= 51 && selectedTool <= 52) || 
                                     selectedTool == 3 || selectedTool == 14 || selectedTool == 15 || selectedTool == 90 || 
                                     (selectedTool >= 16 && selectedTool <= 18)) {
                                  final visual = resolvePlantVisual(selectedTool, _hoveredX, _hoveredY);
                                  Widget ghostWidget = Opacity(
                                    opacity: 0.55,
                                    child: ColorFiltered(
                                      colorFilter: isBlocked 
                                          ? const ColorFilter.mode(Colors.redAccent, BlendMode.srcATop)
                                          : const ColorFilter.mode(Colors.transparent, BlendMode.dst),
                                      child: Image.asset(
                                        visual.asset,
                                        width: visual.size,
                                        height: visual.size,
                                        fit: BoxFit.contain,
                                        alignment: Alignment.bottomCenter,
                                      ),
                                    ),
                                  );

                                  objectList.add(WorldObject(
                                    x: gx, y: gy, sinZ: sinZ, cosZ: cosZ,
                                    widget: buildTycoonObject(gx, gy, visual.size, visual.size, ghostWidget, yOffset: visual.yOffset),
                                  ));
                                }

                                // Vorschau für neue Parzellen (Zelt-Entwurf)
                                else if (_isParcelId(selectedTool)) {
                                  Widget ghostTent = Opacity(
                                    opacity: 0.45,
                                    child: ColorFiltered(
                                      colorFilter: isBlocked 
                                          ? const ColorFilter.mode(Colors.redAccent, BlendMode.srcATop)
                                          : const ColorFilter.mode(Colors.transparent, BlendMode.dst),
                                      child: Image.asset(
                                        'assets/tent.png',
                                        width: 44, height: 44,
                                        fit: BoxFit.contain,
                                        alignment: Alignment.bottomCenter,
                                      ),
                                    ),
                                  );

                                  objectList.add(WorldObject(
                                    x: gx, y: gy, sinZ: sinZ, cosZ: cosZ,
                                    widget: buildTycoonObject(gx, gy, 44, 44, ghostTent, yOffset: 6.0),
                                  ));
                                }
                              }

                              // --- 4. FAHRZEUGE & GÄSTE (Zentriert mitten auf der Kachel, yOffset 0.0) ---
                              for (var car in activeCars) {
                                double cx = car.x + 0.5;
                                double cy = car.y + 0.5;
                                objectList.add(WorldObject(
                                  x: cx, y: cy, sinZ: sinZ, cosZ: cosZ,
                                  widget: buildTycoonObject(cx, cy, 28, 28, const Icon(Icons.directions_car, size: 28, color: Colors.blueAccent), yOffset: 0.0),
                                ));
                              }

                              double gx = guestX + 0.5;
                              double gy = guestY + 0.5;
                              objectList.add(WorldObject(
                                x: gx, y: gy, sinZ: sinZ, cosZ: cosZ,
                                widget: buildTycoonObject(gx, gy, 32, 32, const Icon(Icons.emoji_people, size: 32, color: Colors.white), yOffset: 0.0),
                              ));

                              // Z-Sorting für korrekte Überlappung
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
              ),

              // 2. Atmosphäre / Filter
              IgnorePointer(
                child: AnimatedContainer(
                  duration: const Duration(seconds: 2),
                  color: getAtmosphereColor(),
                ),
              ),

              // 3. Top Bar
              Positioned(
                top: 0,
                left: 0,
                right: 0,
                child: _buildTopBar(activeStars),
              ),

              // 4. Legende
              if (_isLegendVisible)
                Positioned(
                  top: 85,
                  right: 25,
                  child: _buildLegendBox(),
                ),

              // 5. Bottom Menu
              Positioned(
                bottom: 0,
                left: 0,
                right: 0,
                child: _buildBottomMenu(visibleCategories),
              ),
            ],
          ),
        ),
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
  final double waveOffset;
  final int gridY;

  CoastPainter({
    required this.mask,
    required this.waveOffset,
    required this.gridY,
  });

  @override
  void paint(Canvas canvas, Size size) {
    final w = size.width;
    final h = size.height;

    // Nur zeichnen, wenn diese Wasserkachel an den Strand grenzt (Westen)
    if ((mask & 8) != 0) {
      // 1. Sanfte, nahtlose Brandungswelle berechnen
      final wavePath = Path();
      const int steps = 8;

      for (int i = 0; i <= steps; i++) {
        double py = (h / steps) * i;
        // Durch (gridY + i / steps) entsteht eine durchgehende Sinuslinie über alle Kacheln hinweg
        double progress = gridY + (i / steps);
        double wave = sin(waveOffset * 2.5 + progress * 1.5) * 2.5;
        double shoreX = 7.0 + wave;

        if (i == 0) {
          wavePath.moveTo(shoreX, py);
        } else {
          wavePath.lineTo(shoreX, py);
        }
      }

      // Seichtwasserfläche bis zum Strandrand füllen
      final shallowPath = Path.from(wavePath)
        ..lineTo(0, h)
        ..lineTo(0, 0)
        ..close();

      canvas.drawPath(
        shallowPath,
        Paint()..color = const Color(0xFF26C6DA).withValues(alpha: 0.4),
      );

      // Weicher weißer Schaumsaum
      canvas.drawPath(
        wavePath,
        Paint()
          ..color = Colors.white.withValues(alpha: 0.65)
          ..style = PaintingStyle.stroke
          ..strokeWidth = 2.0
          ..strokeCap = StrokeCap.round,
      );
    }
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
    final double w = size.width;
    final double h = size.height;

    // Standardmaße & Farben je nach Weg
    Color color;
    double widthFactor = 0.6; // 60% der Kachelbreite

    switch (roadColor.value) { // Hack: we use the old roadColor to determine type to keep signature
      case 4: // Schotterstraße (Erdiges Hellbraun) - assuming we passed tileType instead
        color = const Color(0xFF8B6B4F);
        widthFactor = 0.65;
        break;
      case 2: // Geteerte Straße (Anthrazit)
      case 5:
        color = const Color(0xFF37474F);
        widthFactor = 0.70;
        break;
      case 3: // Kiesweg (Schmalerer Fußweg)
        color = const Color(0xFFB0A48E);
        widthFactor = 0.45;
        break;
      default:
        color = const Color(0xFF5D4037);
    }

    final paint = Paint()..color = roadColor;
    final double pad = (w * (1.0 - widthFactor)) / 2;
    final double pStart = pad;
    final double pEnd = w - pad;

    // Kreuzungszentrum
    canvas.drawRRect(
      RRect.fromLTRBR(pStart, pStart, pEnd, pEnd, const Radius.circular(4)),
      paint,
    );

    // Verbindungsarme
    if (hasTop) canvas.drawRect(Rect.fromLTRB(pStart, 0, pEnd, pStart + 1), paint);
    if (hasRight) canvas.drawRect(Rect.fromLTRB(pEnd - 1, pStart, w, pEnd), paint);
    if (hasBottom) canvas.drawRect(Rect.fromLTRB(pStart, pEnd - 1, pEnd, h), paint);
    if (hasLeft) canvas.drawRect(Rect.fromLTRB(0, pStart, pStart + 1, pEnd), paint);
  }

  @override
  bool shouldRepaint(covariant RoadPainter oldDelegate) =>
      oldDelegate.roadColor != roadColor ||
      oldDelegate.hasTop != hasTop ||
      oldDelegate.hasRight != hasRight ||
      oldDelegate.hasBottom != hasBottom ||
      oldDelegate.hasLeft != hasLeft;
}

class ParcelBorderPainter extends CustomPainter {
  final int parcelType;

  ParcelBorderPainter({required this.parcelType});

  @override
  void paint(Canvas canvas, Size size) {
    final double w = size.width;
    final double h = size.height;

    // --- FREIFLÄCHE (ID 23): 4 weiße L-Winkel an den Ecken ---
    if (parcelType == 23) {
      final pegPaint = Paint()
        ..color = Colors.white.withValues(alpha: 0.85)
        ..strokeWidth = 2.0
        ..style = PaintingStyle.stroke
        ..strokeCap = StrokeCap.square;

      const double len = 6.0; // Schenkellänge
      const double pad = 2.0; // Abstand vom Rand

      // Oben links
      canvas.drawLine(const Offset(pad, pad + len), const Offset(pad, pad), pegPaint);
      canvas.drawLine(const Offset(pad, pad), const Offset(pad + len, pad), pegPaint);

      // Oben rechts
      canvas.drawLine(Offset(w - pad - len, pad), Offset(w - pad, pad), pegPaint);
      canvas.drawLine(Offset(w - pad, pad), Offset(w - pad, pad + len), pegPaint);

      // Unten links
      canvas.drawLine(Offset(pad, h - pad - len), Offset(pad, h - pad), pegPaint);
      canvas.drawLine(Offset(pad, h - pad), Offset(pad + len, h - pad), pegPaint);

      // Unten rechts
      canvas.drawLine(Offset(w - pad - len, h - pad), Offset(w - pad, h - pad), pegPaint);
      canvas.drawLine(Offset(w - pad, h - pad), Offset(w - pad, h - pad - len), pegPaint);
    }

    // --- STELLPLATZ 2 (ID 21): Rustikale Holzbohlen-Einfassung ---
    else if (parcelType == 21) {
      final borderPaint = Paint()
        ..color = const Color(0xFF5C4033)
        ..strokeWidth = 2.5
        ..style = PaintingStyle.stroke;

      canvas.drawRect(Rect.fromLTWH(1, 1, w - 2, h - 2), borderPaint);
    }
  }

  @override
  bool shouldRepaint(covariant ParcelBorderPainter oldDelegate) =>
      oldDelegate.parcelType != parcelType;
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
