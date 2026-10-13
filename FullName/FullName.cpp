#include <iostream>
using namespace std;

int main(){

    string firstname;
    string lastname;

    cout << "\a";

    cout << "Enter your first name: ";
    getline(cin,firstname);
    cout << "\a";
    cout << "Enter your last name: ";
    getline(cin,lastname);
    cout << firstname << " " << lastname;

    return 0;
}