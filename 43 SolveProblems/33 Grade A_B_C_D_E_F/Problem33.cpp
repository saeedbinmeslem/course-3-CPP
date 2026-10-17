/*
def Pass(e):
    if e >= 90 and e <= 100:
        result = "A"
    elif e >= 80:
        result = "B"
    elif e >= 70:
        result = "C"
    elif e >=60:
        result = "D"
    elif e >= 50:
        result = "E"
    else:
        result = "F"

    return result


mark = float(input('Enter your mark: '))
print(Pass(mark))
*/

#include <iostream>
using namespace std;

string Pass(float Mark)
{
    if (Mark > 100 || Mark < 0)
    {
        return "Wrong value";
    }
    else if (Mark >= 90)
    {
        return "A";
    }
    else if (Mark >= 80)
    {
        return "B";
    }
    else if (Mark >= 70)
    {
        return "C";
    }
    else if (Mark >= 60)
    {
        return "D";
    }
    else if (Mark >= 50)
    {
        return "E";
    }
    else
    {
        return "F";
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