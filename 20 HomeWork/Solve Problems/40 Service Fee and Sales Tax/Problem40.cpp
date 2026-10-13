#include <iostream>
using namespace std;

int main(){
    float BillValue;
    cout << "Enter bill value: ";
    cin >> BillValue;


    float ServiceFee = BillValue + BillValue * .10;
    float SalesTax = ServiceFee + ServiceFee * .16;

    float TotalBill = SalesTax;

    cout << "Total bill is: " << TotalBill << endl;


    return 0;
}