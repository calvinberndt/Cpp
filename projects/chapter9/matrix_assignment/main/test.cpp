#include <iostream>
#include <iomanip>
using namespace std;

void function1(double *blah);


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

void a1(int array[]){
    cout << "The address of array: " << &array << endl;
    cout << "The value of array: " << array << endl;

    int aPoint = 5;
    array = &aPoint;
    cout << "The address of array after repointing: " << &array << endl;
    cout << "The value of array after repointing: " << *array << endl;
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

    int array[2];
    cout << "The address of array: " << &array << endl;
    cout << "The value of array: " << array << endl;
    a1(array);

    int size = 5;
    int **pp;
    pp = new int *[2];
    cout << sizeof(pp)  << endl;
    cout << sizeof(size)<< endl;
    cout << "Address of index 0: " << &pp[0] << endl;
    cout << "Address of index 1: " << &pp[1]  << endl;

    pp[0] = new int[3];
    pp[1] = new int[3];

    for(int i = 0; i < 2; i ++){
        // cout << fixed << setw(15) << right << setfill('*');
        cout << "Row " << i << ": ";
        for(int j = 0; j < 3; j++){
            pp[i][j] = 0;
            pp[i][j] += j;
            cout << setw(5) << pp[i][j] << " ";
        }
        cout << endl;
    }


    int x = -909.245;
    cout << fixed << setw (15) << left << setprecision (3) << x << setfill('*');

    double y = -909.245;

    if(y==x){
        cout << "x and y are equal" << endl;
    }
    else{
        cout << "not equal" << endl;
    }

    double *a = &y;
    function1(a);
    function1(&y);
    cout << "Address of a in main: " << &a << endl;
    cout << "Address of y in main: " << &y << endl;



    return 0;
}

void function1(double *blah){
    cout << "blah location:  " <<  blah << endl;
    cout << " location of blah pointer: " << &blah << endl;
    cout << "Value of blah: " <<*blah << endl;

    cout << endl;
}