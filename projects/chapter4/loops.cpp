#include <iostream>

using namespace std;

int main() {


    //Add numbers to a list
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        numbers[i] = i;
        cout << "Iteration " << i << endl;
    }

    //Iterate through the list and print each element
    for (int v: numbers) {
        cout << v << " ";
    }

    cout << endl;
    cout << endl;

    // //Using EOF to terminate input
    // int sum = 0;
    // int num;

    // //Loop including initialization

    // cout << "Enter numbers to sum, and press Ctrl+D (or Ctrl+Z on Windows) to end input: ";
    // while (cin >> num) {
    //     sum += num;
    //     cout << "Enter the next integer: "; //update
    // }
    // //output
    // cout << "The total sum is: " << sum << endl;

    //Create a program that requires a positive integer > 0 as input
    //Program will terminate when the user enters an end-of-file 

    unsigned int value;

    cout << "Enter a positive integer (or press Ctrl+D/Ctrl+Z to end): ";
    while (cin >> value) { 
        if (value > 0) {
            cout << "You entered: " << value << endl;
            // Create a loop that prints a star
            for (unsigned int i = 1; i < value + 1; i++) {

                // cout << string(i, '*') << endl;

                for (unsigned int j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        } else {
            cout << "Please enter a positive integer greater than zero." << endl;
        }
        cout << "Enter a positive integer (or press Ctrl+D/Ctrl+Z to end): ";
    }


    return 0;
}