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

void ShowThwMenu()
{
    cout << "1: Friday\n2: Saturday\n3: Sunday\n4: Monday\n5: Tuseday\n6: Wednesday\n7: Thursday\nChose day by Entering number: ";
}

enWeek readDay()
{
    short int day;
    cin >> day;
    return enWeek(day);
}

string DayOfWeek(enWeek day)
{

    switch (day)
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
    ShowThwMenu();    
    cout << "today is " << DayOfWeek(readDay());
    return 0;
}