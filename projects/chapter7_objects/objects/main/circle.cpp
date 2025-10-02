#include <iostream>

#include "../headers/circle.h"

using namespace std;

int main() {

    Circle c1(10); // Parameterized constructor
    cout << "Radius: " << c1.getRadius() << endl;

    Circle c2; // Default constructor
    cout << "Radius: " << c2.getRadius() << endl;

    Circle c3(c1); // Copy constructor
    cout << "Radius: " << c3.getRadius() << endl;

    return 0;
}
