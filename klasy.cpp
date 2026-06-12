#include <iostream>
#include <string>

using namespace std;

class Recepta;
class Skierowanie;

class Osoba {
	string imie;
	string nazwisko;
public:
	string getImie() {
		return imie;
	}

	void setImie(string i) {
		imie = i;
	}

	string getNazwisko() {
		return nazwisko;
	}

	void setImie(string n) {
		nazwisko = n;
	}
};

class Recepcjonistka : public Osoba {};

class Lekarz : public Osoba {
	string tytul;
	string specjalizacja;
public:
	string getTytul() {
		return tytul;
	}

	void setTytul(string t) {
		tytul = t;
	}

	string getSpecjalizacja() {
		return specjalizacja;
	}

	void setSpecjalizacja(string s) {
		specjalizacja = s;
	}
};
class dfd fdfdff;

class Pacjent : public Osoba {
	int rok_urodzenia;
	string pesel;
public:
	string getPesel() {
		return pesel;
	}

	void setPesel(string p) {
		pesel = p;
	}

	int getRok_Urodzenia() {
		return rok_urodzenia;
	}

	void setRok_Urodzenia(int ru) {
		rok_urodzenia = ru;
	}
};