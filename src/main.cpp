#include "Pacjent.hpp"
#include "Lekarz.hpp"
#include "SystemRezerwacjiTerminow.hpp"
#include "SystemObslugiWizyty.hpp"
#include "Lek.hpp"
#include "Usluga.hpp"
#include "WolnyTermin.hpp"
#include "Wizyta.hpp"
#include <iostream>

using namespace std;

int main()
{
	cout << "========================================" << endl;
	cout << "--- START TESTOWANIA SYSTEMU GABINETU ---" << endl;
	cout << "========================================" << endl;

	// 1. UTWORZENIE AKTÓRÓW I STRUKTUR DANYCH
	cout << "\n[TEST] Tworzenie obiektow podstawowych..." << endl;

	Pacjent pacjent1("Jan", "Kowalski", 1990, "90010112345");

	Lekarz lekarz1;
	lekarz1.setImie("Anna");
	lekarz1.setNazwisko("Nowak");
	lekarz1.setSpecjalizacja("Kardiolog");

	Usluga usluga1("Konsultacja kardiologiczna", 30);
	Lek lek1("Polocard", false, 0.0f);

	// 2. TEST MODU£U: SYSTEM REZERWACJI TERMINÓW
	cout << "\n[TEST] Modul: SystemRezerwacjiTerminow" << endl;
	SystemRezerwacjiTerminow srt;

	// Przygotowanie wolnego terminu
	WolnyTermin wolnyTermin1;
	wolnyTermin1.setTermin_wizyty({ 2026, 6, 15, 10, 0 });

	// Test dodawania wolnego terminu dla lekarza
	srt.dodajWolnyTermin(lekarz1, wolnyTermin1.getTermin_wizyty());

	// Test umawiania wizyty pacjenta
	srt.dodajWizyte(pacjent1, usluga1, wolnyTermin1);

	// Test anulowania wizyty
	Wizyta wizytaDoAnulowania;
	wizytaDoAnulowania.setUsluga(usluga1);
	srt.anulujWizyte(wizytaDoAnulowania);


	// 3. TEST MODU£U: SYSTEM OBS£UGI WIZYTY
	cout << "\n[TEST] Modul: SystemObslugiWizyty" << endl;
	SystemObslugiWizyty sow;

	// Test sprawdzenia kartoteki pacjenta
	sow.sprawdzKartoteke(pacjent1);

	// Test wystawienia recepty
	sow.wystawRecepte(pacjent1, lekarz1, lek1, "1x dziennie rano", "Przyjmowac po posilku");

	// Test wystawienia skierowania
	sow.wystawSkierowanie(pacjent1, lekarz1, "Badanie EKG", "Pilna kontrola");


	// 4. TEST DODATKOWYCH FUNKCJONALNOŒCI KLAS
	cout << "\n[TEST] Pozostale metody obiektowe" << endl;

	// Pobieranie kartoteki bezpoœrednio z obiektu pacjenta
	pacjent1.getKartoteka();

	// Przypisanie us³ugi do wolnego terminu i jego zwolnienie
	wolnyTermin1.setWizyta(usluga1);
	wolnyTermin1.zwolnijTermin();

	cout << "\n========================================" << endl;
	cout << "---   KONIEC TESTOW SYSTEM ZALICZONY ---" << endl;
	cout << "========================================" << endl;

	return 0;
}