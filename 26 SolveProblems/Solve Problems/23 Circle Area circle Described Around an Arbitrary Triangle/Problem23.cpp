#include <iostream>
#include <cmath>
using namespace std;

float CircleArea(float A,float B,float C){
    float P = (A + B + C) / 2;
    const float PI = 3.14;
    float Area = PI * pow(((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))),2);
    return Area;

}

int main(){
    float A;
    float B;
    float C;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    cout << "Enter C: ";
    cin >> C;

    float Area = CircleArea(A,B,C);

    cout << "Circle Area is: " << round(Area) << endl << Area;

    return 0;
}