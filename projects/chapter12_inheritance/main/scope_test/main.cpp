#include <iostream>
using namespace std;

int main() {
    int scope_num = 0;
    for(int i = 0; i < 5; i++){
        if(i == 4) {
            int scope_num = 2;
            cout << scope_num << endl;
        }
        cout << scope_num << endl;
    }
    //Testing if scope_num is accessible here
    cout << "Final scope_num: " << scope_num << endl;
    return 0;
}
