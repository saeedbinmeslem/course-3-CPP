#include <iostream>
#include <cmath>
using namespace std;

float RectangleArea(float diagonal, float sideArea)
{
    float Area = sideArea * sqrt(pow(diagonal, 2) - pow(sideArea, 2));
    return Area;
}

int main()
{
    float diagonal;
    float sideArea;

    cout << "Enter the value of diagonal: ";
    cin >> diagonal;

    cout << "Enter the value of side area: ";
    cin >> sideArea;

    float Area = RectangleArea(diagonal, sideArea);

    cout << "The rectangle area is: " << Area << endl;
    return 0;
}