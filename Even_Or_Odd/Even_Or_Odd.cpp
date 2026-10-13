#include <iostream>
using namespace std;

string EvenOrOdd(int number){
    if( number % 2 == 0){
        return "Even number";
    }else{
        return "Odd Number";
    };
};

int main(){
    int num;
    cout << "even or add: ";
    cin >> num;

    cout << EvenOrOdd(num);

    return 0;
       
}