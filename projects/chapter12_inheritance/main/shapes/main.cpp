#include <iostream>
#include "Square.h"
#include "Cube.h"
using namespace std;


int main() {
    Square s1(5);
    Cube c1(5);
    s1.print();
    c1.print();
    return 0;
}