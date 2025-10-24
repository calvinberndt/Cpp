#include <iostream>
using namespace std;


void f(int (*C)[10]) {
        cout << "inside f: &C = " << &C << ", C = " << C << '\n';
    // modifying the pointee affects caller:
    (*C)[0] = 999;
    // reassigning C does NOT affect caller's pointer:
    C = nullptr;
}

void f2(int (*&C)[10]) {
    cout << endl;
    cout << "inside f2: &C: " << &C << ", C = " << C << endl;
}

void f3(int A[][2]){
    cout << endl;
    cout << "Inside f3: " << &A << ", A = " << A << endl;
}

int main() {
    int (*matrix3)[10] = new int[1][10];
    cout << "in main: &matrix3 = " << &matrix3 << ", matrix3 = " << matrix3 << '\n';
    f(matrix3);
    cout << "after f: &matrix3 = " << &matrix3 << ", matrix3 = " << matrix3
         << ", matrix3[0][0] = " << matrix3[0][0] << '\n';

    f2(matrix3);
    delete[] matrix3;

    int A[][2] = {{1, 1}, {2,2}};
    cout << A[0][0] << endl;

    f3(A);
    // int (*matrix3)[10] = new int[2][10];

    // cout << "&matrix3        = " << &matrix3 << '\n'; // address of the pointer variable
    // cout << "matrix3         = " << matrix3 << '\n';  // pointer value -> address of row 0
    // cout << "&matrix3[0]     = " << &matrix3[0] << '\n'; // address of row 0 (same as matrix3)
    // cout << "&matrix3[0][0]  = " << &matrix3[0][0] << '\n'; // address of first element (same numeric addr)
    // delete[] matrix3;
}