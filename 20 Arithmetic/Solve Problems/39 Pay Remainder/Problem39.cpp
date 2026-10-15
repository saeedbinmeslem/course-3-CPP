#include <iostream>
using namespace std;

float Remainder(float TotalBill,float CashPiad){
    float Remainder = TotalBill - CashPiad;
    return Remainder;
    
}
int main(){

    float totalBill;
    float cashPaid;

    cout << "Enter totalbill: ";
    cin >> totalBill;

    cout << "Enter cash piad: ";
    cin >> cashPaid;

    float remainder = Remainder(totalBill,cashPaid);

    cout << "the remainder is: " << remainder << endl;

    return 0;
}