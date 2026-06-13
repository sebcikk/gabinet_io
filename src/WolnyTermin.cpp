#include "WolnyTermin.hpp"

Date WolnyTermin::getTerminWizyty() { return termin_wizyty; }
void WolnyTermin::setTerminWizyty(Date termin) { termin_wizyty = termin; }
void WolnyTermin::setWizyta(Usluga u)
{
    // TODO
}
void WolnyTermin::zwolnijTermin()
{
    termin_wizyty = {0, 0, 0, 0, 0}; // Wyzerowanie struktury Date
}
