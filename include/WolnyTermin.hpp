#ifndef WOLNYTERMIN_HPP
#define WOLNYTERMIN_HPP

#include "Usluga.hpp"
#include "Date.hpp"

using namespace std;

class WolnyTermin
{
private:
    Date termin_wizyty;

public:
    WolnyTermin() = default;
    Date getTermin_wizyty();
    void setTermin_wizyty(Date date);
    void setWizyta(Usluga u);
    void zwolnijTermin();
};

#endif