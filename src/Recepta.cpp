#include "Recepta.hpp"
#include "Lekarz.hpp"

Recepta::Recepta(Pacjent *p, Lekarz *l, string d, string u)
    : pacjent(p), lekarz(l), dawkowanie(d), uwagi(u), liczbaLekow(0) {}

void Recepta::dodajLek(Lek *lek)
{
    if (liczbaLekow < 100)
    {
        leki[liczbaLekow] = lek;
        liczbaLekow++;
    }
}

string Recepta::getDawkowanie() { return dawkowanie; }
string Recepta::getUwagi() { return uwagi; }
int Recepta::getLiczbaLekow() { return liczbaLekow; }