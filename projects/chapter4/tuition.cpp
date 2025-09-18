#include <iostream>

using namespace std;

int main() {

    short int numberOfUnits;
    short int costPerCourse = 10;
    short int registrationFeePerCourse = 5;

    cout << "Please enter the amount of units you are taking" << endl;
    cin >> numberOfUnits;

    if (numberOfUnits % 3 != 0){
        cout << "Number of units must be divisble by 3" << endl;
    }
    else{
        if (numberOfUnits <= 12){
            cout << "Your total tuition cost is: $" << ((numberOfUnits) * 10) + ((numberOfUnits / 3 ) * 5)  << endl;
        }
        else{
            cout << "Your total tuition cost is: $" << (120) + (5 * (numberOfUnits /3) )  << endl;
        }
    }

    return 0;
}