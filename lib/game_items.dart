// lib/game_items.dart
import 'package:flutter/material.dart';

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
  const GameItem(id: 72, name: 'Waschhaus', category: 'Hygiene', cost: 400, prestigeValue: 40, requiredPrestige: 300, dailyIncome: -25, icon: Icons.home_work),

  // --- VERPFLEGUNG ---
  const GameItem(id: 40, name: 'Fischrestaurant', category: 'Verpflegung', cost: 600, prestigeValue: 50, requiredPrestige: 400, dailyIncome: 120, icon: Icons.restaurant),
  const GameItem(id: 42, name: 'Schnellrestaurant', category: 'Verpflegung', cost: 400, prestigeValue: 35, requiredPrestige: 300, dailyIncome: 80, icon: Icons.fastfood),
  const GameItem(id: 44, name: 'Cafe', category: 'Verpflegung', cost: 450, prestigeValue: 35, requiredPrestige: 300, dailyIncome: 70, icon: Icons.local_cafe),

  // --- POOL ---
  const GameItem(id: 80, name: 'Poolkachel', category: 'Pool', cost: 50, prestigeValue: 5, requiredPrestige: 400, dailyIncome: -2, icon: Icons.pool),
  const GameItem(id: 85, name: 'Poolbar', category: 'Pool', cost: 600, prestigeValue: 60, requiredPrestige: 600, dailyIncome: 110, icon: Icons.local_bar),

  // --- AKTIVITÄTEN ---
  const GameItem(id: 60, name: 'Bootsverleih', category: 'Aktivitäten', cost: 1000, prestigeValue: 100, requiredPrestige: 600, dailyIncome: 180, icon: Icons.rowing),
  const GameItem(id: 63, name: 'Spielplatz', category: 'Aktivitäten', cost: 500, prestigeValue: 50, requiredPrestige: 500, dailyIncome: 30, icon: Icons.child_care),

  // --- ABRISS ---
  const GameItem(id: 99, name: 'Abriss', category: 'Abriss', cost: 0, prestigeValue: 0, requiredPrestige: 0, dailyIncome: 0, icon: Icons.delete),
];