#include <iostream>
using namespace std;


int gVar = 100;

void test_fun(int, int);
void test_fun(int);
void myCount();
void myGlobalCount();
void myLocalCount();

int globalCount = 0;


int main() {

    int c = 10, inp = 15;

    int gVar = 200;

    cout << "In main()" << endl;
    // Accessing global gVar using scope resolution operator
    cout << "gVar = " << ::gVar << endl; 

    {
        int gVar = 300;
        cout << "In inner block" << endl;
        cout << "gVar = " << gVar << endl;
    }

    test_fun(10);

    cout << "My Global Count" << endl;

    myGlobalCount();
    myGlobalCount();
    myGlobalCount();

    cout << "------------------" << endl;

    cout << "My Local Count" << endl;
    myLocalCount();
    myLocalCount();
    myLocalCount();

    return 0;
}

void test_fun(int param1) {
    cout << "In test_fun(int)" << endl;
    cout << "gVar = " << gVar << endl;
}

void myGlobalCount()
{
    // static int count = 0;
    globalCount++;
    cout << "Count: " << globalCount << endl;
}

void myLocalCount(){
    static int count = 0;
    count++;
    cout << "Count: " << count << endl;
}
