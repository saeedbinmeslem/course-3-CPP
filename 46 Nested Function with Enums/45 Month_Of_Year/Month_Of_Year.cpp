#include <iostream>
using namespace std;

enum enMonths
{
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    Jul = 7,
    Aug = 8,
    sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12
};

void ShowMenu()
{
    cout << "1: January\n2: February\n3: March\n4: April\n5: May\n6: June\n7: July\n8: August\n9:september\n10:October\n11: November\n12: December\nChose Month by Enter number: ";
}

enMonths ReadMonth()
{
    int month;
    cin >> month;
    return enMonths(month);
}

string GetMonth(enMonths Month)
{

    switch (Month)
    {
    case Jan:
        /* code */
        return "January";
        break;
    case Feb:
        return "February";
        break;
    case Mar:
        return "March";
        break;
    case Apr:
        return "April";
        break;
    case May:
        return "May";
        break;
    case Jun:
        return "June";
        break;
    case Jul:
        return "July";
        break;
    case Aug:
        return "August";
        break;
    case sep:
        return "September";
        break;
    case Oct:
        return "October";
        break;
    case Nov:
        return "November";
        break;
    case Dec:
        return "December";
        break;
    default:
        return "Wrong";
        break;
    }
}

string Month()
{
    return GetMonth(ReadMonth());
}

int main()
{
    cout << "\a";
    ShowMenu();
    string themonth = Month();
    cout << "this is " << themonth << " Month!";

    return 0;
}