#include <iostream>
using namespace std;

void createColumns(int* matrix[], int rows, int columns){
    for(int i= 0; i < rows; i++){
        matrix[i] = new int[columns];
        for (int j=0; j < columns; j++){
            matrix[i][j] = i + j;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    int **matrix1; //matrix 1 is m x n
    int **matrix2; //matrix 1 is n x p
    int **matrix3; //matrix 1 is m x p
    int m, n, p;
    cout << "Enter the values for m, n, p respectively" << endl;
    cin >> m; cin >>n; cin>>p;
    matrix1 = new int* [m];
    matrix2 = new int* [n];
    matrix3 = new int* [m];
    createColumns(matrix1, m, n);
    createColumns(matrix2, n, p);
}