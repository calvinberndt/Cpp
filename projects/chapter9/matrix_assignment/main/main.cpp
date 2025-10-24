#include <iostream>
using namespace std;

//this is the function prototype
void multiplyMatrices(int(*A)[10], int(*B)[10],
                      int(*C)[10], int m, int n, int p);


int main() {
    int m, n, p;
    //The function requires int(*A)[10], so we must initialize these
    int (*matrix1)[10]; //pointer to an array that contains 10 ints
    int (*matrix2)[10];
    int (*matrix3)[10];
    cout << "Enter the dimensions (m, n, p) for matrices A (m x n) and B (n x p):" << endl;
    cin >> m; cin >> n; cin >> p;
    cout << "m: " << m << " n: " << n  << " p: " << p << endl;
    if (m < 1 || m > 10 || n < 1 || n > 10 || p < 1 || p > 10) {
        cout << "Error: dimensions must be between 1 and 10 (inclusive)." << endl;
        return 1;
    }

    matrix1 = new int[m][10]; //new int[m][10] allocates m contigous rows each bcontaining an array of 10
    matrix2 = new int[n][10]; 
    matrix3 = new int[m][10];

    cout << "Enter elements for Matrix A" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements for Matrix B" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cin >> matrix2[i][j];
        }
    }

    multiplyMatrices(matrix1, matrix2, matrix3, m, n, p);

    //print C
    for (int i=0; i < m; i++){
        for(int j=0; j < p; j++){
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] matrix3;

    return 0;
}


//define the function
void multiplyMatrices(int(*A)[10], int(*B)[10], int(*C)[10], int m, int n, int p) {


    cout << "C (pointer to row)       : " << C << endl;
    cout << "&C[0] (address of row 0) : " << (&C[0]) << endl;
    cout << "&C[0][0] (first element) : " << &C[0][0] << endl;
    cout << "(*C) decayed (first elem): " << (*C) << endl;

    for(int i=0; i < m; i++){
        for(int j=0; j < p; j++){
            C[i][j] = 0; //remove junk values in matrixC so we can do math
            for(int k = 0; k < n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}