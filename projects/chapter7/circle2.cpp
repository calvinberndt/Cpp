#include <iostream>
using namespace std;

class Circle
{
    

    private:
        double radius;
    
    public:
        double getRadius () const;
        double getArea () const;
        double getPerimeter() const;
        void setRadius (double value);

        //constructors

        Circle (double r);
        Circle ();
        Circle(const Circle &c);
};


int main(){

    Circle circle1;

    return 0;
}


double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return (3.14 * (radius * radius));
}

double Circle::getPerimeter() const {
    return (2 * 3.14 * radius);
}

void Circle::setRadius(double value){
    this-> radius = value;
}

Circle::Circle(double r){
    radius = r;
}

Circle::Circle(){
    radius = 10;
}

//Initializer lists

Circle::Circle(double r) : radius(r) {}
Circle::Circle() : radius(10) {}
Circle::Circle(const Circle &c) : radius(c.radius) {}