#include <iostream>
#include "../headers/circle.h"

using namespace std;

//Constructor implementations
Circle::Circle(double r) {
    radius = r;
    cout << "Parameterized constructor called." << endl;
}

Circle::Circle() : radius(0.0) { // Default radius is 1.0
    cout << "Default constructor called." << endl;
}

Circle::Circle(const Circle &c) {
    cout << &c << " is being copied." << endl;
    radius = c.radius;
    cout << "Copy constructor called." << endl;
}

// Destructor implementation
Circle::~Circle() {
    cout << "Destructor called for circle with radius: " << radius << endl;
}

//Definition of getter and setter methods
double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return 3.14159 * radius * radius;
}

double Circle::getPerimeter() const {
    return 2 * 3.14159 * radius;
}

void Circle::setRadius(double value) {
    radius = value;
}
