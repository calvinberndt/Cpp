#include <iostream>
using namespace std;

void reverse(int &num);
void swap(int &x, int &y);

int main() {

    int a = 1234, b = 67890;
    reverse(a);
    cout << "Reversed a: " << a << endl;
    reverse(b);
    cout << "Reversed b: " << b << endl;
    swap(a, b);
    cout << "After swap, a: " << a << ", b: " << b << endl;
    
    return 0;
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void reverse(int &num){
    int temp = 0;
    while(num > 0){
        temp += (num % 10);
        cout << "Value of temp after modulo: " << temp << endl;
        num /= 10;
        if(num > 0){
            temp *= 10;
        }
        cout << "Value of num after division: " << num << endl;
    }
    num = temp;
}