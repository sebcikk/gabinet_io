#ifndef WIZYTA_HPP
#define WIZYTA_HPP

#include "Usluga.hpp"

class Wizyta
{
private:
    Usluga usluga;

public:
    Wizyta() = default;
    void setUsluga(Usluga u);
};

#endif