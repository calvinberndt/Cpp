#include <iostream>
using namespace std;
#include "set.h"

int main() {
    //Create a new set with 1,2,3
    int arr[] = {1,2,3};
    Set mySet(arr, 3);
    mySet.printSet();
    mySet+=3;
    mySet.printSet();
    mySet-=3;
    mySet.printSet();

    
    return 0;
}
