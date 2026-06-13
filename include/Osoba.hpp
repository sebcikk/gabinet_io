#ifndef OSOBA_HPP
#define OSOBA_HPP
#include <iostream>

using namespace std;

class Osoba {
protected:
    string imie;
    string nazwisko;

public:
    Osoba(string i = "", string n = "")
        : imie(i), nazwisko(n) {
    }

    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }

    void setImie(string i) { imie = i; }
    void setNazwisko(string n) { nazwisko = n; }
};

#endif