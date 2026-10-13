/*
 penny = 1;
 nickel =  5;
 dime = 10;
 quarter = 25;
 dollar = 100
    */

#include <iostream>

using namespace std;

int main(){

    double penny;
    double nickel;
    double dime;
    double quarter;
    double dollar;

    cout << "penny: ";
    cin >> penny;

    cout << "Nickel: ";
    cin >> nickel;

    cout << "dime: ";
    cin >> dime;

    cout << "Quarter: ";
    cin >> quarter;

    cout << "Dollar: ";
    cin >> dollar;

    double pennies = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
    double dollars = pennies / 100;

    cout << pennies << " Pennies" << endl;
    cout << dollars << " Dollars" << endl;

    return 0;
}