/*
mark1 = float(input('enter your mark1: '))
mark2 = float(input('enter your mark2: '))
mark3 = float(input('enter your mark3: '))

Average = (mark1 + mark2 + mark3) / 3
print('your average is ' + str(Average) + ' so you')
if Average >= 50:
    print('PASS')
else:
    print('FAIL')    */

#include <iostream>
using namespace std;

string Pass(float Mark)
{
    if (Mark >= 50 && Mark <= 100)
    {
        return "Pass";
    }
    else if (Mark >= 0 && Mark < 50)
    {

        return "Fail";
    }
    else
    {
        return "wrong value";
    }
}

int main()
{

    float Average;

    cout << "Enter youe Average: ";
    cin >> Average;

    cout << Pass(Average);

    return 0;
}
