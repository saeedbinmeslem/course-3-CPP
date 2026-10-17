#include <iostream>
using namespace std;

struct stPerson
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadPersonInfo(stPerson &Person)
{
    cout << "Enter First name: ";
    getline(cin, Person.FirstName);

    cout << "Enter Last name: ";
    getline(cin, Person.LastName);

    cout << "Enter how old is person: ";
    cin >> Person.Age;

    cout << "Enter the phone number: ";
    cin.ignore();
    getline(cin, Person.Phone);
}

void PrintPersonInfo(stPerson Person)
{
    cout << "***************************************" << endl;
    cout << Person.FirstName << endl;
    cout << Person.LastName << endl;
    cout << Person.Age << endl;
    cout << Person.Phone << endl;
    cout << "***************************************" << endl;
}

void ReadAllPersons(stPerson Person[2])
{
    ReadPersonInfo(Person[0]);
    cout << endl
         << "Enter infos for person 2: " << endl;
    ReadPersonInfo(Person[1]);
}

void PrintAllPersons(stPerson Person[2])
{
    PrintPersonInfo(Person[0]);
    PrintPersonInfo(Person[1]);
}

int main()
{

    stPerson person[2];

    ReadAllPersons(person);
    PrintAllPersons(person);
    return 0;
}