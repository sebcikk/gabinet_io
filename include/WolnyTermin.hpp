#ifndef WOLNYTERMIN_HPP
#define WOLNYTERMIN_HPP

#include "Usluga.hpp"
using namespace std;

class WolnyTermin
{
private:
    string termin_wizyty; // Reprezentacja typu Date z UML

public:
    WolnyTermin() = default;
    string getTermin_wizyty();
    void setTermin_wizyty(string date);
    void setWizyta(Usluga u);
    void zwolnijTermin();
};

#endif