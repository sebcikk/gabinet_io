#include "SystemObslugiWizyty.hpp"

bool SystemObslugiWizyty::wystawRecepte(Pacjent &pacjent, Lekarz &lekarz, Lek &lek, string dawkowanie, string uwagi)
{
    cout << "Wystawiono recepte na lek: " << lek.getNazwa() << " dla pacjenta " << pacjent.getNazwisko() << endl;
    return true;
}

bool SystemObslugiWizyty::wystawSkierowanie(Pacjent &pacjent, Lekarz &lekarz, string cel_skierowania, string uwagi)
{
    cout << "Wystawiono skierowanie na: " << cel_skierowania << endl;
    return true;
}

Kartoteka SystemObslugiWizyty::sprawdzKartoteke(Pacjent &pacjent)
{
    cout << "Sprawdzanie kartoteki pacjenta..." << endl;
    return Kartoteka();
}