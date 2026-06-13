#ifndef DATE_HPP
#define DATE_HPP

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
};

#endif