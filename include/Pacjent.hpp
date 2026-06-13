#ifndef PACJENT_HPP
#define PACJENT_HPP

#include "Osoba.hpp"

using namespace std;

class Pacjent : public Osoba
{
private:
    int rok_urodzenia;
    string pesel;

public:
    Pacjent(string i, string n, int r_u, string p);

    string getPesel();
    void setPesel(string p);
    int getRok_Urodzenia();
    void setRok_Urodzenia(int r_u);
    void getKartoteka();
};

#endif