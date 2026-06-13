#ifndef LEK_HPP
#define LEK_HPP

#include <iostream>

using namespace std;

class Lek
{
private:
    string nazwa;
    bool na_recepte;
    float refundacja;

public:
    Lek();
    Lek(string n, bool nr, float ref);
    string getNazwa();
    bool getNa_recepte();
    float getRefundacja();
};

#endif