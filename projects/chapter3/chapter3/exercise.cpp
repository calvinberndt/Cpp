#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {

    //Create variables for both inputs from TV, DVD's and remote controllers
    unsigned int tvNumber;
    unsigned int dvdNumber;
    unsigned int remoteNumber;

    double tvPrice = 1400;
    double dvdPrice = 220;
    double remotePrice = 35.20;

    double totalTvPrice;
    double totalDvdPrice;
    double totalRemotePrice;
    double totalPrice;
    double tax = 0.0825;
    double totalTax;
    double totalAfterTax;

    // Ask the user to input the number of TV's, DVD's and remote controllers
    cout << "How many TV's were sold? " << endl;
    cin >> tvNumber;
    cout << "How many DVD players were sold? " << endl;
    cin >> dvdNumber;
    cout << "How many remote controllers were sold? " << endl;
    cin >> remoteNumber;

    //Calculate the total price for each item
    totalTvPrice = tvNumber * tvPrice;
    totalDvdPrice = dvdNumber * dvdPrice;
    totalRemotePrice = remoteNumber * remotePrice;
    totalPrice = totalTvPrice + totalDvdPrice + totalRemotePrice;
    totalTax = totalPrice * tax;
    totalAfterTax = totalPrice + totalTax;


    cout << left << setw(16) << "Quantity" 
         << left << setw(16) << "Description" 0
         << right << setw(16) << "Total Price" << endl;

    cout << left << setw(16) << tvNumber 
         << left << setw(16) << "TV" 
         << right << setw(16) << fixed << setprecision(2) << tvPrice 
         << right << setw(16) << fixed << setprecision(2) << totalTvPrice << endl;

    cout << left << setw(16) << dvdNumber 
         << left << setw(16) << "DVD Player" 
         << right << setw(16) << fixed << setprecision(2) << dvdPrice 
         << right << setw(16) << fixed << setprecision(2) << totalDvdPrice << endl;

    cout << left << setw(16) << remoteNumber
        << left << setw(16) << "Remote"
        << right << setw(16) << fixed << setprecision(2) << remotePrice
        << right << setw(16) << fixed << setprecision(2) << totalRemotePrice << endl;

    cout << left << setw(16) << "Total before tax"
        << right << setw(48) << fixed << setprecision(2) << totalPrice << endl;

    cout << left << setw(16) << "Tax"
        << right << setw(48) << fixed << setprecision(2) << totalTax << endl;

    cout << left << setw(16) << "Total"
        << right << setw(48) << fixed << setprecision(2) << totalAfterTax << endl;

}