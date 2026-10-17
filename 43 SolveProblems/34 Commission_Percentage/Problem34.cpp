#include <iostream>
using namespace std;

int CommisionPercentage(float num)
{

    float Percentage = 0;
    if (num >= 1000000)
    {
        Percentage = .01;
    }
    else if (num >= 500000)
    {
        Percentage = .02;
    }
    else if (num >= 100000)
    {
        Percentage = .03;
    }
    else if (num >= 50000)
    {
        Percentage = .05;
    }
    else
    {
        Percentage = 0;
    }

    int TotalCommission = num * Percentage;
    return TotalCommission;
}

int main()
{
    double num;
    cout << "Enter your total sale: ";
    cin >> num;

    int TotalSale = CommisionPercentage(num);
    cout << TotalSale;
    return 0;
}