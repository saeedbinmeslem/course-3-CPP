#include <iostream>
#include <cmath>
using namespace std;

double CircleArea(double A){
    const float PI = 3.14;

    double Area = (PI * pow(A,2)) / 4;
    return Area;

}
int main(){
    double A;
    cout << "Enter A to calculate circle area: ";
    cin >> A;
    
    double area = CircleArea(A);
    cout << "circle area is: " << area << endl;


    return 0;

}