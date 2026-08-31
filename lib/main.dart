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
  final int gridSize = 20; // 20x20 Spielfeld
  late List<List<int>> mapData;
  int selectedTool = 1; // 1 = Rohr, 2 = Weg, 0 = Abriss/Wiese

  @override
  void initState() {
    super.initState();
    // Startet mit einer leeren Matrix (alles Wiese)
    mapData = List.generate(gridSize, (_) => List.generate(gridSize, (_) => 0));
  }

  void buildTile(int x, int y) {
    setState(() {
      mapData[x][y] = selectedTool;
    });
  }

  Color getTileColor(int type) {
    switch (type) {
      case 1: return Colors.blue[400]!; // Wasser/Rohre
      case 2: return Colors.grey[600]!; // Asphalt/Schotter
      default: return Colors.green[300]!; // Gras
    }
  }

  Widget _buildMenuButton(String title, int toolId, IconData icon, Color color) {
    bool isActive = selectedTool == toolId;
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 6.0),
      child: ElevatedButton.icon(
        style: ElevatedButton.styleFrom(
          backgroundColor: isActive ? color : Colors.grey[200],
          foregroundColor: isActive ? Colors.white : Colors.black87,
          alignment: Alignment.centerLeft,
          minimumSize: const Size(double.infinity, 55),
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
        title: const Text('Camping Simulator - Map Editor'),
        backgroundColor: Theme.of(context).colorScheme.inversePrimary,
      ),
      body: Row(
        children: [
          // Seitliches Bau-Menü
          Container(
            width: 320,
            color: Colors.white,
            padding: const EdgeInsets.all(20),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                const Text('Baumaterial', style: TextStyle(fontSize: 22, fontWeight: FontWeight.bold)),
                const SizedBox(height: 24),
                _buildMenuButton('Simplesta SH Edelstahl (3 Kreise)', 1, Icons.water_drop, Colors.blue),
                _buildMenuButton('Infrastruktur Weg', 2, Icons.add_road, Colors.grey[700]!),
                const Divider(height: 40, thickness: 2),
                _buildMenuButton('Abriss (Wiese)', 0, Icons.grass, Colors.green),
              ],
            ),
          ),
          // Interaktives Spielfeld
          Expanded(
            child: InteractiveViewer(
              boundaryMargin: const EdgeInsets.all(100),
              minScale: 0.5,
              maxScale: 4.0,
              child: Center(
                child: Container(
                  width: 800,
                  height: 800,
                  decoration: BoxDecoration(
                    border: Border.all(color: Colors.white24, width: 2),
                  ),
                  child: GridView.builder(
                    physics: const NeverScrollableScrollPhysics(),
                    gridDelegate: SliverGridDelegateWithFixedCrossAxisCount(
                      crossAxisCount: gridSize,
                    ),
                    itemCount: gridSize * gridSize,
                    itemBuilder: (context, index) {
                      int x = index ~/ gridSize;
                      int y = index % gridSize;
                      
                      return GestureDetector(
                        onTap: () => buildTile(x, y),
                        child: Container(
                          margin: const EdgeInsets.all(1),
                          decoration: BoxDecoration(
                            color: getTileColor(mapData[x][y]),
                            borderRadius: BorderRadius.circular(2),
                          ),
                        ),
                      );
                    },
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
