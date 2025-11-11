#include <iostream>
using namespace std;

class Base {
    public:
    virtual void print() const {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
    public:
    void print() const {
        cout << "Derived" << endl;
    }
};

int main() {
    Base b;
    Derived d;
    b.print();
    d.print();



    //another way to call the print method, ensuring which methid will be called

    Base* ptrB;
    ptrB = new Base();
    ptrB->print();
    delete ptrB;

    ptrB = new Derived();
    ptrB->print();
    delete ptrB;


    Derived* ptrD;
    ptrD = new Derived();
    ptrD->print();
    delete ptrD;


    return 0;
}
