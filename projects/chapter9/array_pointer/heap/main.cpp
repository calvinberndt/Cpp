#include <iostream>
using namespace std;

//We are going to be learning about Heaps in this section

int* returnArray(const int arr1[], const int arr2[], int size1, int size2){
    int totalSize = size1 + size2;
    int endOfArr1 = size1 - 1;
    int* heapArray = new int[totalSize]; // Allocate memory on the heap

    for(int i = 0; i < size1; i++){
        //Iterate over array1 and add it to arr3
        heapArray[i] = arr1[i];
    }

    for(int i = 0; i < size2; i++){
        //Iterate over array2 and add it to arr3, where we left off at from arr1.
        heapArray[endOfArr1 + i] = arr2[i];
    }

    for(int i = 0; i < totalSize -1; i++){
        cout << heapArray[i] << " ";
    }
    cout << endl;

    return heapArray;
}

int main() {

    const int size1 = 5;
    const int size2 = 2;
    int firstArray[] = {1, 2, 3, 4, 5};
    int secondArray[] = {6, 7};
    int emptyArray[size1+size2];
    int* merged = returnArray(firstArray, secondArray, size1, size2);
        for(int i = 0; i < size1 + size2 -1; i++){
        cout << merged[i] << " ";
    }
    delete[] merged;  // Free the allocated memory
    cout << endl;
    return 0;
}
