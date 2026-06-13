#include "SystemRezerwacjiTerminow.hpp"

bool SystemRezerwacjiTerminow::dodajWizyte(Pacjent &pacjent, Usluga usluga, WolnyTermin wolny_termin)
{
    Date d = wolny_termin.getTermin_wizyty();
    std::cout << "Rezerwacja terminu: " << d.rok << "-" << d.miesiac << "-" << d.dzien
              << " dla " << pacjent.getImie() << std::endl;
    return true;
}

bool SystemRezerwacjiTerminow::anulujWizyte(Wizyta wizyta)
{
    std::cout << "Anulowanie wizyty." << std::endl;
    return true;
}

bool SystemRezerwacjiTerminow::dodajWolnyTermin(Lekarz &lekarz, Date date)
{
    std::cout << "Dodano nowy wolny termin: "
              << date << " u lekarza: " << lekarz.getNazwisko() << std::endl;
    return true;
}
