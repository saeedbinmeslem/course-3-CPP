#include <iostream>
using namespace std;

void ReadGrades(float Average[3])
{
    cout << "Enter 1: " << endl;
    cin >> Average[0];

    cout << "Enter 2: " << endl;
    cin >> Average[1];

    cout << "Enter 3: " << endl;
    cin >> Average[2];
}

float CalculateAverage(float Average[3])
{

    float result = ((Average[0] + Average[1] + Average[2]) / 3);
    return result;
}

int main()
{
    float Average[3];

    ReadGrades(Average);

    cout << "The Average of grades is: " << CalculateAverage(Average) << endl;
    return 0;
}