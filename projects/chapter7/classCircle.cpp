#include <iostream>
using namespace std;

class Circle {
    private:
        double radius;
    public:
        Circle(double r); //Parameterized constructor
        Circle(); // Default constructor
        Circle(const Circle &c); // Copy constructor

        ~Circle(); // Destructor, does not take any parameters

        
    // Getter and Setter methods
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
        void setRadius(double value);
};


// Implementations of the Circle class methods

//Constructor implementations
Circle::Circle(double r) {
    radius = r;
    cout << "Parameterized constructor called." << endl;
}

Circle::Circle() : radius(0.0) { // Default radius is 1.0
    cout << "Default constructor called." << endl;
}

Circle::Circle(const Circle &c) {
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


//Application Section

int main() {

    Circle c1(10); // Parameterized constructor
    cout << "Radius: " << c1.getRadius() << endl;

    Circle c2; // Default constructor
    cout << "Radius: " << c2.getRadius() << endl;

    Circle c3(c1); // Copy constructor
    cout << "Radius: " << c3.getRadius() << endl;


    return 0;
}