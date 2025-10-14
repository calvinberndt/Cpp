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




    cout << "Fundamental Differences between reference and pointers:" << endl;
    cout << "------------------------" << endl;
    //Using references

    int a = 10;
    int& rA = a; //reference variable

    cout << "Value of a: " << a << endl;
    cout << "Value of using &a: " << &a << endl;

    cout << "Value of rA: " << rA << endl;
    cout << "Value of using &rA: " << &rA << endl;

    cout << "The usage of Pointers:" << endl;
    cout << "------------------------" << endl;
    //Using pointers
    int* pA = &a; //pointer variable

    cout << "Value of pA: " << pA << endl; //address of variable a
    cout << "Value of using *pA: " << *pA << endl; //dereferencing pointer to get value
    cout << "Value of using &pA: " << &pA << endl; //address of pointer variable



    //The useage of CONSTANT with Pointers:
    cout << "------------------------" << endl;
    cout << "The useage of CONSTANT with Pointers:" << endl;
    int b = 20;
    const int* pB = &b; //pointer to a constant integer
    //This means that the value being pointed to by pB cannot be changed through pB
    //However, pB can be reassigned to point to another variable
    cout << "Value of using *pB: " << *pB << endl;
    // *pB = 30; //Error: cannot change value of a constant through pointer
    int c = 30;
    pB = &c; //Valid: pointer can be reassigned to point to another variable
    cout << "Value of using *pB after reassignment: " << *pB << endl;


    //vs Constant pointer
    cout << "------------------------" << endl;
    cout << "The useage of CONSTANT POINTER:" << endl;
    int d = 40;
    int* const pC = &d; //constant pointer to an integer
    //This treats pC as a reference to the variable d
    //This means that pC cannot be reassigned to point to another variable
    cout << "Value of using *pC: " << *pC << endl;
    *pC = 50; //Valid: value being pointed to can be changed
    cout << "Value of using *pC after changing value: " << *pC << endl;
    // int e = 60;
    // pC = &e; //Error: cannot reassign a constant pointer
    cout << "Value of d after changing value through pC: " << d << endl;
    cout << "Value of using &pC: " << &pC << endl; //address of constant pointer variable
    cout << "Value of using &d: " << &d << endl; //address of variable d
    return 0;

}
