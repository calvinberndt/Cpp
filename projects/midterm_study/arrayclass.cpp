// For greater control over how an array can be used, we can create an array class.
// Design a class named Array with the data members capacity, size, and arr (a
// pointer that points to the first element of the array in the heap). Also design a
// member function named insert that adds elements to the end of the array, and
// a function named print that prints the element of the array. Test your program
// with different lists of array elements. 

#include <iostream>
using namespace std;


class ArrayClass {
    private: 
        int capacity;
        int size;
        int* arr;
    public:
        ArrayClass(int cap);
        ArrayClass();
        ~ArrayClass();
        void insert(int element);
        void print();
};

ArrayClass::ArrayClass(int cap) : capacity(cap), size(0) {
    arr = new int[capacity];
}
ArrayClass::ArrayClass() : capacity(10), size(0) {
    arr = new int[capacity];
}
ArrayClass::~ArrayClass() {
    delete[] arr;
}
void ArrayClass::insert(int element) {
    if (size < capacity) {
        arr[size] = element;
        size++;
    } else { 
        cout << "Array is full. Cannot insert element." << endl;
        }
}
void ArrayClass::print() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    ArrayClass myArray(5);
    myArray.insert(10);
    myArray.insert(20);
    myArray.insert(30);
    myArray.print(); // Output: 10 20 30

    myArray.insert(40);
    myArray.insert(50);
    myArray.insert(60); // Output: Array is full. Cannot insert element.
    myArray.print(); // Output: 10 20 30 40 50

    ArrayClass myDefaultArray;
    myDefaultArray.insert(1);
    myDefaultArray.insert(2);
    myDefaultArray.print(); // Output: 1 2
    
    return 0;
}



