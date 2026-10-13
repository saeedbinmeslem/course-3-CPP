// Ask the user to enter a number then print number is half

#include <iostream>
using namespace std;

float HalfNumber(float number){

    float halfNumber = number / 2;
    return halfNumber;

}

int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;

    float num = HalfNumber(number);
    cout << "the half of number " << number << " is " << num << endl;
    return 0;
}