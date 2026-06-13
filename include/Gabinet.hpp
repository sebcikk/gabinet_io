#ifndef GABINET_HPP
#define GABINET_HPP

#include <iostream>

using namespace std;

class Gabinet
{
private:
    string nr_gabinetu;
    string typ_gabinetu;

public:
    string getNr_gabinetu();
    void setNr_gabinetu(string nr);
    string getTyp_gabinetu();
    void setTyp_gabinetu(string typ);
};

#endif