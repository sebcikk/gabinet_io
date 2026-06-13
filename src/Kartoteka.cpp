#include "Kartoteka.hpp"

vector<Wizyta> Kartoteka::getHistoria_wizyt() { return historia_wizyt; }
void Kartoteka::setHistoria_wizyt(vector<Wizyta> hw) { historia_wizyt = hw; }

vector<Skierowanie> Kartoteka::getHistoria_skierowan() { return historia_skierowan; }
void Kartoteka::setHistoria_skierowan(vector<Skierowanie> hs) { historia_skierowan = hs; }

vector<Recepta> Kartoteka::getHistoria_recept() { return historia_recept; }
void Kartoteka::setHistoria_recept(vector<Recepta> hr) { historia_recept = hr; }