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
  int selectedTool = 3; // 3 = Simplesta Rohr, 4 = Weg, 0 = Wiese

  @override
  void initState() {
    super.initState();
    _generatePrototypeMap();
  }

  // Generiert die Startkarte mit Wiese, 10 Parzellen und dem Meer
  void _generatePrototypeMap() {
    // 0 = Wiese, 1 = Meer, 2 = Parzelle, 3 = Rohr, 4 = Weg
    mapData = List.generate(gridSize, (x) => List.generate(gridSize, (y) {
      if (x >= 16) return 1; // Die rechten 4 Spalten werden zum Meer
      return 0; // Der Rest ist Wiese
    }));

    // 10 Parzellen (jeweils 2x2 Kacheln groß) generieren
    int parcelCount = 0;
    for (int col = 0; col < 2; col++) {
      for (int row = 0; row < 5; row++) {
        int startX = 3 + (col * 6); // Abstand zwischen den Spalten
        int startY = 2 + (row * 3); // Abstand zwischen den Reihen
        
        // Eine 2x2 Parzelle auf die Wiese setzen
        mapData[startX][startY] = 2;
        mapData[startX+1][startY] = 2;
        mapData[startX][startY+1] = 2;
        mapData[startX+1][startY+1] = 2;
        
        parcelCount++;
        if (parcelCount >= 10) break;
      }
    }
  }

  void buildTile(int x, int y) {
    // Verhindert, dass man das Meer oder die Parzellen versehentlich überbaut
    if (mapData[x][y] == 1 || mapData[x][y] == 2) return; 
    
    setState(() {
      mapData[x][y] = selectedTool;
    });
  }

  Color getTileColor(int type) {
    switch (type) {
      case 1: return Colors.blue[800]!; // Meer (Tiefblau)
      case 2: return Colors.orange[200]!; // Parzelle (Sand/Kies)
      case 3: return Colors.cyanAccent[400]!; // Simplesta SH Rohr (Leuchtend Hellblau)
      case 4: return Colors.grey[600]!; // Weg (Asphalt)
      default: return Colors.green[400]!; // Wiese (Gras)
    }
  }

  Widget _buildMenuButton(String title, int toolId, IconData icon, Color color) {
    bool isActive = selectedTool == toolId;
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 6.0),
      child: ElevatedButton.icon(
        style: ElevatedButton.styleFrom(
          backgroundColor: isActive ? color : Colors.grey[200],
          foregroundColor: isActive ? (toolId == 3 ? Colors.black : Colors.white) : Colors.black87,
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
        title: const Text('Camping Simulator - Prototyp'),
        backgroundColor: Theme.of(context).colorScheme.inversePrimary,
      ),
      body: Row(
        children: [
          Container(
            width: 340,
            color: Colors.white,
            padding: const EdgeInsets.all(20),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                const Text('Baumaterial', style: TextStyle(fontSize: 22, fontWeight: FontWeight.bold)),
                const SizedBox(height: 24),
                _buildMenuButton('Simplesta SH Edelstahl (3 Kreise)', 3, Icons.water_drop, Colors.cyanAccent[400]!),
                _buildMenuButton('Infrastruktur Weg', 4, Icons.add_road, Colors.grey[700]!),
                const Divider(height: 30, thickness: 2),
                _buildMenuButton('Abriss (Wiese)', 0, Icons.grass, Colors.green),
                const Spacer(),
                const Text('Legende:', style: TextStyle(fontWeight: FontWeight.bold)),
                const SizedBox(height: 10),
                Row(children: [Icon(Icons.square, color: Colors.blue[800]), const SizedBox(width: 8), const Text('Meer')]),
                const SizedBox(height: 5),
                Row(children: [Icon(Icons.square, color: Colors.orange[200]), const SizedBox(width: 8), const Text('Stellplatz Parzelle')]),
              ],
            ),
          ),
          Expanded(
            child: InteractiveViewer(
              boundaryMargin: const EdgeInsets.all(100),
              minScale: 0.5,
              maxScale: 4.0,
              child: Center(
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
