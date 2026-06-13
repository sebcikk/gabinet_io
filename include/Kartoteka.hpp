#ifndef KARTOTEKA_HPP
#define KARTOTEKA_HPP

#include "Wizyta.hpp"
#include "Skierowanie.hpp"
#include "Recepta.hpp"
#include <vector>

using namespace std;

class Kartoteka
{
private:
    vector<Wizyta> historia_wizyt;
    vector<Skierowanie> historia_skierowan;
    vector<Recepta> historia_recept;

public:
    Kartoteka() = default;
    vector<Wizyta> getHistoria_wizyt();
    void setHistoria_wizyt(vector<Wizyta> hw);
    vector<Skierowanie> getHistoria_skierowan();
    void setHistoria_skierowan(vector<Skierowanie> hs);
    vector<Recepta> getHistoria_recept();
    void setHistoria_recept(vector<Recepta> hr);
};

#endif