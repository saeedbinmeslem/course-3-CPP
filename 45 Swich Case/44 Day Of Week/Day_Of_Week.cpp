#include <iostream>
using namespace std;
enum enWeek
{
    Fri = 1,
    Sat = 2,
    Sun = 3,
    Mon = 4,
    Tus = 5,
    Wedn = 6,
    Thu = 7
};

string DayOfWeek(int day)
{
    enWeek week;
    week = enWeek(day);

    switch (week)
    {
    case Fri:
        /* code */
        return "Friday";
        break;
    case Sat:
        return "Saturday";
        break;

    case Sun:
        return "Sunday";
        break;
    case Mon:
        return "Monday";
        break;
    case Tus:
        return "Tuseday";
        break;
    case Wedn:
        return "Wednesday";
        break;
    case Thu:
        return "Thutsday";
        break;
    default:
        return "Wrong day";
        break;
    }
}

int main()
{
    cout << "1: Friday\n2: Saturday\n3: Sunday\n4: Monday\n5: Tuseday\n6: Wednesday\n7: Thursday\nChose day by Entering number: ";
    short day;
    cin >> day;

    cout << "today is " <<  DayOfWeek(day);

    return 0;
}