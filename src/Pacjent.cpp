#include "Pacjent.hpp"

Pacjent::Pacjent(string i, string n, int r_u, string p)
    : Osoba(i, n), rok_urodzenia(r_u), pesel(p) {}

string Pacjent::getPesel() { return pesel; }
void Pacjent::setPesel(string p) { pesel = p; }
int Pacjent::getRok_Urodzenia() { return rok_urodzenia; }
void Pacjent::setRok_Urodzenia(int r_u) { rok_urodzenia = r_u; }
void Pacjent::getKartoteka()
{
    cout << "Pobieranie danych kartoteki dla pacjenta PESEL: " << pesel << endl;
}