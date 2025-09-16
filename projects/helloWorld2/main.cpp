#include<iostream>
using namespace std;

// Using namespace std to avoid prefixing std:: before standard library names
using namespace std;

int main() {

    cout << "Hello World!" << endl;
    std::cout << "Hello, World!" << std::endl;

    short int sa;
    const unsigned int pennyValue = 1;
    int a;
    std::cout << "Size of short int: " << sizeof(short int) << " bytes\n";
    std::cout << "Size of unsigned short int: " << sizeof(unsigned short int) << " bytes\n";
    return 0;
}
// This is a simple C++l program that prints "Hello, World!" to the console.
