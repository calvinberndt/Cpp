#include <iostream>
using namespace std;

class HelloWorld {
public:

    void greet() {
        cout << "Hello, World!" << endl;
    }

    void privateGreeting(){
        string name;
        int age;
        cout << "Enter your name and age: ";
        cin >> name >> age;
        cout << "This is a public method." << endl;
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void exposeSecret() {
        secretMethod();
    }

private:
    void secretMethod() {
        cout << "This is a private method." << endl;
    }
    
};

int main() {

    HelloWorld hw;
    hw.greet();
    hw.privateGreeting();
    hw.exposeSecret();
    return 0;

}

