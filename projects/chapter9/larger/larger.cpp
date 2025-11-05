#include <iostream>
using namespace std;

int* larger(int* x, int* y);

void printAddress(int arr1[], int rows){
    for(int i = 0; i < rows; i++){
        cout << *(arr1 + i) << " " << &arr1[i] << endl;
    }
}

void matrixPointer(int* arr, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << *(arr + i * cols + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int a = 1, b = 2;
    int* c = larger(&a, &b);
    cout << *c << " is larger." << endl;
    cout << "Value of c: " << c << endl;
    cout << "Address of c: " << &c << endl;
    cout << "Value in c by dereference: " << *c << endl;
    cout << "Address of b: " << &b << endl;


    int arr1[] = {10, 20, 30, 40, 50};
    printAddress(arr1, 5);

    int matrixArr[] = {1, 2, 3, 4, 5, 6};
    matrixPointer(matrixArr, 2, 3);
    return 0;
}

int* larger(int* x, int* y){
    if(*x > *y){
        return x;
    }
    else {
        return y;
    }
}