// ask the user to enter 3 numbers then print their sum
#include <iostream>
using namespace std;

float AverageOfThree(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3;
}

int main()
{
    float num1;
    float num2;
    float num3;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Enter num3: ";
    cin >> num3;

    float sum = AverageOfThree(num1,num2,num3);

    cout << "the sum is " << sum << endl;

    return 0;
}