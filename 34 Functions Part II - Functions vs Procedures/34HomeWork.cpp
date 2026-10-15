#include <iostream>
using namespace std;

void MySumProcedures()
{

    float number1;
    float number2;
    cout << "Please enter Number1?" << endl;
    cin >> number1;

    cout << "\nPlease enter number2?" << endl;
    cin >> number2;
    cout << "******************************************" << endl;
    cout << number1 + number2;
    cout << endl;

}

float MySumFunction()
{
    float number1;
    float number2;
    cout << "Please enter Number1?" << endl;
    cin >> number1;

    cout << "\nPlease enter number2?" << endl;
    cin >> number2;
    cout << "******************************************" << endl;

    return number1 + number2;
}

int main()
{
    MySumProcedures();
    cout << MySumFunction();
    return 0;
}