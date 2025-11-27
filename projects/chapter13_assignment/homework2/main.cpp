#include <iostream>
#include "set.h"
using namespace std;

int main() {
    // 1. Test Default Constructor & Add (+=)
    Set setA;
    setA += 10;
    setA += 20;
    setA += 30;
    cout << "Set A: ";
    setA.printSet();

    Set setB;
    setB += 20;
    setB += 40;
    setB += 50;
    cout << "Set B: ";
    setB.printSet();

    // 2. Test Union (+)
    Set setUnion = setA + setB;
    cout << "Union (A + B): ";
    setUnion.printSet();

    // 3. Test Intersection (*)
    Set setIntersect = setA * setB;
    cout << "Intersection (A * B): ";
    setIntersect.printSet();

    // 4. Test Difference (-)
    Set setDiff = setA - setB;
    cout << "Difference (A - B): ";
    setDiff.printSet(); // Should be 10, 30

    // 5. Test Remove (-=)
    // Note: This might fail if the implementation is buggy
    cout << "Removing 20 from Set A..." << endl;
    setA -= 20;
    cout << "Set A after removing 20: ";
    setA.printSet();

    // 6. Test Copy Constructor (Rule of Three)
    cout << "Testing Copy Constructor (Set C = Set A)..." << endl;
    Set setC = setA;
    setC += 99;
    cout << "Set C (should have 99): ";
    setC.printSet();
    cout << "Set A (should NOT have 99): ";
    setA.printSet();

    return 0;
}