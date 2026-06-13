#ifndef LEKARZ_HPP
#define LEKARZ_HPP

#include "Osoba.hpp"
#include "Gabinet.hpp"
#include <iostream>
#include <string>

using namespace std;

// DEKLARACJE WYPRZEDZAJĄCE (To one rozwiązują Twój problem!)
class Skierowanie;
class Recepta;

class Lekarz : public Osoba
{
private:
    string tytul;
    string specjalizacja;
    Gabinet *gabinet;

    Skierowanie *skierowania[100];
    int liczbaSkierowan;
    Recepta *recepty[100];
    int liczbaRecept;

public:
    Lekarz();

    string getTytul();
    void setTytul(string t);
    string getSpecjalizacja();
    void setSpecjalizacja(string s);
    void setGabinet(Gabinet *g);
    Gabinet *getGabinet();
};
#endif