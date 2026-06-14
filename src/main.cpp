#include "Pacjent.hpp"
#include "Lekarz.hpp"
#include "SystemRezerwacjiTerminow.hpp"
#include "SystemObslugiWizyty.hpp"
#include "Lek.hpp"
#include "Usluga.hpp"
#include "WolnyTermin.hpp"
#include "Wizyta.hpp"
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "---START SYSTEMU---\n";

    SystemRezerwacjiTerminow systemRezerwacji;
    SystemObslugiWizyty systemObslugi;

    Pacjent p1("Jan", "Kowalski", 1990, "12345678901");
    Pacjent p2("Anna", "Nowak", 1985, "98765432109");

    Lekarz l1;
    l1.setImie("Adam");
    l1.setNazwisko("Wisniewski");
    l1.setTytul("dr");
    l1.setSpecjalizacja("Kardiolog");

    Lekarz l2;
    l2.setImie("Maria");
    l2.setNazwisko("Zielinska");
    l2.setTytul("dr");
    l2.setSpecjalizacja("Dermatolog");

    Usluga konsultacja("Konsultacja", 30);
    WolnyTermin wolnyTermin;
    wolnyTermin.setTerminWizyty({2026, 6, 20, 10, 0});

    systemRezerwacji.dodajWolnyTermin(l1, {2026, 6, 20, 10, 0});
    systemRezerwacji.dodajWolnyTermin(l2, {2026, 6, 21, 9, 0});

    int wybor;

    do {
        cout << "\n===== SYSTEM OBSLUGI GABINETU =====\n";
        cout << "1. Rejestracja wizyty\n";
        cout << "2. Odwolanie wizyty\n";
        cout << "3. Podglad kartoteki\n";
        cout << "4. Wystawienie recepty\n";
        cout << "5. Wystawienie skierowania\n";
        cout << "6. Dodanie wolnego terminu\n";
        cout << "0. Wyjscie\n";
        cout << "Wybor: ";

        cin >> wybor;

        switch (wybor) {

        case 1:
        {
            systemRezerwacji.dodajWizyte(p1, konsultacja, wolnyTermin);
            break;
        }

        case 2:
        {
            Wizyta wizyta;
            wizyta.setUsluga(konsultacja);
            systemRezerwacji.anulujWizyte(wizyta);
            break;
        }

        case 3:
        {
            systemObslugi.sprawdzKartoteke(p1);
            break;
        }

        case 4:
        {
            string nazwa_leku;
            string dawkowanie;
            string uwagi;
            float refundacja;

            cout << "Nazwa leku: ";
            cin >> nazwa_leku;

            cout << "Refundacja: ";
            cin >> refundacja;

            cin.ignore();

            cout << "Dawkowanie: ";
            getline(cin, dawkowanie);

            cout << "Uwagi: ";
            getline(cin, uwagi);

            Lek lek(nazwa_leku, true, refundacja);

            systemObslugi.wystawRecepte(
                p1,
                l1,
                lek,
                dawkowanie,
                uwagi
            );

            break;
        }

        case 5:
        {
            string cel;
            string uwagi;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Cel skierowania: ";
            getline(cin, cel);

            cout << "Uwagi: ";
            getline(cin, uwagi);

            systemObslugi.wystawSkierowanie(
                p1,
                l1,
                cel,
                uwagi
            );

            break;
        }

        case 6:
        {
            Date termin;

            cout << "Podaj rok miesiac dzien godzine minute: ";
            cin >> termin.rok >> termin.miesiac >> termin.dzien >> termin.godzina >> termin.minuta;

            systemRezerwacji.dodajWolnyTermin(l1, termin);

            break;
        }

        case 0:
            cout << "Koniec programu.\n";
            break;

        default:
            cout << "Niepoprawna opcja.\n";
        }

    } while (wybor != 0);
}
