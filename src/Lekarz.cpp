#include "Lekarz.hpp"

Lekarz::Lekarz() : gabinet(nullptr), liczbaSkierowan(0), liczbaRecept(0) {}

string Lekarz::getTytul() { return tytul; }
void Lekarz::setTytul(string t) { tytul = t; }
string Lekarz::getSpecjalizacja() { return specjalizacja; }
void Lekarz::setSpecjalizacja(string s) { specjalizacja = s; }
void Lekarz::setGabinet(Gabinet *g) { gabinet = g; }
Gabinet *Lekarz::getGabinet() { return gabinet; }