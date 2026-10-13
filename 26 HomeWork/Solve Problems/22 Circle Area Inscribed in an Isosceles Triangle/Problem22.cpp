#include <iostream>
#include <cmath>
using namespace std;

float CircleArea(float A,float B){
    const float PI = 3.14;
    float Area = (PI * pow(B,2)/4) * ((2 * A - B) / (2 * A + B));

    return Area;

}
int main(){
    float A;
    float B;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    float area = CircleArea(A,B);

    cout << "Circle Area is: " << floor(area) << endl << area;

    return 0;

}