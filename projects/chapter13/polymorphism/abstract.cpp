#include <iostream>
using namespace std;

//shape is a virtual function whos implementation is provided by the derived classes.
class Shape {
    protected:
        virtual bool isValid() const = 0; //pure virtual function, since it is equal to 0.
    public:
        virtual void print() const = 0;
        virtual double calculateArea()const = 0;
        virtual double calculatePerimeter() const = 0;
};

class Square : public Shape {
    private:
        double side;
    public:
        Square(double s) : side(s) {}
        bool isValid() const override {
            return side > 0;
        }
        void print() const override {
            cout << "Square with side " << side << endl;
        }
        double calculateArea() const override {
            return side * side;
        }
        double calculatePerimeter() const override {
            return 4 * side;
        }
};


class Rectangle : public Shape {
    private:
        double width;
        double height;
    public:
        Rectangle(double w, double h) : width(w), height(h) {}
        
        // Must implement all pure virtual functions:
        bool isValid() const override {
            return width > 0 && height > 0;
        }
        
        void print() const override {
            cout << "Rectangle with width " << width 
                 << " and height " << height << endl;
        }
        
        double calculateArea() const override {
            return width * height;
        }
        
        double calculatePerimeter() const override {
            return 2 * (width + height);
        }
    };

int main() {
    Shape* shapes[3];
    shapes[0] = new Square(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Square(0); // Invalid square

    for (int i = 0; i < 3; i++) {
        shapes[i]->print();
        cout << "Area: " << shapes[i]->calculateArea() << endl;
        cout << "Perimeter: " << shapes[i]->calculatePerimeter() << endl;
    }
    return 0;
}