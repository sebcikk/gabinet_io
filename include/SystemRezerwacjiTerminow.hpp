#ifndef SYSTEMREZERWACJITERMINOW_HPP
#define SYSTEMREZERWACJITERMINOW_HPP

#include "Pacjent.hpp"
#include "Usluga.hpp"
#include "WolnyTermin.hpp"
#include "Wizyta.hpp"
#include "Lekarz.hpp"
#include <string>

using namespace std;

class SystemRezerwacjiTerminow
{
public:
    bool dodajWizyte(Pacjent &pacjent, Usluga usluga, WolnyTermin wolny_termin);
    bool anulujWizyte(Wizyta wizyta);
    bool dodajWolnyTermin(Lekarz &lekarz, string date);
};

#endif