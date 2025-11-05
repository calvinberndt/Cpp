#include <iostream>
using namespace std;


//This stack.cpp is an example of where we have the row is allocated
//To the stack and the column is allocated to the heap.
void fillMatrix(int* arr[], int row, int column){
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            arr[i][j] = j;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void createColumns(int* arr[], int row, int column){
    for(int i = 0; i < row; i++){
        arr[i] = new int [column];
    }
    fillMatrix(arr, row, column);
}

void deleteMatrix(int* arr[], int row){
    for(int i =0; i<row; i++){
        delete[] arr[i];
    }
}

int main() {
    int row = 2;
    int column = 2;
    int *ar1[row];
    createColumns(ar1, row, column);
    deleteMatrix(ar1, row);
    return 0;
}