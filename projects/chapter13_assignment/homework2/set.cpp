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
    int* newElements = new int[numElements-1];
    int flag = -1; //sentinel value


    for(int i = 0; i < numElements; i++){
        if(elements[i] == n) {
            flag = i;
            cout << "Your element:" << n <<  " was found at index: " << i << endl;
            break;
        }
    }
    for(int i = 0; i < numElements-1; i++){
        if(i == flag){
            continue;
        }
        newElements[i] = elements[i];
    }

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
        if(inB == false){
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
        if(inB == true){
            result+=a.elements[i];
        }
    }
    return result;
}