#ifndef DATE_HPP
#define DATE_HPP
#include <ostream>
#include <iomanip>
using namespace std;

struct Date
{
    int rok;
    int miesiac;
    int dzien;
    int godzina;
    int minuta;

    bool operator<(const Date &druga) const;
    bool operator>(const Date &druga) const;
    bool operator==(const Date &druga) const;
    bool operator<=(const Date &druga) const;
    bool operator>=(const Date &druga) const;
    friend ostream &operator<<(ostream &os, const Date &d);
};

#endif