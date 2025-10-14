#include <iostream>
using namespace std;

//pass by pointer and return by pointer.
float* findLargest(float* num1, float* num2, float*num3){

    float* largestFloat = num1;

    if(*largestFloat < *num2){
        largestFloat = num2;
    }
    if(*largestFloat < *num3){
        largestFloat = num3;
    };



    return largestFloat;
}

int main() {

    float num1 = 2.1;
    float num2 = 2.5;
    float num3 = 3.8;


    float largestInt = *findLargest(&num1, &num2, &num3);
    cout << "The largest float is: " << largestInt << endl;

    return 0;
}
