#include <iostream>
using namespace std;

class Quadratic {
    private:
        double a;
        double b;
        double c;
        double root1;
        double root2;
        double getDiscriminant();
        double getRoot1();
        double getRoot2();
    public:
        Quadratic();
        Quadratic(double a, double b, double c);
        ~Quadratic();
        Quadratic(const int &Quadratic);
};

Quadratic::Quadratic() : a(0), b(0), c(0) {
    double disc = getDiscriminant();
    int castDisc = static_cast<int>(disc);
    if(disc < 0){
        cout << "The equation has no roots" << endl;
    } else if (castDisc == 0) //must use castDisc for comparison to zero due to floating points
    {
        cout << "The equation has one root, (root 2 = -0 or false): " << endl;
        root1 = getRoot1();
        cout << "Root: " << root1 << endl;
         
    }
    else if ( disc > 0)
    {
        cout << "The equation has two roots: " << endl;
        root1 = getRoot1();
        root2 = getRoot2();
        cout << "Root 1: " << getRoot1() << endl;
        cout << "Root 2: " << getRoot2() << endl;
    }
}

double Quadratic::getDiscriminant(){
    double disc = (b* b - 4 * a * c);
    return disc;
}
double Quadratic::getRoot1(){
    double disc = getDiscriminant();
    return (-b + sqrt(disc));
}

double Quadratic::getRoot2(){
    double disc = getDiscriminant();
    return (-b - sqrt(disc));
}


Quadratic::Quadratic(double a, double b, double c) : a(a), b(b), c(c) {
    double disc = getDiscriminant();
    int castDisc = static_cast<int>(disc);
    if(disc < 0){
        cout << "The equation has no roots" << endl;
    } else if (castDisc == 0) //must use castDisc for comparison to zero due to floating points
    {
        cout << "The equation has one root, (root 2 = -0 or false): " << endl;
        root1 = getRoot1();
        root2 = false;
         
    }
    else if ( disc > 0)
    {
        cout << "The equation has two roots: " << endl;
        root1 = getRoot1();
        root2 = getRoot2();
        cout << "Root 1: " << getRoot1() << endl;
        cout << "Root 2: " << getRoot2() << endl;
    }
}
Quadratic::~Quadratic() {}
Quadratic::Quadratic(const int &Quadratic) {}


int main() {
    cout << "The value of our Quadratic Equation: " << endl;
    Quadratic q1(1, -10, 2); // two roots
    Quadratic q2; //default constructor should have 1 root, which is 0
    Quadratic q3(1, 2, 5); // no roots
    return 0;
}