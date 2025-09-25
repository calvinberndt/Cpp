#include <iostream>
using namespace std;

// int calculateArea(int side);
double calculateArea(double length, double width);
int calculateArea(int length, int width = -1);
double calculateArea(double radius);


int main() {

    double radius;
    int side;
    double length, width;

    cout << "Enter the radius of the circle (floating-point): ";
    cin >> radius;
    cout << "Enter the side length of the square (integer): ";
    cin >> side;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;


    cout << "Area of the square: " << calculateArea(side) << endl;
    cout << "Area of the rectangle: " << calculateArea(length, width) << endl;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    return 0;
}

int calculateArea(int side) {
    return side * side;
}

double calculateArea(double length, double width) {
    return length * width;
}

int calculateArea(int length, int width) {
    if (width == -1) {
        return length * length; // Treat as square
    }
    return length * width;
}

double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}