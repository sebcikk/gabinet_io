#ifndef OSOBA_HPP
#define OSOBA_HPP
#include <iostream>

using namespace std;

class Osoba
{
protected:
    string imie;
    string nazwisko;

public:
    Osoba() {};

    Osoba(string i, string n);

    virtual ~Osoba() = 0;

    string getImie();

    void setImie(string i);

    string getNazwisko();

    void setNazwisko(string n);
};
#endif