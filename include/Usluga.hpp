#ifndef USLUGA_HPP
#define USLUGA_HPP
#include <iostream>

using namespace std;

class Usluga
{
private:
    string nazwa;
    int wymagany_czas;

public:
    Usluga();
    Usluga(string n, int czas);
    string getNazwa();
    int getWymagany_czas();
    void setNazwa(string n);
    void setWymagany_czas(int czas);
};
#endif
