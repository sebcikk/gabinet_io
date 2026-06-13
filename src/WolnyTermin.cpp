#include "WolnyTermin.hpp"

string WolnyTermin::getTermin_wizyty() { return termin_wizyty; }
void WolnyTermin::setTermin_wizyty(string date) { termin_wizyty = date; }
void WolnyTermin::setWizyta(Usluga u)
{
    // TODO
}
void WolnyTermin::zwolnijTermin() { termin_wizyty = ""; }