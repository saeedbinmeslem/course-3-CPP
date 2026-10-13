#include <iostream>
using namespace std;

int main()
{
    string Name;
    cout << "Etner your name: ";
    getline(cin,Name);

    int Age;
    cout << "Enter your age: ";
    cin >> Age;

    string City;
    cout << "Enter your City: ";
    cin.ignore();
    getline(cin,City);

    string Country;
    cout << "Enter your Country: ";
    getline(cin,Country);

    float Salary;
    cout << "Enter your Monthly salary: ";
    cin >> Salary;

    char Gender;
    cout << "Are you Male or Female: Enter (M/F): ";
    cin >> Gender;

    bool Married;
    cout << "Are you married: Enter(1/0)\n1 if true and 0 if false: ";
    cin >> Married;


    cout << "**************************" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "City: " << City << endl;
    cout << "Name: " << Country << endl;
    cout << "Monthly Salary: " << Salary << endl;
    cout << "Yearly Salary: " << Salary * 12 << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << Married << endl;
    cout << "**************************" << endl;

    return 0;

    
}