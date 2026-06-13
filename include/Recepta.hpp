#ifndef RECEPTA_HPP
#define RECEPTA_HPP

#include "Pacjent.hpp"
#include "Lek.hpp"
#include <iostream>
#include <string>

using namespace std;

// Deklaracja wyprzedzająca
class Lekarz;

class Recepta
{
private:
    string dawkowanie;
    string uwagi;
    Pacjent *pacjent;
    Lekarz *lekarz;

    Lek *leki[100];
    int liczbaLekow;

public:
    Recepta(Pacjent *p, Lekarz *l, string d, string u);

    void dodajLek(Lek *lek);

    string getDawkowanie();
    string getUwagi();
    int getLiczbaLekow();
    void setDawkowanie(string d);
    void setUwagi(string u);
};
#endif