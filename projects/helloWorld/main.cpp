#include <iostream>  // For input/output operations like std::cout and std::cin
#include <limits>    // For numeric_limits to get max/min values of types
#include <string>    // For std::string class to handle text
#include <vector>    // For std::vector, a dynamic array
#include <algorithm> // For algorithms like std::sort

using namespace std;  // Allows us to use standard library names without "std::" prefix

// Function declaration: A function is a reusable block of code that performs a task
// This function takes two integers and returns their sum
int addNumbers(int a, int b) {
    return a + b;  // Return statement sends the result back to the caller
}

// A simple class: Classes are blueprints for objects, encapsulating data and functions
class Person {
public:
    string name;  // Member variable: stores the person's name
    int age;      // Member variable: stores the person's age

    // Constructor: Special function called when creating an object
    Person(string n, int a) : name(n), age(a) {}

    // Member function: A function inside a class
    void introduce() {
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    // // Comments: Lines starting with // are ignored by the compiler and used for explanations
    // cout << "Welcome to C++! This program demonstrates basic and advanced features." << endl;

    // // Variables and Data Types: C++ has various types to store different kinds of data
    // int integerVar = 42;          // int: whole numbers
    // double doubleVar = 3.14159;    // double: floating-point numbers
    // char charVar = 'A';            // char: single characters
    // bool boolVar = true;           // bool: true or false
    // string stringVar = "Hello";    // string: sequence of characters

    // cout << "Variables: int=" << integerVar << ", double=" << doubleVar
    //      << ", char=" << charVar << ", bool=" << boolVar << ", string=" << stringVar << endl;

    // // Input/Output: cin for input, cout for output
    // cout << "Enter your name: ";
    // string userName;
    // cin >> userName;  // Reads input from the user
    // cout << "Hello, " << userName << "!" << endl;

    // // Arrays: Fixed-size collection of elements
    // int array[5] = {1, 2, 3, 4, 5};  // Array of 5 integers
    // cout << "Array elements: ";
    // for (int i = 0; i < 5; i++) {  // Loop: repeats code multiple times
    //     cout << array[i] << " ";
    // }
    // cout << endl;

    // // Vectors: Dynamic arrays that can grow or shrink
    // vector<int> myVector = {10, 20, 30};
    // myVector.push_back(40);  // Adds an element to the end
    // cout << "Vector elements: ";
    // for (int val : myVector) {  // Range-based for loop: iterates over elements
    //     cout << val << " ";
    // }
    // cout << endl;

    // // Calling a function
    // int sum = addNumbers(5, 10);
    // cout << "Sum of 5 and 10 is: " << sum << endl;

    // // Using a class
    // Person person("Alice", 25);
    // person.introduce();

    // // Conditional statements: if-else for decision making
    // if (integerVar > 40) {
    //     cout << "Integer is greater than 40." << endl;
    // } else {
    //     cout << "Integer is not greater than 40." << endl;
    // }

    // // Loops: while loop example
    // int counter = 0;
    // while (counter < 3) {
    //     cout << "Counter: " << counter << endl;
    //     counter++;  // Increment counter
    // }

    // // Sorting a vector using algorithm
    // vector<int> numbers = {5, 2, 8, 1, 9};
    // sort(numbers.begin(), numbers.end());  // Sorts the vector
    // cout << "Sorted numbers: ";
    // for (int num : numbers) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // // Original code: Demonstrating numeric limits and overflow
    // unsigned int num1 = numeric_limits<unsigned int>::max();  // Max value for unsigned int
    // unsigned int num2 = numeric_limits<unsigned int>::min();  // Min value (0 for unsigned)

    // cout << "Max unsigned int: " << num1 << endl;
    // cout << "Min unsigned int: " << num2 << endl;

    // num1 += 2;  // Overflow: wraps around
    // num2 -= 1;  // Underflow: wraps around
    // cout << "After overflow: " << num1 << endl;
    // cout << "After underflow: " << num2 << endl;

    // cout << "Program finished!" << endl;


    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;  // Indicates successful execution
}
