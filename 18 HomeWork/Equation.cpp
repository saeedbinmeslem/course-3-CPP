#include <iostream>
using namespace std;

int main()
{
    short int num1;
    cout << "Enter num1: ";
    cin >> num1;
    short int num2 = 20;
    cout << "Enter num2: ";
    cin >> num2;
    short int num3 = 30;
    cout << "Enter num3: ";
    cin >> num3;
    
    cout << num2 << " + " << endl;
    cout << num3 << " + " << endl;
    cout << num1 << endl;

    cout << "__________________________\n\n";
    int total = num1 + num2 + num3;
    cout << "Total = " << total;


    return 0;
}