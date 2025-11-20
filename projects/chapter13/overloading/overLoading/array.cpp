#include <iostream>
using namespace std;

//Create a simple class for operation overloading for an int array pointer to the hash
//We will overload the array so that both of them are added together.

class Array {
    private:
        int* myArray;
        int mySize;
    public:
        //Constructors
        Array(int arr[], int size) {
            myArray = arr;
            mySize = size;
            myArray = new int[mySize];
        }

        //Display function
        void display() const {
            for(int i = 0; i < mySize; ++i) {
                cout << myArray[i] << " ";
            }
            cout << endl;
        }
        

        //Operation overload 

    };
int main() {
    int arr1[] = {};
    Array array1(arr1, 3);
    array1.display();
    return 0;
}