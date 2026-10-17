#include <iostream>
#include <string>
#include <cmath>

using namespace std;
enum entypeOfOperation
{
    pluss = '+',
    Minus = '-',
    cross = '*',
    provide = '/',
    mod = '%',
};

string SimpleCalculate(float num1, char typeOfOperation, float num2)
{
    entypeOfOperation Operation;
    Operation = (entypeOfOperation) typeOfOperation;


    if (Operation == pluss)
    {
        return to_string(num1 + num2);
    }
    else if (Operation == Minus)
    {
        return to_string(num1 - num2);
    }
    else if (Operation == cross)
    {
        return to_string(num1 * num2);
    }
    else if (Operation == provide)
    {
        return to_string(num1 / num2);
    }
    else if (Operation == mod)
    {
        return to_string(int(num1) % int(num2));
    }
    else
    {
        return "wrong operation";
    }
}

int main()
{

    char typeOfOperation;
    float num1;
    float num2;

    cout << "Enter first numbers: ";
    cin >> num1;

    cout << "Enter type of opreation: ";
    cin >> typeOfOperation;

    cout << "Enter second numbers: ";
    cin >> num2;

    cout << SimpleCalculate(num1, typeOfOperation, num2);

    return 0;
}