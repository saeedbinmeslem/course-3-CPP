#include <iostream>
using namespace std;

int main(){
    int day = 60 * 60 * 24;
    int hour = 60 * 60;
    int minute = 60;
    int Remainder;
    
    int seconds;
    cout << "Enter seconds to show how many\ndays,hours,minutes, and seconds include it: ";
    cin >> seconds;

    int manyDays = seconds / day;
    Remainder = seconds - manyDays * day;
    
    int manyHours = Remainder / hour;
    Remainder = Remainder - manyHours * hour;

    int manyMinute = Remainder / minute;
    Remainder = Remainder - manyMinute * minute;

    int manySeconds = Remainder;

    cout << manyDays << " Days : " << manyHours << " Hours : " << manyMinute << " Minutes : " << manySeconds << " Seconds" << endl ;
    
    return 0;

    
}