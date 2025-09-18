#include <iostream>

using namespace std;

int main() {


    //Add numbers to a list
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        numbers[i] = i;
        cout << "Iteration " << i << endl;
    }
    for (int v: numbers) {
        cout << v << " ";
    }

    return 0;
}