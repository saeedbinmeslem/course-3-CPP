#include <iostream>
#include <cmath>

using namespace std;


double CircleArea(double l){

    const double pi = 3.14;
    double Area = pow(l,2) / (4 * pi);
    return Area;
}

int main(){

    double diamatic;
    cout << "Enter the diamatic for the circle: ";
    cin >> diamatic;

    double area = CircleArea(diamatic);

    cout << "Circle area is: " << floor(area) << endl << area;

    return 0;
}