# Implementierung der Wasserfluss-Logik (Simplesta-Rohre)

Ziel ist es, dass Simplesta-Edelstahlrohre nur dann "aktiv" (hellblau leuchtend) sind, wenn sie eine Verbindung zu einer Wasserquelle haben. Rohre ohne Verbindung werden "inaktiv" (dunkler/grau) dargestellt.

## Vorgeschlagene Änderungen

### [Camping Sim Kernlogik]

Wir erweitern den `_GameScreenState`, um den Status des Wasserflusses zu berechnen.

#### [MODIFY] [main.dart](file:///C:/Users/denni/AndroidStudioProjects/camping_sim/lib/main.dart)
- Hinzufügen einer `List<List<bool>> waterFlow`, die speichert, ob an einer Koordinate Wasser fließt.
- Implementierung einer Methode `_updateWaterFlow()`, die mittels eines einfachen "Flood Fill" Algorithmus prüft, welche Rohre mit der Quelle verbunden sind.
- Als Quelle definieren wir die **Rezeption/Einfahrt** (Tool 6) oder direkt angrenzende Kacheln am **Meer**.
- Aktualisierung der `getTileColor` Methode:
    - Wenn `type == 3` (Rohr) UND `waterFlow[x][y] == true` -> Leuchtendes Hellblau.
    - Wenn `type == 3` (Rohr) UND `waterFlow[x][y] == false` -> Dunkles Cyan/Grau (inaktiv).
- Automatischer Aufruf von `_updateWaterFlow()` bei jedem `buildTile` oder beim Laden der Map.

## Verifizierungsplan

### Manuelle Verifizierung
1. Starten der Windows-App.
2. Bauen einer Rohrleitung von der Rezeption aus.
3. Beobachten, ob die Rohre "blau" werden, sobald sie die Rezeption berühren.
4. Unterbrechen der Leitung und Prüfen, ob die abgetrennten Teile wieder "grau/inaktiv" werden.
