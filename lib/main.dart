// lib/main.dart
import 'dart:async';
import 'dart:math';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter/scheduler.dart';

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

// --- DATENMODELL & BALANCING ---
class GameItem {
  final int id; 
  final String name;
  final String category;
  final double cost;
  final double prestigeValue; 
  final double requiredPrestige;
  final double dailyIncome; 
  final IconData icon;

  const GameItem({
    required this.id,
    required this.name,
    required this.category,
    required this.cost,
    required this.prestigeValue,
    required this.requiredPrestige,
    required this.dailyIncome,
    required this.icon,
  });
}

final Map<String, int> categoryUnlockPrestige = {
  "Zoning": 0,
  "Wege": 0,
  "Natur": 0,
  "Netze": 100,
  "Hygiene": 100,
  "Verpflegung": 300,
  "Pool": 400,
  "Aktivitäten": 500,
  "Abriss": 0,
};

final List<GameItem> allItems = [
  // --- ZONING ---
  const GameItem(id: 20, name: 'Stellplatz 1', category: 'Zoning', cost: 100, prestigeValue: 5, requiredPrestige: 0, dailyIncome: 15, icon: Icons.holiday_village),
  const GameItem(id: 21, name: 'Stellplatz 2 (Hecke)', category: 'Zoning', cost: 200, prestigeValue: 10, requiredPrestige: 200, dailyIncome: 30, icon: Icons.holiday_village),
  const GameItem(id: 22, name: 'Stellplatz 3 (Baum)', category: 'Zoning', cost: 400, prestigeValue: 20, requiredPrestige: 400, dailyIncome: 60, icon: Icons.holiday_village),
  const GameItem(id: 23, name: 'Freifläche', category: 'Zoning', cost: 100, prestigeValue: 5, requiredPrestige: 0, dailyIncome: 10, icon: Icons.crop_free),
  const GameItem(id: 24, name: 'Mobilheim', category: 'Zoning', cost: 1500, prestigeValue: 100, requiredPrestige: 600, dailyIncome: 250, icon: Icons.house),

  // --- WEGE ---
  const GameItem(id: 1, name: 'Schotterstraße', category: 'Wege', cost: 20, prestigeValue: 1, requiredPrestige: 0, dailyIncome: 0, icon: Icons.add_road),
  const GameItem(id: 2, name: 'Geteerte Straße', category: 'Wege', cost: 50, prestigeValue: 2, requiredPrestige: 200, dailyIncome: 0, icon: Icons.add_road),
  const GameItem(id: 3, name: 'Kiesweg', category: 'Wege', cost: 20, prestigeValue: 1, requiredPrestige: 0, dailyIncome: 0, icon: Icons.add_road),
  const GameItem(id: 4, name: 'Rezeption', category: 'Wege', cost: 1000, prestigeValue: 50, requiredPrestige: 300, dailyIncome: 50, icon: Icons.store),
  const GameItem(id: 5, name: 'Straße m. Blumen', category: 'Wege', cost: 80, prestigeValue: 4, requiredPrestige: 400, dailyIncome: 0, icon: Icons.add_road),
  const GameItem(id: 6, name: 'Verzierter Weg', category: 'Wege', cost: 100, prestigeValue: 5, requiredPrestige: 600, dailyIncome: 0, icon: Icons.add_road),

  // --- NATUR ---
  const GameItem(id: 30, name: 'Nadelbaum', category: 'Natur', cost: 20, prestigeValue: 4, requiredPrestige: 0, dailyIncome: 0, icon: Icons.nature),
  const GameItem(id: 31, name: 'Laubbaum', category: 'Natur', cost: 20, prestigeValue: 6, requiredPrestige: 100, dailyIncome: 0, icon: Icons.nature),
  const GameItem(id: 32, name: 'Zypresse', category: 'Natur', cost: 20, prestigeValue: 8, requiredPrestige: 200, dailyIncome: 0, icon: Icons.nature),
  const GameItem(id: 33, name: 'Busch', category: 'Natur', cost: 10, prestigeValue: 2, requiredPrestige: 0, dailyIncome: 0, icon: Icons.park),
  const GameItem(id: 34, name: 'Blume', category: 'Natur', cost: 15, prestigeValue: 3, requiredPrestige: 200, dailyIncome: 0, icon: Icons.local_florist),
  const GameItem(id: 35, name: 'Stein', category: 'Natur', cost: 10, prestigeValue: 1, requiredPrestige: 0, dailyIncome: 0, icon: Icons.landscape),
  const GameItem(id: 36, name: 'Hecke', category: 'Natur', cost: 25, prestigeValue: 5, requiredPrestige: 300, dailyIncome: 0, icon: Icons.grass),
  const GameItem(id: 37, name: 'Palme', category: 'Natur', cost: 20, prestigeValue: 10, requiredPrestige: 300, dailyIncome: 0, icon: Icons.nature),

  // --- NETZE ---
  const GameItem(id: 10, name: 'Wasserleitung', category: 'Netze', cost: 50, prestigeValue: 0, requiredPrestige: 100, dailyIncome: -2, icon: Icons.water_drop),
  const GameItem(id: 11, name: 'Abwasserleitung', category: 'Netze', cost: 50, prestigeValue: 0, requiredPrestige: 100, dailyIncome: -2, icon: Icons.plumbing),
  const GameItem(id: 12, name: 'Stromkabel', category: 'Netze', cost: 50, prestigeValue: 0, requiredPrestige: 100, dailyIncome: -2, icon: Icons.electric_bolt),
  const GameItem(id: 13, name: 'Wasserwerk', category: 'Netze', cost: 500, prestigeValue: 0, requiredPrestige: 300, dailyIncome: -20, icon: Icons.factory),
  const GameItem(id: 14, name: 'Kläranlage', category: 'Netze', cost: 500, prestigeValue: 0, requiredPrestige: 300, dailyIncome: -20, icon: Icons.factory),
  const GameItem(id: 15, name: 'Trafo', category: 'Netze', cost: 50, prestigeValue: 0, requiredPrestige: 100, dailyIncome: -5, icon: Icons.electrical_services),

  // --- HYGIENE ---
  const GameItem(id: 70, name: 'Duschen im freien', category: 'Hygiene', cost: 100, prestigeValue: 10, requiredPrestige: 100, dailyIncome: -5, icon: Icons.shower),
  const GameItem(id: 71, name: 'Wc mit Waschbecken', category: 'Hygiene', cost: 200, prestigeValue: 20, requiredPrestige: 200, dailyIncome: -10, icon: Icons.wash),
  const GameItem(id: 72, name: 'Waschhaus mitWCs Und Waschbecken', category: 'Hygiene', cost: 400, prestigeValue: 40, requiredPrestige: 300, dailyIncome: -25, icon: Icons.home_work),
  const GameItem(id: 73, name: 'gehobenes Waschhaus ', category: 'Hygiene', cost: 800, prestigeValue: 80, requiredPrestige: 500, dailyIncome: -50, icon: Icons.hotel_class),
  const GameItem(id: 74, name: 'Ertsehilfe Station', category: 'Hygiene', cost: 600, prestigeValue: 50, requiredPrestige: 500, dailyIncome: -30, icon: Icons.medical_services),
  const GameItem(id: 75, name: 'krankenstation', category: 'Hygiene', cost: 1500, prestigeValue: 120, requiredPrestige: 800, dailyIncome: -60, icon: Icons.local_hospital),

  // --- VERPFLEGUNG ---
  const GameItem(id: 40, name: 'Fischrestaurant', category: 'Verpflegung', cost: 600, prestigeValue: 50, requiredPrestige: 400, dailyIncome: 120, icon: Icons.restaurant),
  const GameItem(id: 41, name: 'Fleisch grill restaurant', category: 'Verpflegung', cost: 650, prestigeValue: 55, requiredPrestige: 400, dailyIncome: 130, icon: Icons.restaurant_menu),
  const GameItem(id: 42, name: 'Schnellrestauarant', category: 'Verpflegung', cost: 400, prestigeValue: 35, requiredPrestige: 300, dailyIncome: 80, icon: Icons.fastfood),
  const GameItem(id: 43, name: 'bar', category: 'Verpflegung', cost: 500, prestigeValue: 40, requiredPrestige: 400, dailyIncome: 90, icon: Icons.local_bar),
  const GameItem(id: 44, name: 'Cafe', category: 'Verpflegung', cost: 450, prestigeValue: 35, requiredPrestige: 300, dailyIncome: 70, icon: Icons.local_cafe),
  const GameItem(id: 45, name: 'Soevenirstand', category: 'Verpflegung', cost: 300, prestigeValue: 25, requiredPrestige: 300, dailyIncome: 50, icon: Icons.storefront),
  const GameItem(id: 46, name: 'Obststand', category: 'Verpflegung', cost: 200, prestigeValue: 15, requiredPrestige: 300, dailyIncome: 30, icon: Icons.apple),
  const GameItem(id: 47, name: 'Supermarkt', category: 'Verpflegung', cost: 2000, prestigeValue: 150, requiredPrestige: 800, dailyIncome: 450, icon: Icons.shopping_cart),
  const GameItem(id: 48, name: 'gemüsestand', category: 'Verpflegung', cost: 200, prestigeValue: 15, requiredPrestige: 300, dailyIncome: 30, icon: Icons.shopping_basket),
  const GameItem(id: 49, name: 'Fischstand', category: 'Verpflegung', cost: 250, prestigeValue: 20, requiredPrestige: 300, dailyIncome: 40, icon: Icons.set_meal),
  const GameItem(id: 50, name: 'Eisstand', category: 'Verpflegung', cost: 250, prestigeValue: 20, requiredPrestige: 300, dailyIncome: 45, icon: Icons.icecream),

  // --- POOL ---
  const GameItem(id: 80, name: 'Poolkachel', category: 'Pool', cost: 50, prestigeValue: 5, requiredPrestige: 400, dailyIncome: -2, icon: Icons.pool),
  const GameItem(id: 81, name: 'Rutsche', category: 'Pool', cost: 300, prestigeValue: 30, requiredPrestige: 500, dailyIncome: 40, icon: Icons.water),
  const GameItem(id: 82, name: 'Massagestrahl', category: 'Pool', cost: 150, prestigeValue: 15, requiredPrestige: 400, dailyIncome: 10, icon: Icons.waves),
  const GameItem(id: 83, name: 'Sonnenschirme', category: 'Pool', cost: 40, prestigeValue: 4, requiredPrestige: 400, dailyIncome: 0, icon: Icons.beach_access),
  const GameItem(id: 84, name: 'poolliegen', category: 'Pool', cost: 40, prestigeValue: 4, requiredPrestige: 400, dailyIncome: 0, icon: Icons.beach_access),
  const GameItem(id: 85, name: 'Poolbar', category: 'Pool', cost: 600, prestigeValue: 60, requiredPrestige: 600, dailyIncome: 110, icon: Icons.local_bar),

  // --- AKTIVITÄTEN ---
  const GameItem(id: 60, name: 'Bootsverleih', category: 'Aktivitäten', cost: 1000, prestigeValue: 100, requiredPrestige: 600, dailyIncome: 180, icon: Icons.rowing),
  const GameItem(id: 61, name: 'Funsportaktivitäten stand', category: 'Aktivitäten', cost: 800, prestigeValue: 80, requiredPrestige: 600, dailyIncome: 120, icon: Icons.skateboarding),
  const GameItem(id: 62, name: 'Fitnessstudio', category: 'Aktivitäten', cost: 1500, prestigeValue: 140, requiredPrestige: 800, dailyIncome: 200, icon: Icons.fitness_center),
  const GameItem(id: 63, name: 'Spielplatz', category: 'Aktivitäten', cost: 500, prestigeValue: 50, requiredPrestige: 500, dailyIncome: 30, icon: Icons.child_care),
  const GameItem(id: 64, name: 'Tauchschule', category: 'Aktivitäten', cost: 2000, prestigeValue: 180, requiredPrestige: 900, dailyIncome: 300, icon: Icons.scuba_diving),
  const GameItem(id: 65, name: 'Angelschule', category: 'Aktivitäten', cost: 900, prestigeValue: 75, requiredPrestige: 700, dailyIncome: 100, icon: Icons.phishing),

  // --- ABRISS (IMMER GANZ RECHTS) ---
  const GameItem(id: 99, name: 'Abriss', category: 'Abriss', cost: 0, prestigeValue: 0, requiredPrestige: 0, dailyIncome: 0, icon: Icons.delete),
];

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
  int _selectedTab = -1; // -1 = Menü geschlossen
  String _activeToolName = 'Straße'; // Für die Anzeige im Chip
  bool _isGodMode = false;

  // Untergrund-Netze
  late List<List<bool>> undergroundWater;
  late List<List<bool>> undergroundWaste;
  late List<List<bool>> undergroundPower;

  // Netzwerk-Status
  late List<List<bool>> connectedWater;
  late List<List<bool>> connectedWaste;
  late List<List<bool>> connectedPower;

  // Parzellen-Status
  late List<List<bool>> parcelWater;
  late List<List<bool>> parcelWaste;
  late List<List<bool>> parcelPower;

  late List<List<bool>> isParcelAnchor;
  late List<List<bool>> isBigParcel;
  late List<List<bool>> isExtraTent;
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
  double guestY = 10.0;
  double waterWaveOffset = 0.0;
  double timeOfDay = 0.25;
  int inGameDay = 1;
  int activeCampers = 0;
  int maxCapacity = 0;

  List<VisitingCar> activeCars = [];
  double barrierAngle = 0.0;

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
          // Sucht den ersten leeren, funktionierenden Stellplatz
          for (int x = 0; x < gridSize; x++) {
            for (int y = 0; y < gridSize; y++) {
              if (isParcelAnchor[x][y] && parcelState[x][y] == 0) {
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

    parcelWater = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    parcelWaste = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));
    parcelPower = List.generate(gridSize, (_) => List.generate(gridSize, (_) => false));

    isParcelAnchor = List.generate(gridSize, (_) => List.filled(gridSize, false));
    isBigParcel = List.generate(gridSize, (_) => List.filled(gridSize, false));
    isExtraTent = List.generate(gridSize, (_) => List.filled(gridSize, false));

    parcelState = List.generate(gridSize, (_) => List.filled(gridSize, 0));
    setupProgress = List.generate(gridSize, (_) => List.filled(gridSize, 0.0));
    parcelIsCaravan = List.generate(gridSize, (_) => List.filled(gridSize, true));

    // Öffentliche Hauptstraße am linken Rand
    for (int y = 0; y < gridSize; y++) {
      mapData[0][y] = 5;
    }

    // Rezeption & Schranke in der Mitte der Straße
    int midY = gridSize ~/ 2;
    mapData[1][midY] = 6;
    mapData[1][midY + 1] = 5;

    // Campingplatz-Hauptstraße von der Schranke ein Stück in den Platz hinein
    for (int x = 2; x <= 15; x++) {
      mapData[x][midY + 1] = 5;
    }

    // 10 Start-Parzellen platzieren
    int parcelCount = 0;
    for (int col = 0; col < 2; col++) {
      for (int row = 0; row < 5; row++) {
        int startX = 4 + (col * 6);
        int startY = (midY - 4) + (row * 3);

        if (startX + 1 < gridSize && startY + 1 < gridSize) {
          mapData[startX][startY] = 2;
          mapData[startX+1][startY] = 2;
          mapData[startX][startY+1] = 2;
          mapData[startX+1][startY+1] = 2;
          parcelCount++;
        }
        if (parcelCount >= 10) break;
      }
      if (parcelCount >= 10) break;
    }

    // Organischer Sandstrand entlang des Wassers
    for (int y = 0; y < gridSize; y++) {
      mapData[gridSize - 4][y] = 15;
    }

    _updateNetworks();
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
    double currentPrestige = 0.0;

    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        int tile = mapData[x][y];

        // Prestige-Berechnung
        if (tile == 3) currentPrestige += 5;   // Baum
        if (tile == 16) currentPrestige += 2;  // Pflanze
        if (tile == 17) currentPrestige += 3;  // Blumen
        if (tile == 18) currentPrestige += 1;  // Stein

        if (tile == 2) {
          bool hasRoad = checkRoadConnection(x, y);
          bool hasPipe = parcelWater[x][y];

          if (hasRoad && hasPipe) {
            income += 150.0;
            capacity++;
          } else if (hasRoad || hasPipe) {
            income += 70.0;
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

  Widget _buildGroundTile(int x, int y, int tileType) {
    bool isUndergroundView = selectedTool >= 8;
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
                  errorBuilder: (c, e, s) => Container(color: Colors.blue[800]),
                ),
              ),
              Opacity(
                opacity: groundOpacity,
                child: CustomPaint(painter: CoastPainter(_getCoastMask(x, y))),
              ),
            ],
          )
        else if (tileType == 15) // Sandstrand
          Opacity(
            opacity: groundOpacity,
            child: Stack(
              fit: StackFit.expand,
              children: [
                Container(color: const Color(0xFFE2C499)),
                CustomPaint(painter: CoastPainter(_getCoastMask(x, y))),
              ],
            ),
          )
        else if (tileType == 2 || tileType == 6) // Schotter (Parzelle & Rezeption)
            Opacity(
              opacity: groundOpacity,
              child: Image.asset(
                'assets/gravel.png',
                fit: BoxFit.cover,
                filterQuality: FilterQuality.none,
                errorBuilder: (c, e, s) => Container(color: Colors.grey),
              ),
            )
          else if (tileType == 4 || tileType == 5) // Straßen & Wege
              Opacity(
                opacity: groundOpacity,
                child: Stack(
                  fit: StackFit.expand,
                  children: [
                    Image.asset('assets/grass.png', fit: BoxFit.cover, errorBuilder: (c, e, s) => Container(color: Colors.green)),
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
                ),
              )
            else // Standard Wiese (Typ 0 & 3)
              Opacity(
                opacity: groundOpacity,
                child: Builder(
                  builder: (context) {
                    int variant = (x * 13 + y * 37) % 4;
                    return Stack(
                      fit: StackFit.expand,
                      children: [
                        Image.asset(
                          'assets/grass.png',
                          fit: BoxFit.cover,
                          filterQuality: FilterQuality.none,
                          errorBuilder: (c, e, s) => Container(color: Colors.green),
                        ),
                        if (!isUndergroundView && variant == 1)
                          const Center(child: Icon(Icons.eco, size: 12, color: Colors.black12)),
                      ],
                    );
                  },
                ),
              ),

        // --- NEU: DER GHOST (VORSCHAU) ---
        if (x == _hoveredX && y == _hoveredY && selectedTool != 0)
          Builder(
            builder: (context) {
              // Kollisionsprüfung: Darf man hier bauen?
              bool isBlocked = (mapData[x][y] == 1 || mapData[x][y] == 2);
              Color previewColor = isBlocked ? Colors.red : Colors.white;

              return Container(
                decoration: BoxDecoration(
                  color: previewColor.withOpacity(0.4),
                  border: Border.all(color: previewColor, width: 2),
                ),
                child: Center(
                  child: Icon(
                    selectedTool == 3 ? Icons.park :
                    selectedTool == 16 ? Icons.grass :
                    selectedTool == 17 ? Icons.local_florist :
                    selectedTool == 18 ? Icons.landscape :
                    selectedTool == 5 ? Icons.directions_car :
                    selectedTool == 8 ? Icons.water_drop :
                    Icons.add_box,
                    color: Colors.white70,
                    size: 20,
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

  Widget _buildTopBar() {
    return Container(
      height: 60,
      margin: const EdgeInsets.all(15),
      padding: const EdgeInsets.symmetric(horizontal: 20),
      decoration: BoxDecoration(
        color: Colors.black.withOpacity(0.8),
        borderRadius: BorderRadius.circular(15),
        border: Border.all(color: Colors.white24, width: 1.5),
        boxShadow: [BoxShadow(color: Colors.black.withOpacity(0.5), blurRadius: 10)],
      ),
      child: Row(
        children: [
          _topBarItem(Icons.calendar_today, 'TAG $inGameDay', Colors.white),
          const VerticalDivider(color: Colors.white24, indent: 15, endIndent: 15),
          _topBarItem(Icons.payments, '${money.toStringAsFixed(0)} €', Colors.greenAccent),
          const VerticalDivider(color: Colors.white24, indent: 15, endIndent: 15),
          _topBarItem(Icons.star, 'PRESTIGE: ${prestige.toInt()}', Colors.yellowAccent),
          const VerticalDivider(color: Colors.white24, indent: 15, endIndent: 15),
          _topBarItem(Icons.people, '$activeCampers / $maxCapacity', Colors.orangeAccent),
          const Spacer(),
          // Kamera Rotation Buttons in die Top Bar integriert
          IconButton(
            icon: const Icon(Icons.rotate_left, color: Colors.white70),
            onPressed: () => setState(() => cameraZ -= pi / 2),
          ),
          IconButton(
            icon: const Icon(Icons.rotate_right, color: Colors.white70),
            onPressed: () => setState(() => cameraZ += pi / 2),
          ),
          const SizedBox(width: 10),
          IconButton(
            icon: Icon(_isLegendVisible ? Icons.close : Icons.help_outline, color: Colors.white),
            onPressed: () => setState(() => _isLegendVisible = !_isLegendVisible),
          ),
        ],
      ),
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

  Widget _buildBottomMenu() {
    return Column(
      mainAxisSize: MainAxisSize.min,
      children: [
        // 1. Anzeige des aktiven Werkzeugs (nur wenn Menü zu)
        if (_selectedTab == -1 && selectedTool != 0)
          Padding(
            padding: const EdgeInsets.only(bottom: 10),
            child: Chip(
              elevation: 4,
              backgroundColor: Colors.cyanAccent[700],
              avatar: const Icon(Icons.construction, color: Colors.white, size: 18),
              label: Text(
                'Aktiv: $_activeToolName',
                style: const TextStyle(color: Colors.white, fontWeight: FontWeight.bold),
              ),
              onDeleted: () => setState(() {
                selectedTool = 0;
                _activeToolName = 'Keins';
              }),
              deleteIcon: const Icon(Icons.cancel, color: Colors.white70),
            ),
          ),

        // 2. Das aufklappbare Menü
        if (_selectedTab != -1)
          Stack(
            children: [
              AnimatedContainer(
                duration: const Duration(milliseconds: 250),
                height: 130,
                margin: const EdgeInsets.symmetric(horizontal: 15),
                decoration: BoxDecoration(
                  color: Colors.black.withOpacity(0.85),
                  borderRadius: const BorderRadius.vertical(top: Radius.circular(20)),
                  border: Border.all(color: Colors.white10),
                ),
                child: ListView(
                  scrollDirection: Axis.horizontal,
                  padding: const EdgeInsets.fromLTRB(20, 15, 60, 15),
                  children: _getToolsForTab(),
                ),
              ),
              Positioned(
                top: 5,
                right: 20,
                child: IconButton(
                  icon: const Icon(Icons.keyboard_arrow_down, color: Colors.white54),
                  onPressed: () => setState(() => _selectedTab = -1),
                ),
              ),
            ],
          ),

        // 3. Die Tab-Leiste (immer sichtbar)
        Container(
          height: 70,
          decoration: BoxDecoration(
            color: Colors.blueGrey[900],
            boxShadow: [BoxShadow(color: Colors.black.withOpacity(0.5), blurRadius: 15, offset: const Offset(0, -5))],
          ),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              _buildTabButton(0, 'WEGE', Icons.edit_road),
              _buildTabButton(1, 'NETZE', Icons.hub),
              _buildTabButton(2, 'ZONING', Icons.grid_view),
              _buildTabButton(3, 'NATUR', Icons.park),
              _buildTabButton(4, 'ABRISS', Icons.delete_sweep),
            ],
          ),
        ),
      ],
    );
  }

  Widget _buildTabButton(int id, String label, IconData icon) {
    bool isActive = _selectedTab == id;
    return InkWell(
      onTap: () => setState(() => _selectedTab = isActive ? -1 : id),
      child: SizedBox(
        width: 80,
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Icon(icon, color: isActive ? Colors.cyanAccent : Colors.white54, size: 28),
            const SizedBox(height: 4),
            Text(label, style: TextStyle(color: isActive ? Colors.cyanAccent : Colors.white54, fontSize: 10, fontWeight: FontWeight.bold)),
          ],
        ),
      ),
    );
  }

  List<Widget> _getToolsForTab() {
    switch (_selectedTab) {
      case 0: // Wege & Infrastruktur
        return [
          _buildToolTile('Straße', 5, Icons.directions_car, Colors.grey[850]!, '80 €'),
          _buildToolTile('Fußweg', 4, Icons.directions_walk, Colors.grey[600]!, '30 €'),
          _buildToolTile('Rezeption', 6, Icons.bungalow, Colors.amber[800]!, '2500 €'),
        ];
      case 1: // Versorgung / Netze
        return [
          _buildToolTile('Wasserleitung', 8, Icons.water_drop, Colors.cyanAccent[400]!, '120 €'),
          _buildToolTile('Abwasserrohr', 9, Icons.waves, Colors.brown[400]!, '90 €'),
          _buildToolTile('Stromkabel', 10, Icons.bolt, Colors.yellowAccent[700]!, '60 €'),
          const VerticalDivider(color: Colors.white24, width: 30),
          _buildToolTile('Wasserwerk', 7, Icons.water_damage, Colors.cyan[900]!, '1500 €'),
          _buildToolTile('Klärschacht', 12, Icons.delete, Colors.brown[800]!, '1200 €'),
          _buildToolTile('Trafo', 13, Icons.electric_bolt, Colors.yellow[800]!, '2000 €'),
        ];
      case 2: // Zoning
        return [
          _buildToolTile('Stellplatz', 2, Icons.crop_free, Colors.orange[300]!, '100 €'),
        ];
      case 3: // Natur
        return [
          _buildToolTile('Baum', 3, Icons.park, Colors.green[800]!, '50 €'),
          _buildToolTile('Pflanze', 16, Icons.grass, Colors.lightGreen, '15 €'),
          _buildToolTile('Blumen', 17, Icons.local_florist, Colors.pinkAccent, '5 €'),
          _buildToolTile('Stein', 18, Icons.landscape, Colors.blueGrey, '10 €'),
          _buildToolTile('Hecke', 14, Icons.border_inner, Colors.green[600]!, '20 €'),
        ];
      case 4: // Abriss
        return [
          _buildToolTile('Gelände', 0, Icons.auto_fix_normal, Colors.green[400]!, '0 €'),
          _buildToolTile('Leitungen', 11, Icons.link_off, Colors.redAccent, '0 €'),
        ];
      default: return [];
    }
  }

  Widget _buildToolTile(String name, int toolId, IconData icon, Color color, String cost) {
    bool isSelected = selectedTool == toolId;
    return GestureDetector(
      onTap: () => setState(() {
        selectedTool = toolId;
        _activeToolName = name;
      }),
      child: Container(
        width: 100,
        margin: const EdgeInsets.only(right: 12),
        decoration: BoxDecoration(
          color: isSelected ? color.withOpacity(0.4) : Colors.white.withOpacity(0.05),
          borderRadius: BorderRadius.circular(15),
          border: Border.all(color: isSelected ? color : Colors.white10, width: 2),
        ),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Icon(icon, color: isSelected ? color : Colors.white70, size: 30),
            const SizedBox(height: 4),
            Text(name, style: const TextStyle(color: Colors.white, fontSize: 10), textAlign: TextAlign.center),
            Text(cost, style: const TextStyle(color: Colors.yellowAccent, fontSize: 10, fontWeight: FontWeight.bold)),
          ],
        ),
      ),
    );
  }

  @override
  Widget build(BuildContext context) {
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

                                  // --- 1. PARZELLEN ---
                                  if (type == 2 && isParcelAnchor[x][y] && parcelState[x][y] > 0) {
                                    int state = parcelState[x][y];
                                    bool isCaravan = parcelIsCaravan[x][y];
                                    bool isBig = isBigParcel[x][y];

                                    // Zentriert das Fahrzeug auf 2x2 (x+1.0) oder 1x1 (x+0.5) Plätzen
                                    double anchorX = isBig ? x + 1.0 : x + 0.5;
                                    double anchorY = isBig ? y + 1.0 : y + 0.5;

                                    Widget content = Stack(
                                      clipBehavior: Clip.none,
                                      alignment: Alignment.bottomCenter,
                                      children: [
                                        Opacity(opacity: state == 1 ? 0.45 : 1.0, child: Image.asset(isCaravan ? 'assets/caravan.png' : 'assets/tent.png', width: 72, height: 72, fit: BoxFit.contain)),
                                        Positioned(left: -20, bottom: 5, child: Opacity(opacity: state == 1 ? 0.45 : 1.0, child: Image.asset('assets/table.png', width: 25, height: 25, errorBuilder: (c,e,s) => const Icon(Icons.table_restaurant, size: 18, color: Colors.brown)))),
                                        if (state == 1) Positioned(top: -15, child: SizedBox(width: 35, height: 5, child: LinearProgressIndicator(value: setupProgress[x][y], backgroundColor: Colors.black54, color: Colors.greenAccent))),
                                      ],
                                    );

                                    objectList.add(WorldObject(
                                      x: anchorX, y: anchorY, sinZ: sinZ, cosZ: cosZ,
                                      widget: buildTycoonObject(anchorX, anchorY, 72, 72, content, yOffset: 12.0),
                                    ));
                                  }
                                  // --- 2. REZEPTION ---
                                  else if (type == 6) {
                                    Widget content = Stack(
                                      clipBehavior: Clip.none,
                                      alignment: Alignment.bottomCenter,
                                      children: [
                                        Image.asset('assets/reception.png', width: 80, height: 80, fit: BoxFit.contain, errorBuilder: (c, e, s) => const Icon(Icons.house, size: 50, color: Colors.brown)),
                                        Positioned(right: -10, bottom: 0, child: SizedBox(width: 35, height: 35, child: Stack(clipBehavior: Clip.none, children: [
                                          Positioned(bottom: 0, left: 15, child: Container(width: 4, height: 16, color: Colors.grey[800])),
                                          Positioned(bottom: 12, left: 17, child: Transform(alignment: Alignment.bottomLeft, transform: Matrix4.identity()..rotateZ(-barrierAngle), child: Container(width: 30, height: 4, color: Colors.red[700]))),
                                        ]))),
                                      ],
                                    );
                                    objectList.add(WorldObject(
                                      x: x + 0.5, y: y + 0.5, sinZ: sinZ, cosZ: cosZ,
                                      widget: buildTycoonObject(x + 0.5, y + 0.5, 90, 80, content, yOffset: 15.0),
                                    ));
                                  }
                                  // --- 3. BÄUME, STRAND & DEKO ---
                                  else if (type == 3 || type == 14 || type == 15 || (type >= 16 && type <= 18)) {
                                    IconData icon = Icons.park; Color iconColor = Colors.green[800]!; double size = 60;
                                    if (type == 16) { icon = Icons.grass; iconColor = Colors.lightGreen; size = 45; }
                                    if (type == 17) { icon = Icons.local_florist; iconColor = Colors.pinkAccent; size = 40; }
                                    if (type == 18) { icon = Icons.landscape; iconColor = Colors.grey; size = 50; }

                                    Widget content;
                                    if (type >= 3 && type <= 18 && type != 14 && type != 15) {
                                      content = Icon(icon, size: size, color: iconColor);
                                    } else if (type == 14) {
                                      content = Image.asset('assets/hedge.png', width: 55, height: 55, fit: BoxFit.contain, errorBuilder: (c, e, s) => const Icon(Icons.grass, size: 30, color: Colors.lightGreen));
                                    } else {
                                      content = Image.asset('assets/parasol.png', width: 40, height: 40, fit: BoxFit.contain, errorBuilder: (c, e, s) => const Icon(Icons.beach_access, size: 24, color: Colors.orangeAccent));
                                    }

                                    objectList.add(WorldObject(
                                      x: x + 0.5, y: y + 0.5, sinZ: sinZ, cosZ: cosZ,
                                      widget: buildTycoonObject(x + 0.5, y + 0.5, size, size, content, yOffset: 5.0),
                                    ));
                                  }
                                }
                              }

                              // --- 4. FAHRZEUGE & GÄSTE ---
                              for (var car in activeCars) {
                                objectList.add(WorldObject(
                                  x: car.x, y: car.y, sinZ: sinZ, cosZ: cosZ,
                                  widget: buildTycoonObject(car.x, car.y, 28, 28, const Icon(Icons.directions_car, size: 28, color: Colors.blueAccent), yOffset: 0.0),
                                ));
                              }

                              objectList.add(WorldObject(
                                x: guestX, y: guestY, sinZ: sinZ, cosZ: cosZ,
                                widget: buildTycoonObject(guestX, guestY, 32, 32, const Icon(Icons.emoji_people, size: 32, color: Colors.white), yOffset: 0.0),
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
                child: _buildTopBar(),
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
                child: _buildBottomMenu(),
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
  CoastPainter(this.mask);

  @override
  void paint(Canvas canvas, Size size) {
    // Eine weiche Sandfarbe für den Strand
    final paint = Paint()..color = const Color(0xFFE2C499);
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
