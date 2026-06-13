#include "Usluga.hpp"

Usluga::Usluga() : nazwa(""), wymagany_czas(0) {}
Usluga::Usluga(string n, int czas) : nazwa(n), wymagany_czas(czas) {}
string Usluga::getNazwa() { return nazwa; }
int Usluga::getWymagany_czas() { return wymagany_czas; }