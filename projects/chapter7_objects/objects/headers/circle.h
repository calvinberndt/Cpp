#ifndef CIRCLE_H
#define CIRCLE_H

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

#endif // CIRCLE_H
