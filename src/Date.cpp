#include "Date.hpp"

bool Date::operator<(const Date &druga) const
{
    if (rok != druga.rok)
        return rok < druga.rok;
    if (miesiac != druga.miesiac)
        return miesiac < druga.miesiac;
    if (dzien != druga.dzien)
        return dzien < druga.dzien;
    if (godzina != druga.godzina)
        return godzina < druga.godzina;
    return minuta < druga.minuta;
}

bool Date::operator>(const Date &druga) const
{
    return druga < *this;
}

bool Date::operator==(const Date &druga) const
{
    return rok == druga.rok && miesiac == druga.miesiac &&
           dzien == druga.dzien && godzina == druga.godzina && minuta == druga.minuta;
}

bool Date::operator<=(const Date &druga) const
{
    return !(*this > druga);
}

bool Date::operator>=(const Date &druga) const
{
    return !(*this < druga);
}

ostream &operator<<(ostream &os, const Date &d)
{
    os << d.rok << "-"
       << setw(2) << setfill('0') << d.miesiac << "-"
       << setw(2) << setfill('0') << d.dzien << " "
       << setw(2) << setfill('0') << d.godzina << ":"
       << setw(2) << setfill('0') << d.minuta;
    return os;
}