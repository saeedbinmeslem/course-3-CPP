#include <iostream>
using namespace std;

int main()
{
    float average[3];
    cout << "Enter 1: " << endl;
    cin >> average[0];

    cout << "Enter 2: " << endl;
    cin >> average[1];

    cout << "Enter 3: " << endl;
    cin >> average[2];

    cout << ((average[0] + average[1] + average[2]) / 3);

    return 0;
}