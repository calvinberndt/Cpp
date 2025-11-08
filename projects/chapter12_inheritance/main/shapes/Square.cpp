#include "Square.h"
#include <iostream>

using namespace std;

Square::Square() {
    cout << "Square constructor called" << endl;
    side = 0;
}
Square::Square(int s) {
    cout << "Square constructor called" << endl;
    side = s;
}
int Square::getArea() {
    return side * side;
}
int Square::getPerimeter() {
    return 4 * side;
}
Square::~Square() {
    cout << "Square destructor called" << endl;
}

void Square::print() {
    cout << "Side: " << side << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}