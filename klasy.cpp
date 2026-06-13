#include <iostream>
#include <string>

using namespace std;

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

class Lek {
private:
	bool na_recepte;
	float refundacja;
public:
	bool getNa_recepte() { return na_recepte; }
	void setNa_recepte(bool nr) { na_recepte = nr; }
	float getRefundacja() { return refundacja; }
	void setRefundacja(float ref) { refundacja = ref; }
};

class Recepta {
private:
	string dawkowanie;
	string uwagi;
public:
	string getDawkowanie() { return dawkowanie; }
	void setDawkowanie(string d) { dawkowanie = d; }
	string getUwagi() { return uwagi; }
	void setUwagi(string u) { uwagi = u; }
};

class Skierowanie {
private:
	string cel_skierowania;
	string uwagi;
public:
	string getCel_skierowania() { return cel_skierowania; }
	void setCel_skierowania(string cel) { cel_skierowania = cel; }
	string getUwagi() { return uwagi; }
	void setUwagi(string u) { uwagi = u; }
};