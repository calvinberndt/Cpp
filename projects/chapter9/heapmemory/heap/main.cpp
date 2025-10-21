#include <iostream>
using namespace std;


// Using heap memory when we don't know the size at compile time


int main() {
    // int size;
    // int* pArray;
    // cout << "Enter the size of the array: ";
    // cin >> size;


    // // Allocate memory on the heap
    // pArray = new int[size]; //an array always returns a pointer

    // for (int i = 0; i < size; i++) {
    //     cout << "Enter the value for an element" << i << ": ";
    //     cin >> *(pArray + i); // pointer arithmetic and dereferencing
    // }

    // // Display the values
    // cout << "Array elements: ";
    // for (int i = 0; i < size; i++) {
    //     cout << *(pArray + i) << " "; // pointer arithmetic and dereferencing
    // }

    // //Display the memory address
    // cout << "\nMemory address of the array: " << pArray << endl;
    // cout << "Memory address of the second element: " << &pArray[1] << endl;

    // //delete the array in the heap
    // delete[] pArray;

    // //attempt to see if pArray still exists
    // cout << "Memory address of the array after deletion: " << pArray << endl;
    // cout << "Memory address of the second element after deletion: " << &pArray[1] << endl;


    // //Creating a 2D Array
    // int* arr [4]; //array of integer pointers located in the stack
    // int colNums;
    // cout << "Enter the number of columns: ";
    // cin >> colNums;

    // for (int i =0; i < 4; i++) {
    //     arr[i] = new int[colNums]; //each pointer points to an array of integers
    // }
    // return 0;


    // //Now what if we want to store everything in the heap

    // int rowNums;
    // cout << "Enter the number of rows: ";
    // cin >> rowNums;
    // cout << "Enter the number of columns: ";
    // cin >> colNums;
    // int** arr = new int* [rowNums];
    // for (int i =0; i < rowNums; i++) {
    //     arr[i] = new int[colNums]; //each pointer points to an array of integers
    // }

    // //initialize
    // for (int i =0; i < rowNums; i++) {
    //     for (int j =0; j < colNums; j++) {
    //         arr[i][j] = i + j;
    //     }
    // }

    // for (int i =0; i < rowNums; i++) {
    //     delete[] arr[i]; //delete each array of integers
    // }
    // delete[] arr; //delete the array of pointers


    //Create 3 matrixes, each with user defined dimensions. Check if the matrixes can multiply and the third matrix will be the output
    int** matrix1;
    int** matrix2;
    int** matrix3;

    cout << "Enter the number of rows for the matrix 1(max 10): ";
    int rows1;
    cin >> rows1;
    cout << "Enter the number of columns for the matrix 1(max 10): ";
    int cols1;
    cin >> cols1;
    matrix1 = new int* [rows1];

    cout << "Enter the number of rows for the matrix 2(max 10): ";
    int rows2;
    cin >> rows2;
    cout << "Enter the number of columns for the matrix 2(max 10): ";
    int cols2;
    cin >> cols2;
    matrix2 = new int* [rows2];

    if (cols1 != rows2){
        cout << "Matrix multiplication not possible with these dimensions." << endl;
        return 0;
    }

    //Allocate memory for matrix 1
    for(int i = 0; i < rows1; i++){
        matrix1[i] = new int[cols1];
    }
    //Allocate memory for matrix 2
    for(int i = 0; i < rows2; i++){
        matrix2[i] = new int[cols2];
    }
    //Allocate memory for matrix 3
    matrix3 = new int* [rows1];
    for(int i = 0; i < rows1; i++){
        matrix3[i] = new int[cols2];
    }

    //Initialize matrix 1
    cout << "Enter elements for matrix 1:" << endl;
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    //Initialize matrix 2
    cout << "Enter elements for matrix 2:" << endl;
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    //Multiply matrix 1 and matrix 2 to get matrix 3
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            matrix3[i][j] = 0; //Initialize element
            for(int k = 0; k < cols1; k++){
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    //Now we are going to display the result
    cout << "Resultant matrix after multiplication:" << endl;
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }

    //Deallocate memory for matrix 1
    for(int i = 0; i < rows1; i++){
        delete[] matrix1[i];
    }

    delete[] matrix1;
    //Deallocate memory for matrix 2
    for(int i = 0; i < rows2; i++){
        delete[] matrix2[i];
    }

    delete[] matrix2;
    //Deallocate memory for matrix 3
    for(int i = 0; i < rows1; i++){
        delete[] matrix3[i];
    }
    
    delete[] matrix3;
    return 0;
}