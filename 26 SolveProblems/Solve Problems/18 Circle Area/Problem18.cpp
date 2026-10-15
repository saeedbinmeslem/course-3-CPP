#include <iostream>
#include <cmath>
using namespace std;


float CircleArea(float radian){
    const float PI = 3.14;
    float Area = PI * pow(radian,2);
    return Area;

}
int main(){

    float Radian;
    cout << "Enter the value of radian: ";
    cin >> Radian;

    float area = CircleArea(Radian);
    
    cout << "The circle area is: " << ceil(area) << endl;
    
    return 0;
}