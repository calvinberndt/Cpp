#include "Cube.h"
#include <iostream>

using namespace std;

Cube::Cube() : Square() {
    cout << "Cube constructor called" << endl;
}
Cube::Cube(int s) : Square(s) {
    cout << "Cube constructor called" << endl;
}
Cube::~Cube() {
    cout << "Cube destructor called" << endl;
}

int Cube::getVolume() {
    int area = Square::getArea();
    return area * Square::side;
}
int Cube::getSurfaceArea() {
    int area = Square::getArea();
    return 6 * Square::side;
}

void Cube::print() {
    cout << "Cube side: " << Square::side << endl;
    cout << "Cube volume: " << getVolume() << endl;
    cout << "Cube surface area: " << getSurfaceArea() << endl;
}