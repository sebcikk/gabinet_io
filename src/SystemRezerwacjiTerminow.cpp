#include "SystemRezerwacjiTerminow.hpp"

bool SystemRezerwacjiTerminow::dodajWizyte(Pacjent &pacjent, Usluga usluga, WolnyTermin wolny_termin)
{
    Date d = wolny_termin.getTermin_wizyty();
    cout << "Rezerwacja terminu: " << d.rok << "-" << d.miesiac << "-" << d.dzien
         << " dla " << pacjent.getImie() << endl;
    return true;
}

bool SystemRezerwacjiTerminow::anulujWizyte(Wizyta wizyta)
{
    cout << "Anulowanie wizyty." << endl;
    return true;
}

bool SystemRezerwacjiTerminow::dodajWolnyTermin(Lekarz &lekarz, Date date)
{
    cout << "Dodano nowy wolny termin: "
         << date << " u lekarza: " << lekarz.getNazwisko() << endl;
    return true;
}
