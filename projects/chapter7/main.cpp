#include <iostream>
using namespace std;

class HelloWorld {
public:

    int a = 1;

    void greet() {
        cout << "Hello, World!" << endl;
    }

    void privateGreeting();

    void exposeSecret() {
        secretMethod();
    }

    // Method and defined outside of the class
    void unusedMethod();

private:
    void secretMethod() {
        cout << "This is a private method." << endl;
    }
    
};


//Professonal way of writing the functions from the class:
//is done by declaring the function in the class and then place it outside the class

void HelloWorld::privateGreeting() {
    string name;
    int age;
    cout << "Enter your name and age: ";
    cin >> name >> age;
    cout << "This is a public method." << endl;
    cout << "Name: " << name << ", Age: " << age << endl;
}

void HelloWorld::unusedMethod() {
    cout << "This method is declared but not used." << endl;
}



//main() is also called the application
int main() {

    HelloWorld hw;
    hw.greet();
    hw.privateGreeting();
    hw.exposeSecret();
    hw.unusedMethod();
    cout << "This is the value of a: " << hw.a << endl;
    return 0;

}

