#include <iostream>
#include <string>
using namespace std;

int main()
{

    string string1;
    string string2;
    string string3;

    cout << "Please enter String1?\n";
    getline(cin, string1);

    cout << "\nPlease enter string2?\n";
    getline(cin, string2);

    cout << "\nPlease enter string3?\n";
    getline(cin, string3);

    cout << "*************************************\n\n";

    cout << "The length of string1 is: " << string1.length() << endl;
    cout << "Charaters at 0,2,4,7 are : " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << endl;
    cout << "Concatenaion string2 and string3 = " << string2 + string3 << endl;

    int sum = stoi(string2) * stoi(string3);

    cout << string2 << " * " << string3 << " = " << sum << endl;

    return 0;
}