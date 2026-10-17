/*
def ATMPin(PassWord):
    balance = 7500
    while True:
        if PassWord == 1234:
            return balance
        else:
            print('wrong PassWord')
            PassWord = int(input("Enter the PassWord: "))

PassWord = int(input("Enter the PassWord: "))

print(ATMPin(PassWord))
*/
#include <iostream>
#include <string>
using namespace std;

string ATMPin(int PassWord)
{
    int Balance = 7500;
    if (PassWord == 1234)
    {
        return to_string(Balance);
    }
    else
    {
        return "Wrong PassWord";
    }
}

int main()
{
    int PassWord;
    cout << "Enter PassWord: ";
    cin >> PassWord;
    cout << ATMPin(PassWord);
    return 0;
}