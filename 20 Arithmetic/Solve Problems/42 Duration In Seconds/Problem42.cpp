#include <iostream>
#include <string>
using namespace std;

int Duration(int manyDays, int manyHours, int manyMinutes, int manySeconds)
{
    int day = 60 * 60 * 24;
    int hour = 60 * 60;
    int minute = 60;

    int result = manyDays *day + manyHours *hour + manyMinutes *minute + manySeconds;

    return result;

}

int main()
{

    int manyDays;
    int manyHours;
    int manyMinutes;
    int manySeconds;

    cout << "Many days: ";
    cin >> manyDays;

    cout << "Many hours: ";
    cin >> manyHours;

    cout << "many minutes: ";
    cin >> manyMinutes;

    cout << "many seconds: ";
    cin >> manySeconds;

    int seconds = Duration(manyDays,manyHours,manyMinutes,manySeconds);

    cout << seconds;
    

    return 0;
}