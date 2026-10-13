#include <iostream>
using namespace std;

float RectangleArea(float high, float width){

    float Area = high * width;

    return Area;
}

int main(){
    float high;
    float width;

    cout << "Enter high: ";
    cin >> high;

    cout << "Enter Width: ";
    cin >> width;

    cout << "Rectangle Area is: " << RectangleArea(high,width);

    return 0;


}