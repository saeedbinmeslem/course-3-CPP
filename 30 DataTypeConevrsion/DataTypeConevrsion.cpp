#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{

    string st1 = "43.22";
    int num1 = 20;
    double num2 = 33.5;
    float num3 = 55.23;

    //convert st1 to double,float,and integer
    int ist1 = stoi(st1);
    float fst1 = stof(st1);
    double dst1 = stod(st1);
    
    // convert num1 to string
    string snum1 = to_string(num1);

    //convert num2 to string
    string snum2 = to_string(num2);

    //convert num3 to string
    string snum3 = to_string(num3);

    //conver num3 to integer by three different ways;
    
    int inum3;
    inum3 = num3;
    inum3 = (int) num3;
    inum3 = int(num3);
    
    cout << ist1 << typeid(ist1).name() << "  " << fst1 << typeid(fst1).name() << "  " << dst1 << typeid(dst1).name() << "  " << endl << endl;
    cout << snum1 << typeid(snum1).name() << endl << endl;
    cout << snum2 << typeid(snum2).name() <<  endl << endl;
    cout << snum3 << typeid(snum3).name() << endl << endl;
    cout << inum3 << typeid(inum3).name() << endl << endl;

    return 0;
}