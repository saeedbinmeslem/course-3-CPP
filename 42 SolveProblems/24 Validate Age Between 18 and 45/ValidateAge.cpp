/*
age = int(input('How old are you? '))

def vaildage(s):
    if s > 18 and s < 45:
        return "Vaild age"
    else:
        return "Invaild age"

print(vaildage(age))
*/
#include <iostream>
using namespace std;

string vaildage(int age)
{
    if (age > 18 and age < 45)
    {
        return "Vaild age";
    }
    else
    {
        return "Invaild age";
    }
}

int main(){

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << vaildage(age);

    return 0;
}