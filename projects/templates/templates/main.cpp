#include <iostream>
using namespace std;
using namespace std::chrono;


//This program will demonstrate the use of Templates in C++


//Create a template function for a function named smaller using the template keyword
template <typename T>
T smaller(T a, T b) {
    return (a < b) ? a : b;
}
//template function named addValues that takes two arguments and returns the sum of the two arguments
template <typename T, typename U>
auto addValues(T a, U b){
    return a + b;
}

template <typename T>
    T square(T a) {
        return a * a;
    }

template <typename T>
T cube(T a) {
    return a * a * a;
}

template <typename T>
T power(T a, T b) {
    return pow(a, b);
}

template <typename T>
T root(T a) {
    return sqrt(a);
}
template <typename T>
void print(T arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T, int N>
void print(T (&arr)[N]) {
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    cout << smaller(54, 20) << endl;
    cout << smaller(10.5, 20.5) << endl;
    cout << smaller('a', 'b') << endl;
    cout << square(10) << endl;
    cout << cube(10) << endl;
    cout << power(10, 2) << endl;
    cout << root(10) << endl;
    int arr[] = {1, 2, 3, 4, 5};
    print(arr, 5);
    cout << addValues(10, 20) << endl;
    cout << addValues(10.5, 20.5) << endl;
    cout << addValues(10, 20.5) << endl;
    cout << addValues(10.5, 20) << endl;
    cout << addValues(10.5, 20.5) << endl;
    cout << addValues('a', 'b') << endl;
    return 0;
}