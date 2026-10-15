/* notice:
 penny = 1;
 nickel =  5;
 dime = 10;
 quarter = 25;
 dollar = 100
    */

#include <iostream>

using namespace std;

struct stPiggyBank
{
    double penny;
    double nickel;
    double dime;
    double quarter;
    double dollar;
    double Totalpennies;
    double Totaldollars;
};

void PiggyBankFunction(stPiggyBank &PiggyBank)
{
    PiggyBank.Totalpennies = PiggyBank.penny + PiggyBank.nickel * 5 + PiggyBank.dime * 10 + PiggyBank.quarter * 25 + PiggyBank.dollar * 100;
    PiggyBank.Totaldollars = PiggyBank.Totalpennies / 100;
}

int main()
{

    stPiggyBank PiggyBank;

    cout << "penny: ";
    cin >> PiggyBank.penny;

    // cout << "Nickel: ";
    // cin >> PiggyBank.nickel;

    // cout << "dime: ";
    // cin >> PiggyBank.dime;

    // cout << "Quarter: ";
    // cin >> PiggyBank.quarter;

    // cout << "Dollar: ";
    // cin >> PiggyBank.dollar;

    PiggyBankFunction(PiggyBank);

    return 0;
}