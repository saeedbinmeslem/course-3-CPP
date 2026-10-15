#include <iostream>
#include <cmath>
using namespace std;

float CircleArea(float A){
    const float PI = 3.14;

    float Area = (PI * pow(A,2)) / 4;
    return Area;

}
int main(){
    float A;
    cout << "Enter A to calculate circle area: ";
    cin >> A;
    
    float area = CircleArea(A);
    cout << "circle area is: " << ceil(area) << endl;


    return 0;

}