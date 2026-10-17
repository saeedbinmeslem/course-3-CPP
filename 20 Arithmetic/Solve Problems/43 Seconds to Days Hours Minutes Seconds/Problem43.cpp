#include <iostream>
using namespace std;

struct Time
{
    int ManyDays;
    int ManyHours;
    int ManyMinutes;
    int Manyseconds;
};

void TimeInSeconds(int seconds, Time &time)
{

    int day = 60 * 60 * 24;
    int hour = 60 * 60;
    int minute = 60;
    int Remainder;

    time.ManyDays = seconds / day;
    Remainder = seconds - time.ManyDays * day;

    time.ManyHours = Remainder / hour;
    Remainder = Remainder - time.ManyHours * hour;

    time.ManyMinutes = Remainder / minute;
    Remainder = Remainder - time.ManyMinutes * minute;

    time.Manyseconds = Remainder;
}

int main()
{

    Time time;

    int seconds;
    cout << "Enter seconds to show how many\ndays,hours,minutes, and seconds include it: ";
    cin >> seconds;

    TimeInSeconds(seconds, time);
    cout << time.ManyDays << " Days : " << time.ManyHours << " Hours : " << time.ManyMinutes << " Minutes : " << time.Manyseconds << " Seconds" << endl;

    return 0;
}