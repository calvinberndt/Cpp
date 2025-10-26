#include "fraction.h"

//Constructor implementations using initializer lists
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    normalize();
}
Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(const Fraction &frac) : numerator(frac.numerator), denominator(frac.denominator) {}  

Fraction::~Fraction() {}

int Fraction::getDenom() { return denominator; }
int Fraction::getNum() { return numerator; }

int Fraction::gcd(int n, int d) {
    if (d == 0)
        return n;
    return gcd(d, n % d);
}