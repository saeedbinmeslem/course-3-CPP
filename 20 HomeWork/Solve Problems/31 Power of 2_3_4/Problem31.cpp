#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float number;
    cout << "Enter a number to find its number of 2,3,and 4: ";
    cin >> number;

    cout << "Power of 2 is: " << pow(number,2) << endl;
    cout << "Power of 3 is: " << pow(number,3) << endl;
    cout << "Power of 4 is: " << pow(number,4) << endl;

    return 0;

}