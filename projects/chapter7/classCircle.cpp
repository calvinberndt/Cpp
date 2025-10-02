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

class Rectangle {
    private:
    // Static memebers are shared among all objects of the class
    // This static memeber is not constructed for each object, because it is shared.
        static const string shapename;
        double length;
        double width;
    public:
        Rectangle(double l, double w); //Parameterized constructor
        Rectangle(); // Default constructor
        Rectangle(const Rectangle &r); // Copy constructor

        ~Rectangle(); // Destructor, does not take any parameters

        
    // Getter and Setter methods
        double getLength() const;
        double getWidth() const;
        double getArea() const;
        double getPerimeter() const;
        void setLength(double value);
        void setWidth(double value);

        static string getShapeName();
};


//Initialize the static member outside the class
const string Rectangle::shapename = "Rectangle";

// Definition of the static method
string Rectangle::getShapeName() {
    return shapename;
}


// Implementations of the Rectangle class methods
Rectangle::Rectangle(double l, double w) : length (l), width(w) { //Parameterized constructor
// Set parameters that the length and width has to be greater than or equal to 0
//This is callled call invariant
    if (length < 0) {
        length = 0;
        cout << "Length cannot be negative. Setting length to 0." << endl;
    }
    if (width < 0) {
        width = 0;
        cout << "Width cannot be negative. Setting width to 0." << endl;
    }
    cout << "Parameterized constructor called." << endl;
}
Rectangle::Rectangle() : length(1.0), width(1.0) { // Default length and width is 1.0
    cout << "Default constructor called." << endl;
}
Rectangle::Rectangle(const Rectangle &r) {
    length = r.length;
    width = r.width;
    cout << "Copy constructor called." << endl;
}
Rectangle::~Rectangle() {
    cout << "Destructor called for rectangle with length: " << length << " and width: " << width << endl;
}
double Rectangle::getLength() const {
    return length;
}
double Rectangle::getWidth() const {
    return width;
}
double Rectangle::getArea() const {
    return length * width;
}
double Rectangle::getPerimeter() const {
    return 2 * (length + width);
}
void Rectangle::setLength(double value) {
    length = value;
}
void Rectangle::setWidth(double value) {
    width = value;
}

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


//Application Section

int main() {

    Circle c1(10); // Parameterized constructor
    cout << "Radius: " << c1.getRadius() << endl;

    Circle c2; // Default constructor
    cout << "Radius: " << c2.getRadius() << endl;

    Circle c3(c1); // Copy constructor
    cout << "Radius: " << c3.getRadius() << endl;

    Rectangle r1(5, 10); // Parameterized constructor
    cout << "Length: " << r1.getLength() << ", Width: " << r1.getWidth() << endl;

    c1.setRadius(15);
    cout << "Updated Radius: " << c1.getRadius() << endl;

    cout << "Shape Name: " << Rectangle::getShapeName() << endl; // Static method call through the class
    //or another way to get the shape name:
    cout << "Shape Name: " << r1.getShapeName() << endl; // Static method call through an object

    return 0;
}