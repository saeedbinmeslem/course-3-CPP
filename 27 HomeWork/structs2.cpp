#include <iostream>
using namespace std;

struct employ
{
    string name;
    int Age;
    string City;
    string Country;
    float Salary;
    char Gender;
    bool status;
};

int main()
{

    employ saeed;

    cout << "Enter the name: ";
    getline(cin, saeed.name);

    cout << "Enter the age: ";
    cin >> saeed.Age;

    cout << "Enter the city: ";
    cin.ignore();
    getline(cin, saeed.City);

    cout << "Enter the country: ";
    getline(cin, saeed.Country);

    cout << "Enter your Salary: ";
    cin >> saeed.Salary;

    cout << "male or female,(Enter M/F): ";
    cin >> saeed.Gender;

    cout << "Married or not\nif yes Enter 1, if not Enter 0: ";
    cin >> saeed.status;

    cout << "**************************" << endl;
    cout << "Name: " << saeed.name << endl;
    cout << "Age: " << saeed.Age << endl;
    cout << "City: " << saeed.City << endl;
    cout << "Country: " << saeed.Country << endl;
    cout << "Monthly Salary: " << saeed.Salary << endl;
    cout << "Yearly Salary: " << saeed.Salary * 12 << endl;
    cout << "Gender: " << saeed.Gender << endl;
    cout << "Married: " << saeed.status << endl;
    cout << "**************************" << endl;

    return 0;
}