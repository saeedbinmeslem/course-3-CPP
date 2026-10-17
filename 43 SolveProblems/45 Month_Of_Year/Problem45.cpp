#include <iostream>
using namespace std;
enum enMonths
{
    january = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    september = 9,
    October = 10,
    November = 11,
    December = 12,
};

string monthFunction(int monthNumber)
{
    enMonths month;
    month = enMonths(monthNumber);

    if (month == january)
    {
        /* code */
        return "it is a January";
    }
    else if (month == February)
    {
        /* code */
        return "it is a February";
    }
    else if (month == March)
    {
        /* code */
        return "it is a March";
    }
    else if (month == April)
    {
        /* code */
        return "it is a April";
    }
    else if (month == May)
    {
        /* code */
        return "it is a May";
    }
    else if (month == June)
    {
        /* code */
        return "it is a June";
    }
    else if (month == July)
    {
        /* code */
        return "it is a July";
    }
    else if (month == August)
    {
        /* code */
        return "it is a August";
    }
    else if (month == september)
    {
        /* code */
        return "it is a Septemper";
    }
    else if (month == October)
    {
        /* code */
        return "it is a October";
    }else if (month == November)
    {
        /* code */
        return "it is a November";
    }else if (month == December)
    {
        /* code */
        return "it is a December";
    }else{
        return "wrong number,Please enter month number to print it";
    }
    
    
}

int main()
{
    cout << "1: January\n2: February\n3: March\n4: April\n5: May\n6: June\n7: July\n8: August\n9:september\n10:October\n11: November\n12: December\nChose day by Enter number: " << endl;
    short monthNumber;
    cin >> monthNumber;

    cout << monthFunction(monthNumber);

    return 0;
}