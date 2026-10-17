#include <iostream>
using namespace std;

enum enWeek
{
    Friday = 1,
    Saturday = 2,
    Sunday = 3,
    Monday = 4,
    Tuseday = 5,
    Wednesday = 6,
    Thursday = 7,
};


string dayOfWeek(int day)
{
    enWeek oneDay;
    oneDay = enWeek(day);
    if (oneDay == Friday)
    {
        /* code */
        return "it's a friday ";
    }
    else if (oneDay == Saturday)
    {
        /* code */
        return "it's a saturday";
    }
    else if (oneDay == Sunday)
    {
        /* code */
        return "it's a sunday ";
    }
    else if (oneDay == Monday)
    {
        /* code */
        return "it's a Monday";
    }
    else if (oneDay == Tuseday)
    {
        /* code */
        return "it's a Tuseday";
    }
    else if (oneDay == Wednesday)
    {
        /* code */
        return "it's a Wednesday";
    }
    else if (oneDay == Thursday)
    {
        /* code */
        return "it's a Thursday";
    }
}

int main()
{
    int day;

    cout << "1: Friday\n"
         << "2: Saturday\n"
         << "3: Sunday\n"
         << "4: Monday\n"
         << "5: Tuesday\n"
         << "6: Wednesday\n"
         << "7: Thursday\n"
         << "Choose day by entering a number: ";
    cin >> day;
    cout << dayOfWeek(day);
    return 0;
}