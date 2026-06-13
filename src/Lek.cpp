#include "Lek.hpp"

Lek::Lek() : nazwa(""), na_recepte(false), refundacja(0.0f) {}
Lek::Lek(string n, bool nr, float ref) : nazwa(n), na_recepte(nr), refundacja(ref) {}
string Lek::getNazwa() { return nazwa; }
bool Lek::getNa_recepte() { return na_recepte; }
float Lek::getRefundacja() { return refundacja; }