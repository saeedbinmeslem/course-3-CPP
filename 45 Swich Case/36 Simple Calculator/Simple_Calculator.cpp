#include <iostream>
#include <string>

using namespace std;

enum enTypeOfOperation
{
    Plus = '+',
    Minus = '-',
    cross = '*',
    provide = '/',
    mod = '%'
};

string SimpleCalculate(float num1, char type, float num2)
{
    enTypeOfOperation typeOf;
    typeOf = enTypeOfOperation(type);

    switch (typeOf)
    {
    case Plus:
        /* code */
        return to_string(num1 + num2);
        break;
    case Minus:
        return to_string(num1 - num2);
        break;
    case cross:
        return to_string(num1 * num2);
        break;
    case provide:
        return to_string(num1 / num2);
        break;
    case mod:
        return to_string(int(num1) - int(num2));
        break;
    default:
    return "Wrong operation";
        break;
    }
}

int main()
{

    float num1;
    float num2;
    char TypeOfOperation;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter type of operation: ";
    cin >> TypeOfOperation;

    cout << "Enter num2: ";
    cin >> num2;

    cout << SimpleCalculate(num1,TypeOfOperation,num2);

    return 0;
}