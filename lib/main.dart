import 'dart:async';
import 'dart:math';
import 'dart:ui' as ui;
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter/scheduler.dart';

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

// Strategische Reihenfolge & Freischaltung
final Map<String, int> categoryUnlockPrestige = {
  "Zoning": 0,
  "Wege": 0,
  "Natur": 0,
  "Netze": 100,       // 1 Stern
  "Hygiene": 100,     // 1 Stern
  "Verpflegung": 300, // 3 Sterne
  "Pool": 400,        // 4 Sterne
  "Aktivitäten": 500, // 5 Sterne
  "Abriss": 0,        // Immer da
};

final List<GameItem> allItems = [
  // --- ZONING ---
  const GameItem(id: 20, name: 'Stellplatz 1 (Erdig ohne umrandung)', category: 'Zoning', cost: 100, prestigeValue: 5, requiredPrestige: 0, dailyIncome: 15, icon: Icons.holiday_village),
  const GameItem(id: 21, name: 'Stellplatz 2 (mit Heckenumrandung)', category: 'Zoning', cost: 200, prestigeValue: 10, requiredPrestige: 200, dailyIncome: 30, icon: Icons.holiday_village),
  const GameItem(id: 22, name: 'Stellplatz 3 (mit heckenumrandung und Baum drauf)', category: 'Zoning', cost: 400, prestigeValue: 20, requiredPrestige: 400, dailyIncome: 60, icon: Icons.holiday_village),
  const GameItem(id: 23, name: 'Freifläche', category: 'Zoning', cost: 100, prestigeValue: 5, requiredPrestige: 0, dailyIncome: 10, icon: Icons.crop_free),
  const GameItem(id: 24, name: 'Mobilheim', category: 'Zoning', cost: 1500, prestigeValue: 100, requiredPrestige: 600, dailyIncome: 250, icon: Icons.house),

  // --- WEGE ---
  const GameItem(id: 1, name: 'Schotterstraße', category: 'Wege', cost: 20, prestigeValue: 1, requiredPrestige: 0, dailyIncome: 0, icon: Icons.add_road),
  const GameItem(id: 2, name: 'geteerete Straße', category: 'Wege', cost: 50, prestigeValue: 2, requiredPrestige: 200, dailyIncome: 0, icon: Icons.add_road),
  const GameItem(id: 3, name: 'kiesweg', category: 'Wege', cost: 20, prestigeValue: 1, requiredPrestige: 0, dailyIncome: 0, icon: Icons.add_road),
  const GameItem(id: 4, name: 'Rezeption', category: 'Wege', cost: 1000, prestigeValue: 50, requiredPrestige: 300, dailyIncome: 50, icon: Icons.store),
  const GameItem(id: 5, name: 'Straße mit Blumen', category: 'Wege', cost: 80, prestigeValue: 4, requiredPrestige: 400, dailyIncome: 0, icon: Icons.add_road),
  const GameItem(id: 6, name: 'Verzierter weg', category: 'Wege', cost: 100, prestigeValue: 5, requiredPrestige: 600, dailyIncome: 0, icon: Icons.add_road),

  // --- NATUR ---
  const GameItem(id: 30, name: 'Nadelbaum', category: 'Natur', cost: 20, prestigeValue: 4, requiredPrestige: 0, dailyIncome: 0, icon: Icons.nature),
  const GameItem(id: 31, name: 'laubbaum', category: 'Natur', cost: 20, prestigeValue: 6, requiredPrestige: 100, dailyIncome: 0, icon: Icons.nature),
  const GameItem(id: 32, name: 'Zypresse', category: 'Natur', cost: 20, prestigeValue: 8, requiredPrestige: 200, dailyIncome: 0, icon: Icons.nature),
  const GameItem(id: 33, name: 'Busch', category: 'Natur', cost: 10, prestigeValue: 2, requiredPrestige: 0, dailyIncome: 0, icon: Icons.park),
  const GameItem(id: 34, name: 'blume', category: 'Natur', cost: 15, prestigeValue: 3, requiredPrestige: 200, dailyIncome: 0, icon: Icons.local_florist),
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
  const GameItem(id: 16, name: 'Gastank', category: 'Netze', cost: 100, prestigeValue: 0, requiredPrestige: 100, dailyIncome: -5, icon: Icons.gas_meter),
  const GameItem(id: 17, name: 'Gasleitung', category: 'Netze', cost: 40, prestigeValue: 0, requiredPrestige: 100, dailyIncome: -1, icon: Icons.settings_input_component),

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

final List<String> categories = ["Zoning", "Wege", "Natur", "Netze", "Hygiene", "Verpflegung", "Pool", "Aktivitäten", "Abriss"];

void main() {
  runApp(const CampingSimApp());
}

class CampingSimApp extends StatelessWidget {
  const CampingSimApp({super.key});
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'camping_sim',
      theme: ThemeData.dark(),
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
  // Grid
  final int gridSize = 20;
  late List<List<int>> mapData;

  // Rendering / Camera
  final double tileSize = 48.0;
  Offset pan = const Offset(420, 60);
  double zoom = 1.0;
  double cameraAngle = 0.0;
  double cameraTilt = 0.0;

  // Input state
  final FocusNode _focusNode = FocusNode();
  bool wPressed = false;
  bool aPressed = false;
  bool sPressed = false;
  bool dPressed = false;
  bool qPressed = false;
  bool ePressed = false;

  final double panSpeed = 600.0;
  final double rotateSpeed = 1.6;

  late final Ticker _ticker;
  Duration _lastTick = Duration.zero;

  // Assets
  final Map<String, ui.Image> images = {};
  bool assetsLoaded = false;

  // UI Status
  bool _isLegendVisible = false;
  String _selectedCategory = 'Zoning'; 
  String _activeToolName = 'Keins'; 
  bool _isGodMode = false;
  double money = 15000.0; 
  double dailyIncome = 0.0;
  double prestige = 0.0;
  int inGameDay = 1;
  int activeCampers = 0;
  int maxCapacity = 0;
  int selectedTool = 0;

  @override
  void initState() {
    super.initState();
    _generatePrototypeMap();
    _loadAllAssets().then((_) {
      setState(() {
        assetsLoaded = true;
      });
    });
    _ticker = createTicker(_onTick)..start();
    WidgetsBinding.instance.addPostFrameCallback((_) {
      _focusNode.requestFocus();
    });
    _startGameLoop();
  }

  void _startGameLoop() {
    Timer.periodic(const Duration(seconds: 3), (timer) {
      setState(() {
        inGameDay++;
        money += dailyIncome;
        _calculateEconomy();
      });
    });
  }

  void _calculateEconomy() {
    double revenue = 0.0;
    int capacity = 0;
    double currentPrestige = 0.0;
    
    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        int tileId = mapData[x][y];
        if (tileId == 0) continue;

        try {
          GameItem item = allItems.firstWhere((e) => e.id == tileId);
          currentPrestige += item.prestigeValue;
          revenue += item.dailyIncome;
          if (item.category == 'Zoning' && item.id != 23) {
            capacity++;
          }
        } catch (e) {}
      }
    }
    dailyIncome = revenue;
    maxCapacity = capacity;
    prestige = currentPrestige;
  }

  @override
  void dispose() {
    _ticker.dispose();
    _focusNode.dispose();
    super.dispose();
  }

  void _onTick(Duration elapsed) {
    if (_lastTick == Duration.zero) {
      _lastTick = elapsed;
      return;
    }
    final double dt = (elapsed - _lastTick).inMilliseconds / 1000.0;
    _lastTick = elapsed;

    double dx = 0.0, dy = 0.0;
    if (wPressed) dy += panSpeed * dt;
    if (sPressed) dy -= panSpeed * dt;
    if (aPressed) dx += panSpeed * dt;
    if (dPressed) dx -= panSpeed * dt;

    double dAngle = 0.0;
    if (qPressed) dAngle -= rotateSpeed * dt;
    if (ePressed) dAngle += rotateSpeed * dt;

    if (dx != 0.0 || dy != 0.0 || dAngle != 0.0) {
      setState(() {
        pan = pan.translate(dx, dy);
        cameraAngle += dAngle;
      });
    }
  }

  void _generatePrototypeMap() {
    mapData = List.generate(gridSize, (x) => List.generate(gridSize, (y) => (x >= gridSize - 3) ? 1 : 0));
    for (int y = 0; y < gridSize; y++) mapData[0][y] = 1; // Straße/Rand
  }

  Future<void> _loadAllAssets() async {
    // Hier laden wir die Assets wie im funktionierenden Remote-Code
    final Map<String, String> assetFiles = {
      'grass': 'assets/grass.png',
      'water': 'assets/water.png',
      'gravel': 'assets/gravel.png',
      'reception': 'assets/reception.png',
      'caravan': 'assets/caravan.png',
      'tent': 'assets/tent.png',
      'tree': 'assets/tree.png',
      'hedge': 'assets/hedge.png',
    };

    for (final entry in assetFiles.entries) {
      try {
        final data = await rootBundle.load(entry.value);
        final bytes = data.buffer.asUint8List();
        final codec = await ui.instantiateImageCodec(bytes);
        final frame = await codec.getNextFrame();
        images[entry.key] = frame.image;
      } catch (e) {
        debugPrint('Failed to load ${entry.key}');
      }
    }
  }

  Offset isoProject(double tileX, double tileY) {
    final double halfW = tileSize / 2;
    final double halfH = tileSize / 4;
    final double sx = (tileX - tileY) * halfW;
    final double sy = (tileX + tileY) * halfH;
    return Offset(sx, sy);
  }

  void buildTile(int x, int y) {
    if (mapData[x][y] == 1) return;
    final item = allItems.firstWhere((e) => e.id == selectedTool, orElse: () => allItems.last);
    if (money < item.cost) return;

    setState(() {
      money -= item.cost;
      mapData[x][y] = selectedTool;
      _calculateEconomy();
    });
  }

  @override
  Widget build(BuildContext context) {
    int activeStars = (prestige / 100).floor().clamp(0, 10);
    List<String> visibleCategories = categoryUnlockPrestige.keys.where((cat) {
      return categoryUnlockPrestige[cat]! <= prestige || _isGodMode;
    }).toList();

    return Focus(
      focusNode: _focusNode,
      autofocus: true,
      onKeyEvent: (FocusNode node, KeyEvent event) {
        final isDown = event is KeyDownEvent || event is KeyRepeatEvent;
        setState(() {
          if (event.logicalKey == LogicalKeyboardKey.keyW) wPressed = isDown;
          if (event.logicalKey == LogicalKeyboardKey.keyA) aPressed = isDown;
          if (event.logicalKey == LogicalKeyboardKey.keyS) sPressed = isDown;
          if (event.logicalKey == LogicalKeyboardKey.keyD) dPressed = isDown;
          if (event.logicalKey == LogicalKeyboardKey.keyQ) qPressed = isDown;
          if (event.logicalKey == LogicalKeyboardKey.keyE) ePressed = isDown;
        });
        return KeyEventResult.handled;
      },
      child: Scaffold(
        body: Stack(
          children: [
            // Spielfeld
            Positioned.fill(
              child: assetsLoaded 
                ? CustomPaint(
                    painter: _MapPainter(
                      mapData: mapData,
                      gridSize: gridSize,
                      tileSize: tileSize,
                      images: images,
                      pan: pan,
                      zoom: zoom,
                      cameraAngle: cameraAngle,
                      isoProject: isoProject,
                    ),
                  )
                : const Center(child: CircularProgressIndicator()),
            ),

            // Top Bar
            Positioned(
              top: 0, left: 0, right: 0,
              child: _buildTopBar(activeStars),
            ),

            // Bottom Menu
            Positioned(
              bottom: 0, left: 0, right: 0,
              child: _buildBottomMenu(visibleCategories),
            ),
          ],
        ),
      ),
    );
  }

  Widget _buildTopBar(int activeStars) {
    return Container(
      height: 60,
      margin: const EdgeInsets.all(15),
      padding: const EdgeInsets.symmetric(horizontal: 20),
      decoration: BoxDecoration(
        color: Colors.black.withOpacity(0.8),
        borderRadius: BorderRadius.circular(15),
      ),
      child: Row(
        children: [
          GestureDetector(
            onLongPress: () => setState(() => _isGodMode = !_isGodMode),
            child: Text('TAG $inGameDay', style: TextStyle(color: _isGodMode ? Colors.redAccent : Colors.white)),
          ),
          const SizedBox(width: 20),
          Text('${money.toStringAsFixed(0)} €', style: const TextStyle(color: Colors.greenAccent, fontWeight: FontWeight.bold)),
          const SizedBox(width: 20),
          Row(
            children: List.generate(10, (index) {
              int starLevel = index + 1;
              bool isVisible = starLevel <= activeStars + 2 || _isGodMode;
              if (!isVisible) return const SizedBox(width: 24);
              return Icon(
                activeStars >= starLevel ? Icons.star : Icons.star_border,
                color: Colors.yellowAccent, size: 22,
              );
            }),
          ),
        ],
      ),
    );
  }

  Widget _buildBottomMenu(List<String> visibleCategories) {
    List<GameItem> currentItems = allItems.where((item) => item.category == _selectedCategory).toList();

    return Column(
      mainAxisSize: MainAxisSize.min,
      children: [
        if (_selectedCategory.isNotEmpty)
          Container(
            height: 120,
            margin: const EdgeInsets.symmetric(horizontal: 15),
            decoration: BoxDecoration(color: Colors.black.withOpacity(0.8), borderRadius: const BorderRadius.vertical(top: Radius.circular(20))),
            child: ListView.builder(
              scrollDirection: Axis.horizontal,
              itemCount: currentItems.length,
              itemBuilder: (context, index) {
                final item = currentItems[index];
                bool isSelected = selectedTool == item.id;
                return GestureDetector(
                  onTap: () => setState(() {
                    selectedTool = item.id;
                    _activeToolName = item.name;
                  }),
                  child: Container(
                    width: 100,
                    margin: const EdgeInsets.all(8),
                    decoration: BoxDecoration(
                      color: isSelected ? Colors.cyan.withOpacity(0.3) : Colors.white10,
                      border: Border.all(color: isSelected ? Colors.cyan : Colors.transparent),
                      borderRadius: BorderRadius.circular(10),
                    ),
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Icon(item.icon, color: Colors.white),
                        Text(item.name, style: const TextStyle(fontSize: 8, color: Colors.white), textAlign: TextAlign.center),
                      ],
                    ),
                  ),
                );
              },
            ),
          ),
        Container(
          height: 60,
          color: Colors.blueGrey[900],
          child: SingleChildScrollView(
            scrollDirection: Axis.horizontal,
            child: Row(
              children: visibleCategories.map((cat) => TextButton(
                onPressed: () => setState(() => _selectedCategory = cat),
                child: Text(cat, style: TextStyle(color: _selectedCategory == cat ? Colors.cyanAccent : Colors.white)),
              )).toList(),
            ),
          ),
        ),
      ],
    );
  }
}

class _MapPainter extends CustomPainter {
  final List<List<int>> mapData;
  final int gridSize;
  final double tileSize;
  final Map<String, ui.Image> images;
  final Offset pan;
  final double zoom;
  final double cameraAngle;
  final Offset Function(double, double) isoProject;

  _MapPainter({required this.mapData, required this.gridSize, required this.tileSize, required this.images, required this.pan, required this.zoom, required this.cameraAngle, required this.isoProject});

  @override
  void paint(Canvas canvas, Size size) {
    canvas.save();
    canvas.translate(pan.dx, pan.dy);
    canvas.scale(zoom);
    canvas.rotate(cameraAngle);

    for (int x = 0; x < gridSize; x++) {
      for (int y = 0; y < gridSize; y++) {
        final pos = isoProject(x.toDouble(), y.toDouble());
        final paint = Paint()..color = (mapData[x][y] == 1 ? Colors.blue : Colors.green);
        canvas.drawCircle(pos, 5, paint);
      }
    }
    canvas.restore();
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) => true;
}
