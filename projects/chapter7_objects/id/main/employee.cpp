#include <iostream>
using namespace std;
#include "../headers/employee.h"



int main() {
    
    //impliment different employees
    Employee e1("Alice");
    Employee e2("Bob");
    // Employee e3 = e1; // Copy constructor
    Employee e4; // Default constructor
    cout << "About to destruct employees." << endl;

    //Deconstruct employees
    e2.~Employee();
    Employee e5("Charlie");

    return 0;
}
