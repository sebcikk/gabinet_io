#include "Skierowanie.hpp"

Skierowanie::Skierowanie(Pacjent *p, Lekarz *l, string cel, string u)
    : pacjent(p), lekarz(l), cel_skierowania(cel), uwagi(u) {}
string Skierowanie::getCel_skierowania() { return cel_skierowania; }
string Skierowanie::getUwagi() { return uwagi; }