#ifndef SKIEROWANIE_HPP
#define SKIEROWANIE_HPP

#include "Pacjent.hpp"
#include <iostream>
#include <string>

using namespace std;

// Deklaracja wyprzedzająca
class Lekarz;

class Skierowanie
{
private:
    string cel_skierowania;
    string uwagi;
    Pacjent *pacjent;
    Lekarz *lekarz;

public:
    Skierowanie(Pacjent *p, Lekarz *l, string cel, string u);
    string getCel_skierowania();
    string getUwagi();
    void setCel_skierowania(string cel);
    void setUwagi(string u);
};
#endif