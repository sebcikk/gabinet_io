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
    Date getTerminWizyty();
    void setTerminWizyty(Date termin_wizyty);
    void setWizyta(Usluga u);
    void zwolnijTermin();
};

#endif
