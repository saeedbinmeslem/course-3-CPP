#include <iostream>
#include <cmath>
using namespace std;

void PowerOf234(float number)
{
    for (size_t i = 2; i <= 4; i++)
    {
        /* code */
        cout << "Power of " << i << " is: " << pow(number, i) << endl;
    }
}

int main()
{

    float number;
    cout << "Enter a number to find its number of 2,3,and 4: ";
    cin >> number;

    PowerOf234(number);

    return 0;
}