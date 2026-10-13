#include <iostream>
#include <cmath>
using namespace std;


double CircleArea(double Diamatic){

    const float pi = 3.14;
    float Area = (pi * (pow(Diamatic,2))) / 4;
    return Area;
}

int main(){

    double diamatic;
    cout << "Enter the diamatic for the circle: ";
    cin >> diamatic;

    double area = CircleArea(diamatic);

    cout << "Circle area is: " << (area);

    return 0;
}