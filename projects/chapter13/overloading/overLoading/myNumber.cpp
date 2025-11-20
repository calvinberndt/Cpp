#include <iostream>
using namespace std;

class MyNumber {
    private:
        double value1, value2;
    public:
        // Constructor
        MyNumber(double v1, double v2) : value1(v1), value2(v2) {}
        MyNumber(double v1) : value1(v1) {}
        MyNumber() {
            //this constructor is for when both values are divided by zero:
            value1 = 0;
            value2 = 0;
        }
        // Overload + operator

        //Addition
        MyNumber operator+(const MyNumber& other) {
            return MyNumber(this->value1 + other.value1, this->value2 + other.value2);
        }

        //Subtraction
        MyNumber operator-(const MyNumber& other) {
            return MyNumber(this->value1 - other.value1, this->value2 - other.value2);
        }
        //Multiplication
        MyNumber operator*(const MyNumber& other){
            return MyNumber(this->value1 * other.value1, this->value2 * other.value2);
        }
        //Division
        MyNumber operator/(const MyNumber& other) {
            if(other.value1 == 0 && other.value2 !=0){
                return MyNumber(0, this->value2 / other.value2);
            }
            if(other.value2 == 0 && other.value1 !=0){
                return MyNumber(this->value1 / other.value1, 0);
            }
            if(other.value1 !=0 && other.value2 !=0){
                return MyNumber(this->value1 / other.value1, this->value2 / other.value2);
            }
            else{
                return MyNumber(this->value1 / other.value1, this->value2 / other.value2);
            }
            
        }
        // Function to display values
        void display() const {
            cout << "Value1: " << value1 << ", Value2: " << value2 << endl;
        }
};

int main() {
    MyNumber num1(1, 1);
    MyNumber num2(0, 0);
    
    MyNumber num3 = num1 + num2; // Using overloaded + operator
    
    num3.display(); // Display the result

    MyNumber num4 = num1 / num2;
    cout << "Number 4 " << endl;
    num4.display();
    return 0;
}