#include <iostream>
using namespace std;

void update(int numbers[], int number, int size) {
    if (number > 0 && number < size) {  // Check bounds
        cout << numbers[number] << endl;  // Access the element at index 'number'
    }

}

int main() {

    const int SIZE = 99; // Constant for array size
    int a[SIZE];  // Variable declaration
    a[0] = 42;  // Assign to variable
    cout << a[0] << endl;  // Outputs: 42


    for (int i = 0; i < SIZE; i++) {
        a[i] = i * 2;  // Assign values to each element in the array
    }

    //Print the address of the array
    cout << "Address of array a: " << a << endl;
    cout << "Address of first element a[0]: " << &a[1] << endl; 
    cout << "Element at index 1 using pointer arithmetic: " << *(a + 1) << endl;
    cout << "Address of first element a[0]: " << a[1] << endl; 

    update(a, 0, SIZE);  // Call function with array and index


    for (int i = 0; i < SIZE; i++) {
        cout << a[i] <<  " ";  // Outputs each element in the array
    } 


    // //2D Arrays
    // const int ROWS = 3;
    // const int COLS = 4;
    // int matrix[ROWS][COLS] = {  // 2D array initialization
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}
    // };

    // //Create matrix2
    // int matrix2[ROWS][COLS];
    // //Copy values from matrix to matrix2
    // for (int i = 0; i < ROWS; i++) {
    //     for (int j = 0; j < COLS; j++) {
    //         matrix2[i][j] = matrix[i][j];
    //     }
    // }


    // //Create a new matrix where it will be matrix * matrix2
    // int result[ROWS][COLS] = {0}; // Initialize result matrix with zeros
    // for (int i = 0; i < ROWS; i++) {
    //     for (int j = 0; j < COLS; j++) {
    //         for (int k = 0; k < COLS; k++) {
    //             result[i][j] += matrix[i][k] * matrix2[k][j];
    //         }
    //     }
    // }

    //Take input from the from the user  for them to declare the the Matrix sizes.

    const short unsigned int M = 3, N = 3, P = 2;
    int matrixA[M][N];
    int matrixB[N][P];
    int matrixC[M][P] = {}; //must initilize otherwise we obtian garbage values.
    cout << "We are going to be doing matrix multiplication. Fill in matrix A:" << endl;
    for(short unsigned int m=0; m < M; m++){
        for(short unsigned int n =0; n < N; n++){
            cin >> matrixA[m][n];
        }
    }
    cout << "We are going to be doing matrix multiplication. Fill in matrix B:" << endl;
    for(short unsigned int n=0; n < N; n++){
        for(short unsigned int p =0; p < P; p++){
            cin >> matrixB[n][p];
        }
    }

    //Multiplication of Matrix A and B to get Matrix C
    for(short unsigned int m = 0; m < M; m++){
        for(short unsigned int p = 0; p < P; p++){
            for(short unsigned int n = 0; n < N; n++){
                matrixC[m][p] += matrixA[m][n] * matrixB[n][p];
            }
        }
    }

    //Print the result matrix
    cout << "Result of matrix multiplication (matrixC):" << endl;
    for(short unsigned int m = 0; m < M; m++){
        for(short unsigned int p = 0; p < P; p++){
            cout << matrixC[m][p] << " ";
        }
        cout << endl;
    }


    return 0;
}
