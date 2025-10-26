//The header guard
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int nume;
    int denom;

public:
    Fraction();
    Fraction(int n, int d);
    Fraction(const Fraction &frac);
    ~Fraction();
    int getNum();
    int getDenom();

    void setNumero(int n);
    void setDenom(int d);

//helper functions that will be called inside the public functions
private:
    void normalize();
    int gcd(int n, int d);
};


#endif