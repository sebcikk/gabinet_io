#include "Pacjent.hpp"
#include "Lekarz.hpp"
#include "SystemRezerwacjiTerminow.hpp"
#include <iostream>

using namespace std;

int main()
{
	cout << "---START SYSTEMU---" << endl;

	Pacjent p1("Jan", "Kowalski", 1990, "90010112345");
	Lekarz l1;
	l1.setNazwisko("Nowak");
	l1.setSpecjalizacja("Kardiolog");

	SystemRezerwacjiTerminow srt;
	srt.dodajWolnyTermin(l1, {2026, 6, 15, 10, 0});
	return 0;
}