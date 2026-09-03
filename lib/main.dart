import 'dart:async';
import 'dart:math';
import 'package:flutter/material.dart';

void main() {
  runApp(const CampingSimApp());
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

  // Wirtschafts-Variablen
  double money = 15000.0; // Startkapital in Euro
  double dailyIncome = 0.0;

  // Tech-Tree / Upgrade-Baum
  bool hasWaterUnlocked = false; // Erst wenn das gekauft ist, fließt Wasser
  double waterUpgradeCost = 5000.0; // Kostet 5000€, den städtischen Anschluss legen zu lassen

  // Simulations-Variablen
  Timer? gameLoop;
  int inGameDay = 1;
  int activeCampers = 0;
  int maxCapacity = 0; // Wie viele Parzellen sind ans Netz angeschlossen?

  // Kosten für die jeweiligen Bauteile
  double getCost(int toolId) {
    switch (toolId) {
      case 8: return 120.0; // Trinkwasserleitung
      case 9: return 90.0;  // Abwasserrohr
      case 10: return 60.0; // Stromkabel
      case 4: return 30.0;  // Fußweg
      case 5: return 80.0;  // Asphalt-Straße
      case 6: return 2500.0;// Rezeption & Schranke
      default: return 0.0;
    }
  }

  @override
  void initState() {
    super.initState();
    _generatePrototypeMap();
    _startGameLoop();
  }

  @override
  void dispose() {
    gameLoop?.cancel(); // Beendet den Loop, wenn das Fenster geschlossen wird
    super.dispose();
  }

  void _startGameLoop() {
    // Ein In-Game Tag vergeht alle 3 Sekunden
    gameLoop = Timer.periodic(const Duration(seconds: 3), (timer) {
      setState(() {
        inGameDay++;
        money += dailyIncome; // Tägliche Einnahmen werden gutgeschrieben

        // Gäste-Ankunft an der Rezeption
        if (activeCampers < maxCapacity) {
          // Ein neuer Camper kommt an und belegt eine freie, versorgte Parzelle
          activeCampers++;
        } else if (activeCampers > maxCapacity) {
          // Wenn du Leitungen abreißt, reisen Camper wütend ab
          activeCampers = maxCapacity;
        }
      });
    });
  }

  // Generiert die Startkarte mit Wiese, 10 Parzellen, Meer, Hauptstraße, Rezeption, Platzstraße und Hauptanschlüssen
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

    // Öffentliche Hauptstraße am linken Rand (Spalte 0)
    for (int y = 0; y < gridSize; y++) {
      mapData[0][y] = 5; // Straße
    }

    // Rezeption & Schranke an der Einfahrt
    mapData[1][9] = 6;  
    mapData[1][10] = 5; 

    // Die drei städtischen Hauptanschlüsse
    mapData[2][9] = 7;  // Wasseranschluss
    mapData[3][9] = 12; // Abwasser-Sammelschacht (Stadt)
    mapData[4][9] = 13; // Trafo-Station (Strom)

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
    } else if (selectedTool >= 8) {
      double cost = getCost(selectedTool);
      if (money < cost) return;

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

    // Verhindert das Überbauen von Meer, Parzellen und allen städtischen Anschlüssen an der Oberfläche
    if (mapData[x][y] == 1 || mapData[x][y] == 2 || mapData[x][y] == 7 || mapData[x][y] == 12 || mapData[x][y] == 13) return; 
    if (mapData[x][y] == selectedTool) return;
    
    double cost = getCost(selectedTool);
    if (money < cost) return;

    setState(() {
      money -= cost;
      mapData[x][y] = selectedTool;
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
      case 4: return Colors.grey[500]!; // Fußweg
      case 5: return Colors.grey[900]!; // Asphalt-Straße (Fahrweg)
      case 6: return Colors.amber[800]!; // Rezeption / Schranke (Einfahrt)
      case 7: return Colors.cyan[900]!;  // Hauptanschluss Wasser
      case 12: return Colors.brown[800]!; // Abwasser Stadt
      case 13: return Colors.yellow[800]!; // Strom Stadt
      default: return Colors.green[400]!; // Wiese
    }
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

                  const Text('Baumaterial', style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold)),
                  const SizedBox(height: 8),
                  _buildMenuButton('Straße / Fahrweg', 5, Icons.directions_car, Colors.grey[900]!),
                  _buildMenuButton('Fußweg', 4, Icons.directions_walk, Colors.grey[500]!),
                  _buildMenuButton('Rezeption & Schranke', 6, Icons.security, Colors.amber[800]!),
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
            child: InteractiveViewer(
              boundaryMargin: const EdgeInsets.all(100),
              minScale: 0.5,
              maxScale: 4.0,
              constrained: false,
              child: Center(
                child: GestureDetector(
                  onPanStart: (details) {
                    isDragging = true;
                  },
                  onPanEnd: (details) {
                    isDragging = false;
                  },
                  child: Container(
                    width: 800,
                    height: 800,
                    decoration: BoxDecoration(border: Border.all(color: Colors.white24, width: 2)),
                    child: GridView.builder(
                      physics: const NeverScrollableScrollPhysics(),
                      gridDelegate: SliverGridDelegateWithFixedCrossAxisCount(crossAxisCount: gridSize),
                      itemCount: gridSize * gridSize,
                      itemBuilder: (context, index) {
                        int x = index % gridSize;
                        int y = index ~/ gridSize;
                        
                        // Röntgenblick wird bei den Tools 8, 9, 10 und dem neuen Abriss (11) aktiviert
                        bool isUndergroundView = selectedTool >= 8;
                        
                        return MouseRegion(
                          onEnter: (_) {
                            if (isDragging) buildTile(x, y);
                          },
                          child: GestureDetector(
                            onTap: () => buildTile(x, y),
                            child: Container(
                              margin: const EdgeInsets.all(1),
                              color: getTileColor(mapData[x][y]).withOpacity(isUndergroundView ? 0.3 : 1.0),
                              child: Stack(
                                children: [
                                  // Status-Punkte auf der Parzelle anzeigen
                                  if (mapData[x][y] == 2)
                                    Positioned(
                                      bottom: 2, right: 2,
                                      child: Row(
                                        children: [
                                          if (parcelWater[x][y]) Icon(Icons.circle, size: 8, color: Colors.cyanAccent[400]),
                                          if (parcelWaste[x][y]) Icon(Icons.circle, size: 8, color: Colors.brown[400]),
                                          if (parcelPower[x][y]) Icon(Icons.circle, size: 8, color: Colors.yellowAccent[700]),
                                        ],
                                      ),
                                    ),

                                  // Dynamische Wasserleitung (Offset -6 für oben/links)
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

                                  // Dynamisches Abwasserrohr (Offset 0 für exakte Mitte)
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

                                  // Dynamisches Stromkabel (Offset +6 für unten/rechts)
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
                              ),
                            ),
                          ),
                        );
                      },
                    ),
                  ),
                ),
              ),
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
