#include "SystemRezerwacjiTerminow.hpp"

bool SystemRezerwacjiTerminow::dodajWizyte(Pacjent &pacjent, Usluga usluga, WolnyTermin wolny_termin)
{
    cout << "Rezerwacja terminu: " << wolny_termin.getTermin_wizyty() << " dla " << pacjent.getImie() << endl;
    return true;
}

bool SystemRezerwacjiTerminow::anulujWizyte(Wizyta wizyta)
{
    cout << "Anulowanie wizyty." << endl;
    return true;
}

bool SystemRezerwacjiTerminow::dodajWolnyTermin(Lekarz &lekarz, string date)
{
    cout << "Dodano nowy wolny termin: " << date << " u lekarza: " << lekarz.getNazwisko() << std::endl;
    return true;
}