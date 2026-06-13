#include <iostream>
#include "Osoba.hpp"

using namespace std;

Osoba::Osoba(string i, string n)
{
    imie = i;
    nazwisko = n;
}

Osoba::~Osoba() {}

string Osoba::getImie()
{
    return imie;
}

void Osoba::setImie(string i)
{
    imie = i;
}

string Osoba::getNazwisko()
{
    return nazwisko;
}

void Osoba::setNazwisko(string n)
{
    nazwisko = n;
}