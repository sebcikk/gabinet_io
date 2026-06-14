#include "Pacjent.hpp"

Pacjent::Pacjent(string i, string n, int r_u, string p)
    : Osoba(i, n), rok_urodzenia(r_u), pesel(p) {}

string Pacjent::getPesel() { return pesel; }
void Pacjent::setPesel(string p) { pesel = p; }
int Pacjent::getRok_urodzenia() { return rok_urodzenia; }
void Pacjent::setRok_urodzenia(int r_u) { rok_urodzenia = r_u; }
void Pacjent::getKartoteka()
{
    cout << "Pobieranie danych kartoteki dla pacjenta PESEL: " << pesel << endl;
}
