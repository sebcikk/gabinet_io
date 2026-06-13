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
    bool wystawRecepte(Pacjent pacjent, Lekarz lekarz, Lek lek, std::string dawkowanie, std::string uwagi);
    bool wystawSkierowanie(Pacjent pacjent, Lekarz lekarz, std::string cel_skierowania, std::string uwagi);
    Kartoteka sprawdzKartoteke(Pacjent &pacjent);
};

#endif