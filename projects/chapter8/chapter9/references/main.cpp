#include <iostream>
using namespace std;

    //Create a function called fun

void fun(int& a) {
    a += 10;
    cout << "Inside fun, value of a: " << a << endl;
};

//Create a function that returns a reference
int& getRef(int& b) {
    return b;
}

int main() {


    //References are used to create an alias for another variable.
    int x = 10;
    int& ref = x; //ref is a reference to x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ref: " << ref << endl;
    cout << "Address of ref: " << &ref << endl;


    //Modifying the reference modifies the original variable
    ref = 20;
    cout << "After modifying ref:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of ref: " << ref << endl;
    cout << "Address of ref: " << &ref << endl;


    //Try to break the binding. This is not allowed in C++.
    int y = 30;
    int& ref2 = x; //Error: cannot rebind reference

    ref2 = y; //we can do this because we are not using the reference binding, but rather just changing the value.


    fun(x);

    cout << "After calling fun, value of x: " << x << endl;

    int& ref3 = getRef(x);
    ref3 = 40;
    cout << "After calling getRef, value of x: " << x << endl;



    return 0;
}
