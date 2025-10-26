#include <iostream>
using namespace std;

int v2;

void f1(){
    static int v1; //global and static variables initialize to 0
    v1++;
    cout << v1 << endl;
}

int main() {
    f1();
    f1();
    cout << v2 << endl;
    return 0;
}



