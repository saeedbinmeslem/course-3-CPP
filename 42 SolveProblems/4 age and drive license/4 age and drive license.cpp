#include <iostream>
using namespace std;

int main()
{

    bool DriveLicense;
    int Age;

    cout << "Do you have a driving license?: ";
    cin >> DriveLicense;

    cout << "How old are you ? ";
    cin >> Age;

    if (DriveLicense == true && Age >= 18)
    {
        cout << "Hired";
    }
    else
    {
        cout << "Rejected";
    }
    return 0;
}