#ifndef SYSTEMOBSLUGIWIZYTY_HPP
#define SYSTEMOBSLUGIWIZYTY_HPP

#include "Pacjent.hpp"
#include "Lekarz.hpp"
#include "Lek.hpp"
#include "Kartoteka.hpp"
#include <string>

class SystemObslugiWizyty
{
public:
    bool wystawRecepte(Pacjent &pacjent, Lekarz &lekarz, Lek &lek, string dawkowanie, string uwagi);
    bool wystawSkierowanie(Pacjent &pacjent, Lekarz &lekarz, string cel_skierowania, string uwagi);
    Kartoteka sprawdzKartoteke(Pacjent &pacjent);
};

#endif