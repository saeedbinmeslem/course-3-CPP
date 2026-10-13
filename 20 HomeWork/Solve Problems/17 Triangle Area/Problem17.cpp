#include <iostream>
using namespace std;

double TriangleArea(double base,double hight){

    double Area = base / 2 * hight;
    return Area;

}

int main(){

    double base;
    double hight;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the hight: ";
    cin >> hight;

    double area = TriangleArea(base,hight);

    cout << "the triangle area is: " << area;

    return 0;


}