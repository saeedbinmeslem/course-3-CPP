#include <iostream>
using namespace std;


int main(){

    int day = 60 * 60 * 24;
    int hour = 60 * 60;
    int minute = 60;

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

    cout << endl << manyDays * day + manyHours * hour + manyMinutes * minute + manySeconds << " Seconds" << endl;
}