// Define a class named Triangle as follows:
// a. Data members are firstSide, secondSide, and thirdSide.
// b. Use a constructor that asserts that the sum of any two sides to be greater than the third one.
// c. Accessor member functions are get Sides, get Perimeter, and getArea. To find the perimeter and area of a triangle, use the following.
// perimeter = a + b + c
// area = sqrt (p) # (p-a) * (p - b) * (p - c)) //p= perimeter / 2
// d. Define a constructor for the class


#include <iostream>
#include <cassert>
using namespace std;

class Triangle{
    private:
        double firstSide;
        double secondSide;
        double thirdSide;
    public:
        Triangle(double a, double b, double c) : firstSide(a), secondSide(b), thirdSide(c) {
            assert(a > 0 && b > 0 && c > 0);
            assert(a + b > c && a + c > b && b + c > a);
        }
        Triangle();
        ~Triangle();
        void getSides();
        double getPerimeter();
        double getArea();
};

void Triangle::getSides(){
    cout << "firstSide: " << firstSide << ". Second Side: " << secondSide << ". Third Side: " << thirdSide << endl;
}
double Triangle::getPerimeter(){
    return firstSide + secondSide + thirdSide;
}

double Triangle::getArea(){
    double p = getPerimeter() / 2;
    return sqrt(p * (p - firstSide) * (p - secondSide) * (p - thirdSide));
}


int main() {
    Triangle t(3.0, 4.0, 5.0);
    t.getSides();
    cout << "Perimeter: " << t.getPerimeter() << endl;
    cout << "Area: " << t.getArea() << endl;
    return 0;
}