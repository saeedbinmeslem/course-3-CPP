/* swap between two variable */
#include <iostream>
using namespace std;



int main(){

    float num1 = 5;
    float num2 = 4;

    float temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << num1 << " " << num2;

    return 0;

}