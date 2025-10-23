#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;

    str = "string";

    string str1("abc"), str2(5, 'a');

    cout << str << str1 << str2 << endl;

    cout << str.capacity() << endl;

    cout << sizeof(str) << endl;

    cout << str.capacity() << endl;

    cout << "bits per char: " << CHAR_BIT << endl;


    cin >> str;

    cout << "This is c in " << str << endl;


    //Use getline to read a full line including spaces
    cout << "Enter a full line of text: ";
    cin.ignore(); // To ignore the leftover newline character from previous input
    getline(cin, str);
    cout << "You entered: " << str << endl;





    return 0;
}
