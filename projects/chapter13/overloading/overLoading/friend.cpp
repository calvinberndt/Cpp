//operation overloading using friend functions using class Suqare and class Shapes 

#include <iostream>
using namespace std;

class Square; //forward declaration

class Shape {
    private:
        double width, height;
    public:
        double findArea(const Square&); //friend function declaration
};

//Create a rectangle class leveraging the friend function concept
class Rectangle {
    private:
        double width, height;
    public:
        friend double findArea(const Rectangle&);
        Rectangle(double w = 0, double h = 0) : width (w), height (h) {}; //constructor
        Rectangle() {
            width = 0;
            height = 0;
        }
};

//Stand alone function for Rectangle area calculation
double findArea(const Rectangle& rect) {
    return rect.width * rect.height;
}
class Square {
    private:
        double side;
    public:
        Square(double s = 0) : side(s) {}; //constructor

        int getside() const {return side;} //getter for side
        friend double Shape::findArea(const Square& sq); //friend function definition
        friend void updateSide(Square& sq, double newSide); //friend function to update side
        friend class FriendClass; //friend class declaration
};

//stand alone functions

void updateSide(Square& s, double dv) {
    s.side = dv;
}

double Shape::findArea(const Square& s) {
    return s.side * s.side;
}

class FriendClass {
    public: 
        double getside(const Square&) const;
        double getCube(const Square&) const;
};
double FriendClass::getside (const Square& s) const {
    return s.side;
}
double FriendClass::getCube(const Square& s) const {
    return s.side * s.side * s.side;
} 

int main (){
    // Square sq(10);
    // cout << sq.getside() << endl;

    // Shape sp;
    // cout << sp.findArea(sq) << endl;

    // updateSide(sq, 15);
    // cout << sq.getside() << endl;

    // FriendClass fc;
    // cout << fc.getCube(sq) << endl;
    // cout << fc.getside(sq) << endl;

    Rectangle rect(5, 10);
    cout << findArea(rect) << endl;
    
    
    return 0;
}
