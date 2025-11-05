#include "fraction.h"
#include <cstdlib>
#include <stdexcept>


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
    n = abs(n);
    d = abs(d);
    while (d != 0) {
        int t = n % d;
        n = d;
        d = t;
    }
    return n;
}

void Fraction::normalize() {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero.");
    }
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}