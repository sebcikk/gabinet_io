#include "WolnyTermin.hpp"

Date WolnyTermin::getTermin_wizyty() { return termin_wizyty; }
void WolnyTermin::setTermin_wizyty(Date date) { termin_wizyty = date; }
void WolnyTermin::setWizyta(Usluga u)
{
    // TODO
}
void WolnyTermin::zwolnijTermin()
{
    termin_wizyty = {0, 0, 0, 0, 0}; // Wyzerowanie struktury Date
}