#include <iostream>
using namespace std;


//Arrays and Pointers
//Arrays essentially decay to pointers when passed to functions.

// void printArray(const int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

//We can also create a function that takes const int *p as an parameter, which is equivalent to const int arr[].
void printArray(const int *p, int size) {
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

//2D Array Function
void print2DArray(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int myArray[] = {1, 2, 3, 4, 5};

    cout << myArray << endl; // Prints the address of the first element
    cout << *myArray << endl; // Prints the first element
    cout << *(myArray + 1) << endl; // Prints the second element
    cout << &myArray[0] << endl; // Prints the address of the first element

    printArray(myArray, 5);


    //Pointer Arithmetic
    int* ptr = myArray;
    cout << *(ptr + 2) << endl; // Prints the third element

    //Create an array with double doubleArray
    // If we declare a double and move the pointer by 1, it will move by 8 bytes (on most systems) instead of 4 bytes for an int.
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double* dPtr = doubleArray;
    cout << *(dPtr + 1) << endl; // Prints the second element

    //Subtract two pointers
    cout << (dPtr + 3) - dPtr << endl; // Prints
    // the number of elements between the two pointers (3 in this case)


    //2D Arrays
    int my2DArray[2][3] = { {1, 2, 3}, {4, 5, 6} };
    print2DArray(my2DArray, 2); // Pass the number of rows as an argument

    //Using * to access elements in a 2D array
    cout << *(*(my2DArray + 1) + 2) << endl; // Accesses my2DArray[1][2], which is 6
    cout << *(*(my2DArray) + 1) << endl; // Accesses my2DArray[0][1], which is 2


    return 0;
}
