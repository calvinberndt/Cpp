#include <iostream>
using namespace std;
#include "set.h"

int main() {
    int arr[] = {1,2,6};
    Set mySet(arr, 3);
    // mySet.printSet();
    // mySet+=3;
    // mySet.printSet();
    // mySet-=3;
    // mySet.printSet();

    int arr2[] = {2, 4,5,6};
    Set mySet2(arr2, 4);
    Set result = mySet2 + mySet;
    result.printSet();
    Set difference = mySet - mySet2;
    cout << "Difference" << endl;
    difference.printSet();
    cout << "Intersection" << endl;
    Set intersection = mySet * mySet2;
    intersection.printSet();
    
    return 0;
}
