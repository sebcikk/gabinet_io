#ifndef OSOBA_HPP
#define OSOBA_HPP
#include <iostream>
#include <string>

using namespace std;

class Osoba
{
protected:
    string imie;
    string nazwisko;

public:
    Osoba() {}; // Konstruktor domyślny

    Osoba(string i, string n);

    // Czysto wirtualny destruktor (wymusza polimorfizm i rozwiązuje problem)
    virtual ~Osoba() = 0;

    string getImie();
    void setImie(string i);

    string getNazwisko();
    void setNazwisko(string n);
};
#endif