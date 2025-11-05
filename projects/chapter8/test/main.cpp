#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
int arr1[MAX_SIZE]; 

void passByReference(int &ref) {
    cout << "Inside passByReference function." << endl;
    cout << "Value of ref: " << ref << endl;
    cout << "Address of ref: " << &ref << endl;
}

void passbyValue(int val) {
    cout << "Inside passByValue function." << endl;
    cout << "Value of val: " << val << endl;
    cout << "Address of val: " << &val << endl;
}

int& larger(int& x, int& y)
{
    if (x > y){
        return x;
    }
    return y;
}


int main() {

    for (int i = 0; i < MAX_SIZE; ++i) {
        cout << "Array element " << i << ": " << arr1[i] << endl;
    }

    int arr2[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; ++i) {
        cout << "Array element " << i << ": " << arr2[i] << endl;
    }

    int number1 = 42;
    int number2 = 100;
    int &ref1 = number1;
    cout << "Value of number1: " << number1 << endl;
    cout << "Value of ref1: " << ref1 << endl;
    cout << "Address of number1: " << &number1 << endl;
    cout << "Address of ref1: " << &ref1 << endl;
    if(&number1 == &ref1) {
        cout << "ref1 is a reference to number1." << endl;
    } else {
        cout << "ref1 is not a reference to number1." << endl;
    }

    // Assigning a new value to ref1
    ref1 = number2;
    cout << "Value of number1 after assignment: " << number1 << endl;
    cout << "Value of number2: " << number2 << endl;
    cout << "Value of ref1 after assignment: " << ref1 << endl;

    passByReference(ref1);
    passbyValue(number1);


    int x = 10;
    int y = 20;
    int z = larger(x, y);
    cout << "Location of y: " << &y << endl;
    cout << "Location of z: " << &z << endl;
    cout << z;



    return 0;
}