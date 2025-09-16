#include <iostream>
#include <string>
using namespace std;

int main() {
    // std::cout << "Hello, World!" << std::endl;

    // std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    // std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;





    // cout << "Hello\n";
    // cout << "Hi\t friends." << endl;
    // cout << "Buenos dias \bamigos." << endl;// two space after dias
    // cout << "Hello\rBonjour mes amis." << endl;
    // cout << "This is a single quote\'." << endl;
    // cout << "This is a double quote\"." <<endl;
    // cout << "This is how to print a backslash \\.";

    // bool x = 123;
    // bool y = -8;
    // bool z = 0;
    // bool t = -0;
    // bool u = true;
    // bool v = false;
    // // Outputting values
    // cout << "Value of x: " << x << endl;
    // cout << "Value of y: " << y << endl;
    // cout << "Value of z: " << z << endl;

    
    // short int side;
    // short int area;
    // short int perimeter;

    // cout << "Enter the side length of the square: ";
    // cin >> side;

    // area = side * side;
    // perimeter = 4 * side;

    // cout << "Area of the square: " << area << endl;
    // cout << "Perimeter of the square: " << perimeter << endl;
    

    char grade = 'A';
    char grade2 = 'B';
    int number = 0;
    char finalGrade;
    int gradeInt;

    finalGrade = grade + grade2;
    gradeInt = grade + number;

    cout << "Final Grade: " << typeid(finalGrade).name() << endl;
    cout << "Final Grade (as integer): " << static_cast<int>(finalGrade) << endl;
    cout << "Final Grade (as char): " << static_cast<int> (grade) + static_cast<int> (grade2) << endl;


    cout << "Grade ASCII Value: " << gradeInt << endl;

    return 0;
}
