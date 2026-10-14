#include <iostream>
using namespace std;

enum enGender {Male,Female};

enum enStatus {married,single};

struct stAdress
{
    /* data */
    string streetName;
    int buildNo;
    int zipCode;
};

struct employ
{
    string name;
    int Age;
    string City;
    string Country;
    float Salary;
    stAdress Adress;
    enGender gender;
    enStatus status;

};

int main()
{

    employ saeed;

    saeed.name = "Saeed";
    saeed.Age = 19;
    saeed.City = "Mukalla";
    saeed.Country = "Yemen";
    saeed.Salary = 1500;
    saeed.Adress.buildNo = 1352 ;
    saeed.Adress.streetName = "AL-Mosqbel street";
    saeed.Adress.zipCode =  1352;
    saeed.gender = enGender::Male;
    saeed.status = enStatus::single;


    cout << "**************************" << endl;
    cout << "Name: " << saeed.name << endl;
    cout << "Age: " << saeed.Age << endl;
    cout << "City: " << saeed.City << endl;
    cout << "Country: " << saeed.Country << endl;
    cout << "Monthly Salary: " << saeed.Salary << endl;
    cout << "Yearly Salary: " << saeed.Salary * 12 << endl;
    cout << "Gender: " << saeed.gender << endl;
    cout << "Married: " << saeed.status << endl;
    cout << "street name: " << saeed.Adress.streetName << endl;
    cout << "ZipCode: " << saeed.Adress.zipCode << endl;
    cout << "building number: " << saeed.Adress.buildNo << endl;
    cout << "**************************" << endl;

    return 0;
}