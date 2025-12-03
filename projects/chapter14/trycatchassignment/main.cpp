#include <iostream>
using namespace std;

class DivByZero : public invalid_argument{
    public:
        DivByZero() : invalid_argument("Error: Division by zero"){
        }
};

int main() {

    //use try catch to handle the input, preventing divide by zero errors
    for(int i = 0; i < 2; i++){
        cout << "PLease enter your first number: " << endl;
        int firstNumber;
        cin >> firstNumber;
        cout << "Please enter your second number: " << endl;
        try{
            int secondNumber;
            cin >> secondNumber;
            if(secondNumber == 0){
                throw DivByZero();
            }
            cout << "The result of the division is: " << (firstNumber / secondNumber) << endl;
        }
        catch(const DivByZero& e){
        }
    }
    return 0;
}
