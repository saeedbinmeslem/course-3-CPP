/* swap between two variable */
#include <iostream>
using namespace std;

void Swap(float &num1, float &num2)
{
    float temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{

    float num1 = 5;
    float num2 = 4;
    Swap(num2,num1);
    cout << "num1: " <<  num1 << " num2: " << num2;

    return 0;
}