#ifndef KARTOTEKA_HPP
#define KARTOTEKA_HPP

#include "Wizyta.hpp"
#include "Skierowanie.hpp"
#include "Recepta.hpp"
#include <vector>

class Kartoteka
{
private:
    std::vector<Wizyta> historia_wizyt;
    std::vector<Skierowanie> historia_skierowan;
    std::vector<Recepta> historia_recept;

public:
    Kartoteka() = default;
    std::vector<Wizyta> getHistoria_wizyt();
    void setHistoria_wizyt(std::vector<Wizyta> hw);
    std::vector<Skierowanie> getHistoria_skierowan();
    void setHistoria_skierowan(std::vector<Skierowanie> hs);
    std::vector<Recepta> getHistoria_recept();
    void setHistoria_recept(std::vector<Recepta> hr);
};

#endif