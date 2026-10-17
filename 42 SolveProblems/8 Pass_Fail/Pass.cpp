#include <iostream>
using namespace std;

string Pass(float Mark)
{
    if (Mark >= 50)
    {
        return "Pass";
    }
    else
    {
        return "Fail";
    }
}

int main()
{

    float Mark;

    cout << "Enter your Mark: ";
    cin >> Mark;

    cout << Pass(Mark);

    return 0;
}