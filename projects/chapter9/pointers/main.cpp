#include <iostream>
using namespace std;

int getSum(const int*p, int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += p[i];
    }
    return sum;
}

//Pointers

int main() {

    //Fundamental Differences between reference and pointers:
    //When declare a reference variable, it must be initialized, because it is an alias for another variable.
    //Once a reference variable is initialized with a variable, it cannot be changed to refer to another variable.

    //A reference variable is not an object, so it does not have its own memory address.
    //A pointer is an object, so it has its own memory address.
    //A pointer can be reassigned to point to another variable.




    int a = 10;
    int& rA = a; //reference variable

    cout << "Value of a: " << a << endl;
    cout << "Value of using &a: " << &a << endl;

    cout << "Value of rA: " << rA << endl;
    cout << "Value of using &rA: " << &rA << endl;


    //Using pointers
    int* pA = &a; //pointer variable

    cout << "Value of pA: " << pA << endl;
    cout << "Value of using *pA: " << *pA << endl;
    cout << "Value of using &pA: " << &pA << endl;


    return 0;
}
