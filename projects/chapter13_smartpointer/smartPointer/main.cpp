#include <iostream>
using namespace std;

class Fraction; //Forward declartion
class SmartPtr {
    private:
        Fraction* ptr;
    public: 
        SmartPtr (Fraction* ptr);
        ~SmartPtr();
        Fraction& operator* () const;
        Fraction* operator-> () const;
};

//Constructor
SmartPtr::SmartPtr(Fraction* ptr) : ptr(ptr) {}

//Destructor
SmartPtr::~SmartPtr() {
    delete ptr;
}
//Overloading
Fraction& SmartPtr::operator* () const {
    return *ptr;
}
Fraction* SmartPtr::operator-> () const {
    return ptr;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
