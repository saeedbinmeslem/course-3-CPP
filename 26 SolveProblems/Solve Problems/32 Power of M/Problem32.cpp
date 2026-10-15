#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float number;
    float M;

    cout << "Enter a number: ";
    cin >> number;

    cout << "what power you need for: ";
    cin >> M;

    float result = pow(number, M);
    cout << number << " power " << M << " is: " << round(result) << endl;

    return 0;
}