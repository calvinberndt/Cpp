#include <iostream>
#include <stdexcept>
#include <string>

// A class whose constructor might throw an exception
class MyMember {
public:
    std::string name;
    MyMember(const std::string& n, bool should_fail) : name(n) {
        std::cout << "  MyMember(\"" << name << "\") constructor called." << std::endl;
        if (should_fail) {
            throw std::runtime_error("Failed to construct MyMember(\"" + name + "\")");
        }
        std::cout << "  MyMember(\"" << name << "\") constructed successfully." << std::endl;
    }
    ~MyMember() {
        std::cout << "  MyMember(\"" << name << "\") destructor called." << std::endl;
    }
};

// A class demonstrating a function try block in its constructor
class MyClass {
private:
    MyMember m1;
    MyMember m2;
    int value;

public:
    MyClass(bool fail_m1, bool fail_m2, int val)
        try // Function try block begins here
            : m1("member1", fail_m1), // Member initializer that might throw
              m2("member2", fail_m2), // Another member initializer that might throw
              value(val) // Direct member initialization
        {
            std::cout << "MyClass constructor body executed successfully." << std::endl;
            // The body itself could also throw, but the primary use of function try blocks
            // is for exceptions from initializer lists.
        }
        catch (const std::exception& e) // Catch block for the function try block
        {
            std::cerr << "--- Caught exception in MyClass constructor function try block: " << e.what() << std::endl;
            // The exception is implicitly rethrown by default if not handled.
            // Explicitly rethrowing `throw;` is good practice for clarity,
            // or if you want to replace it with a different exception.
            throw; // Rethrow the exception
        }

    ~MyClass() {
        std::cout << "MyClass destructor called." << std::endl;
    }
};

int main() {
    std::cout << "--- Scenario 1: MyClass construction succeeds ---" << std::endl;
    try {
        MyClass obj1(false, false, 10);
        std::cout << "MyClass obj1 constructed." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught exception in main for obj1: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Scenario 2: MyClass construction fails due to m1 ---" << std::endl;
    try {
        MyClass obj2(true, false, 20); // m1 constructor will throw
        std::cout << "MyClass obj2 constructed." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught exception in main for obj2: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Scenario 3: MyClass construction fails due to m2 ---" << std::endl;
    try {
        MyClass obj3(false, true, 30); // m2 constructor will throw
        std::cout << "MyClass obj3 constructed." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught exception in main for obj3: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
