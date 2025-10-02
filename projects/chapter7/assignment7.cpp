#include <iostream>
using namespace std;

class Car {
    private:
        char make;
        char model;
        unsigned int year;
    public:
        Car(char make, char model, unsigned int year); //Parameterized constructor
        Car(); // Default constructor
        Car(const Car &c); // Copy constructor

        ~Car(); // Destructor, does not take any parameters

        
    // Getter and Setter methods
        char getMake() const;
        char getModel() const;
        unsigned int getYear() const;
};

Car::Car(char make, char model, unsigned int year){
    cout << "Parameterized constructor called." << endl;
    this->make = make; //give access to private members
    this->model = model;
    this->year = year;
};

Car::Car() : make(' '), model(' '), year(0) { // Default make and model is empty, year is 0
    cout << "Default constructor called." << endl;
};

Car::Car(const Car &c) {
    make = c.make;
    model = c.model;
    year = c.year;
    cout << "Copy constructor called." << endl;
};

Car::~Car() {
    cout << "Destructor called for car: " << make << " " << model << " " << year << endl;
}
//Definition of getter and setter methods
char Car::getMake() const {
    return make;
}
char Car::getModel() const {
    return model;
}
unsigned int Car::getYear() const {
    return year;
}
int main() {

    Car car1('T', 'R', 2020); // Parameterized constructor
    cout << "Car 1: " << car1.getMake() << " " << car1.getModel() << " " << car1.getYear() << endl;
    Car car2; // Default constructor
    cout << "Car 2: " << car2.getMake() << " " << car2.getModel() << " " << car2.getYear() << endl;
    Car car3 = car1; // Copy constructor
    cout << "Car 3: " << car3.getMake() << " " << car3.getModel() << " " << car3.getYear() << endl;
    Car car4('F', 'M', 2025); 
    cout << "Car 4: " << car4.getMake() << " " << car4.getModel() << " " << car4.getYear() << endl;
    return 0;
}