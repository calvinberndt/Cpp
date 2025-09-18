#include <iostream>

using namespace std;

int main() {

    //Declaration of variable x
    // double x = 2.78123;
    int x = 0;

    // if (x == 2.78123) {
    //     std::cout << "x is exactly 2.78123" << std::endl;
    // } else {
    //     std::cout << "x is not exactly 2.78123" << std::endl;
    // }


    // Example of if statement without braces
    // if (x == 0)
    //     cout << "x is zero" << endl;
    // else
    //     cout << "x is not zero" << endl;



    //Switch statement example

    int day;
    //Input
    cout << "Enter a number between 0 and 6: ";
    cin >> day;
    //Switch statement
    switch (day) {
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:   
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 0 and 6." <<
    endl;
    }
    return 0;
}


