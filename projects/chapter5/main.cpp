#include <iostream>
using namespace std;
#include <vector>
#include <cmath>


// If the function is defined after main, it needs a prototype before main
// If the function is defined before main, no prototype is needed
// Function prototype: return type, name, parameter list (type and name)
int addVector(const vector<int>& numbers = {100, 200, 300}); // Function prototype with const reference parameter and default argument
void multiplyVector(vector<int> numbers, const int& factor = 1); // Function prototype with default argument

int main() {

    int c, inp = 15;
    
    
    vector<int> myNumbers = {1, 2, 3, 4, 5};


    cout << "Address of c" << &c << endl; // Print address of c
    cout << "Address of inp: " << &inp << endl; // Print address of inp
    c = addVector(); // Call the function without arguments, uses default
    cout << "Output of the function...: " << c << endl;


    cout << "The sum is: " << addVector(myNumbers) << endl;

    cout << "The multiplied values are: ";
    multiplyVector(myNumbers); // Call the function with an argument

    return 0;
}


//Create a function that takes an array of integers as its parameter
int addVector(const vector<int>& numbers) { //& numbers is passed by reference to avoid copying the entire array
    int sum = 0;
    cout << "Address of numbers in function: " << &numbers << endl; // Print address of numbers
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}

void multiplyVector(vector<int>&numbers, const int& factor) {
    for (int num : numbers) {
        num *= factor; // Modify the original array
        cout << num << " "; // Print modified number
    }
}
