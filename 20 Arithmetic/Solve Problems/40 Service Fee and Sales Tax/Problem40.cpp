#include <iostream>
using namespace std;

float TotalBill(float BillValue)
{
    float ServiceFee = BillValue + BillValue * .10;
    float SalesTax = ServiceFee + ServiceFee * .16;
    return SalesTax;
}

int main()
{
    float BillValue;
    cout << "Enter bill value: ";
    cin >> BillValue;

    cout << "Total bill is: " << TotalBill(BillValue) << endl;

    return 0;
}