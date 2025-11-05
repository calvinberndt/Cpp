#include "fraction.h"
#include <iostream>
using namespace std;


int main() {
    Fraction frac1(3, 9);
    cout << "Fraction: " << frac1.getNum() << "/" << frac1.getDenom() << endl;
    return 0;
}