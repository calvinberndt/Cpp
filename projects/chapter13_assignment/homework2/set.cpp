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

// Copy Constructor: Creates a deep copy of 'other'
Set::Set(const Set& other) {
    numElements = other.numElements;
    if (numElements > 0) {
        elements = new int[numElements];
        for (int i = 0; i < numElements; i++) {
            elements[i] = other.elements[i];
        }
    } else {
        elements = nullptr;
    }
}

// Copy Assignment Operator: Handles assignment safely (e.g., A = B)
const Set& Set::operator=(const Set& other) {
    if (this != &other) { // 1. Check for self-assignment
        delete[] elements; // 2. Free existing memory
        
        // 3. Deep copy the data
        numElements = other.numElements;
        if (numElements > 0) {
            elements = new int[numElements];
            for (int i = 0; i < numElements; i++) {
                elements[i] = other.elements[i];
            }
        } else {
            elements = nullptr;
        }
    }
    return *this;
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
    int foundIndex = -1;
    
    // 1. Check if the n exists in the set
    for(int i = 0; i < numElements; i++){
        if(elements[i] == n) {
            foundIndex = i;
            break;
        }
    }

    // If not found, do nothing and return
    if (foundIndex == -1) {
        cout << "Element " << n << " not found in set." << endl;
        return;
    }

    // 2. Create new smaller array
    int* newElements = new int[numElements - 1];
    
    // 3. Copy everything EXCEPT the found index
    // We need two counters: i for the old array, j for the new array
    for(int i = 0, j = 0; i < numElements; i++){
        if(i != foundIndex){
            newElements[j] = elements[i];
            j++;
        }
    }

    // 4. Swap and cleanup
    delete[] elements;
    elements = newElements;
    numElements--;
}

//Add all items
Set operator+(const Set& a, const Set&b) {
    Set result;
    for(int i=0; i < a.numElements; i++){
        //the += operator already adds one to the length of the array
        //add adds the value to the array
        result+=a.elements[i];
    }
    for(int i = 0; i < b.numElements; i++){
        result+=b.elements[i];
    }
    return result;
}

//Only add to result if it does not exist in b.
Set operator-(const Set& a, const Set&b) {
    Set result;
    for(int i = 0; i < a.numElements; i++){
        bool inB = false;
        for(int j = 0; j < b.numElements; j++){
            if(a.elements[i] == b.elements[j]){
                inB = true;
                break;
            }
        }
        if(!inB){
            result+=a.elements[i];
        }
    }
    return result;
}

Set operator*(const Set& a, const Set& b){
    Set result;
    for(int i = 0; i < a.numElements; i++){
        bool inB = false;
        for(int j = 0; j < b.numElements; j++){
            if(a.elements[i] == b.elements[j]){
                inB = true;
                break;
            }
        }
        if(inB){
            result+=a.elements[i];
        }
    }
    return result;
}