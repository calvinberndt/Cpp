#include <iostream>
using namespace std;

void reverse_dig(int &num);
void swap(int &a, int &b);


int main() {
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    //Reverse the digits of both numbers
    reverse_dig(a);
    reverse_dig(b);

    //Swap the reversed numbers
    swap(a, b);

    cout << "Output: " << a << " " << b << endl;

    return 0;
}

//Create the function using a temporary variable to reverse the digits of a number by casting it to a string
void reverse_dig(int &num) {
    string reverse_string = "";
    string str_num = to_string(num);
    bool is_zero = true;
    for (int i = str_num.length() - 1; i >= 0; i--) {
        if (str_num[i] == '0' && is_zero) {
            continue;
        }
        is_zero = false;
        reverse_string += str_num[i];
    }
    cout << "Reversed number: " << reverse_string << endl;
    num = stoi(reverse_string);
}

void reverse_dig(int &num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    num = reversed;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}