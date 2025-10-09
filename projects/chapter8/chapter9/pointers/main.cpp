#include <iostream>
using namespace std;


//Pointers

int main() {
    int var = 20;   // actual variable declaration.
    char ch = 'A';

    cout << "Address of var: " << &var << endl;
    cout << "Address of ch: " << (void*)&ch << endl; //casting to void* to print char address

    //The pointer variable has it's own address in memory
    int *ptr;      // pointer variable

    // Note that data type of pointer and variable must be same
    // ptr in memory then holds the address of var
    ptr = &var;   // store address of var in ptr
    cout << "Value of var: " << var << endl;
    cout << "Value of var using pointer: " << *ptr << endl;



    return 0;
}
