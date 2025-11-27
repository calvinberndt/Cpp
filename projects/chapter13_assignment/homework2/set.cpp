#include <iostream>
using namespace std;
#include "set.h"

Set::Set() : elements(nullptr) , numElements(0) {}

Set::Set(int* elements, int numElements) {
    this->numElements = numElements;
    this->elements = new int[numElements];
    // Copy elements from input array to class array
    for(int i = 0; i < numElements; i++) {
        this->elements[i] = elements[i];
    }
}

Set::~Set() {
    delete[] elements;
}

void Set::printSet() {
    for(int i = 0; i < numElements ; i++){
        cout << elements[i] << " ";
    }
    cout << endl;
}

void Set::operator+=(int n) {
    //Check if the n is already in the set
    for(int i = 0; i < numElements; i++){
        if(elements[i] == n){
            cout << "The value: " << n << " is already inside the set" << endl;
            return;
        }
    }
    //If not, add it to the set
    int* newElements = new int[numElements + 1];
    for(int i = 0; i < numElements; i++){
        newElements[i] = elements[i];
    }
    newElements[numElements] = n; //add new element
    delete[] elements;
    elements = newElements;
    numElements++;
}

void Set::operator-=(int n) {
    //create a sentinel value to check if n is in the array
    int* newElements = new int[numElements-1];
    int flag = 0; //use this to check if the element was in the array

    for(int i = 0; i < numElements; i++){
        if(elements[i] == n) {
            flag = -1;
            cout << "Your element was found at index: " << i << endl;
            continue;
        }
        newElements[i] = elements[i];
    }
    
    delete[] elements;
    elements = newElements;
    if(flag == -1){
        numElements--;
    }

}