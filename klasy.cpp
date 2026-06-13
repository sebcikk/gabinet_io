#include <iostream>
#include <string>

using namespace std;

// Stała określająca maksymalny rozmiar tablic relacji w systemie
const int MAX_ELEMENTOW = 100;

class Recepta;
class Skierowanie;
class Lek;
class Gabinet;
class Kartoteka;
class Wizyta;
class Usluga;

class Osoba {
	string imie;
	string nazwisko;
public:

	Osoba() {};

	Osoba(string i, string n) {
		imie = i;
		nazwisko = n;
	};

	string getImie() {
		return imie;
	}

	void setImie(string i) {
		imie = i;
	}

	string getNazwisko() {
		return nazwisko;
	}

	void setNazwisko(string n) {
		nazwisko = n;
	}


};

class Recepcjonistka : public Osoba {};

class Gabinet {
private:
	string nr_gabinetu;
	string typ_gabinetu;
public:
	string getNr_gabinetu() { return nr_gabinetu; }
	void setNr_gabinetu(string nr) { nr_gabinetu = nr; }
	string getTyp_gabinetu() { return typ_gabinetu; }
	void setTyp_gabinetu(string typ) { typ_gabinetu = typ; }
};

class Lekarz : public Osoba {
private:
	string tytul;
	string specjalizacja;
	Gabinet* gabinet;

	Skierowanie* skierowania[MAX_ELEMENTOW];
	int liczbaSkierowan;
	Recepta* recepty[MAX_ELEMENTOW];
	int liczbaRecept;
public:
	Lekarz() : gabinet(nullptr), liczbaSkierowan(0), liczbaRecept(0) {}

	string getTytul() { return tytul; }
	void setTytul(string t) { tytul = t; }
	string getSpecjalizacja() { return specjalizacja; }
	void setSpecjalizacja(string s) { specjalizacja = s; }
	void setGabinet(Gabinet* g) { gabinet = g; }
	Gabinet* getGabinet() { return gabinet; }

};

class Pacjent : public Osoba {
	int rok_urodzenia;
	string pesel;
public:
	Pacjent(Osoba(string i, string n), int r_u, string p) {
		rok_urodzenia = r_u;
		pesel = p;
	}

	string getPesel() {
		return pesel;
	}

	void setPesel(string p) {
		pesel = p;
	}

	int getRok_Urodzenia() {
		return rok_urodzenia;
	}

	void setRok_Urodzenia(int r_u) {
		rok_urodzenia = r_u;
	}

	
};



class Lek {
private:
	string nazwa;
	bool na_recepte;
	float refundacja;
public:
	Lek() : nazwa(""), na_recepte(false), refundacja(0.0f) {}
	Lek(string n, bool nr, float ref) : nazwa(n), na_recepte(nr), refundacja(ref) {}
	string getNazwa() { return nazwa; }
	bool getNa_recepte() { return na_recepte; }
	float getRefundacja() { return refundacja; }
};

class Recepta {
private:
	string dawkowanie;
	string uwagi;
	Pacjent* pacjent;
	Lekarz* lekarz;

	Lek* leki[MAX_ELEMENTOW];
	int liczbaLekow;
public:
	Recepta(Pacjent* p, Lekarz* l, string d, string u)
		: pacjent(p), lekarz(l), dawkowanie(d), uwagi(u), liczbaLekow(0) {}

	void dodajLek(Lek* lek) {
		if (liczbaLekow < MAX_ELEMENTOW) {
			leki[liczbaLekow] = lek;
			liczbaLekow++;
		}
	}
	string getDawkowanie() { return dawkowanie; }
	string getUwagi() { return uwagi; }
	int getLiczbaLekow() { return liczbaLekow; }
};

class Skierowanie {
private:
	string cel_skierowania;
	string uwagi;
	Pacjent* pacjent;
	Lekarz* lekarz;
public:
	Skierowanie(Pacjent* p, Lekarz* l, string cel, string u)
		: pacjent(p), lekarz(l), cel_skierowania(cel), uwagi(u) {}
	string getCel_skierowania() { return cel_skierowania; }
	string getUwagi() { return uwagi; }
};

class Usluga {
private:
	string nazwa;
	int wymagany_czas;
public:
	Usluga() : nazwa(""), wymagany_czas(0) {}
	Usluga(string n, int czas) : nazwa(n), wymagany_czas(czas) {}
	string getNazwa() { return nazwa; }
	int getWymagany_czas() { return wymagany_czas; }
};