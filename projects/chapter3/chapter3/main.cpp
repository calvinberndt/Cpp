/*****************************************************************
* A program to test overflow and underflow in unsigned integers *
*****************************************************************/
#include <iostream>
#include <limits>
using namespace std;


int main ( )
    {
        // Create two unsigned integer of maximum and minimum values
        unsigned int num1 = numeric_limits <unsigned int> :: max();
        unsigned int num2 = numeric_limits <unsigned int> :: min();
        // Print the maximum and minimum values
        cout << "The value of maximum unsigned int:" << num1 << endl;
        cout << "The value of minimum unsigned int:" << num2 << endl;
        // Force the integers to overflow
        num1 += 1;
        num2 -= 1; 
        // Print the overflowed values
        cout << "The value of num1 + 1 after overflow:" << num1 << endl;

        //Create two signed integers of maximum and minimum values
        int num3 = numeric_limits <int> :: max();
        int num4 = numeric_limits <int> :: min();
        // Print the maximum and minimum values
        cout << "The value of maximum int:" << num3 << endl;
        cout << "The value of minimum int:" << num4 << endl;
        // Force the integers to overflow
        num3 += 1;
        num4 -= 1;
        // Print the overflowed values
        cout << "The value of num3 + 1 after overflow:" << num3 << endl;
        cout << "The value of num4 - 1 after underflow:" << num4 << endl;

        //Same thing but with float
        float num5 = numeric_limits <float> :: max();
        float num6 = numeric_limits <float> :: min();
        // Print the maximum and minimum values
        cout << "The value of maximum float:" << num5 << endl;
        cout << "The value of minimum float:" << num6 << endl;
        // Force the integers to overflow
        num5 *= 2;
        num6 /= 2;
        // Print the overflowed values
        cout << "The value of num5 * 2 after overflow:" << num5 << endl;
        cout << "The value of num6 / 2 after underflow:" << num6 << endl;
}
