#include <iostream>
using namespace std;


int main() {
    //iterate through rows iterating by two because our stars grow by that for each loop
    cout << "Type 2: " << endl;
    for(int star = 1; star < 10; star +=2){
        //add spaces with
        for(int space = 0; space < (9 - star) / 2; space++){
            cout << " ";
        }
        //start with one star and ensure that there is not as many stars as we have star (which +=2)
        for(int multiplierStar = 0; multiplierStar < star; multiplierStar++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}