/*calculate hohw many months you need to settle the loan*/

#include <iostream>
using namespace std;

float settleLoan(float LoanAmount, float Monthsyouneed){

    return LoanAmount / Monthsyouneed;
}

int main(){

    float LoanAmount;
    cout << "Enter Loan Amount: ";
    cin >> LoanAmount;

    float Monthsyouneed;
    cout << "Enter in how many months you need to settle the loan: ";
    cin >> Monthsyouneed;

    float settleTheLoan = settleLoan(LoanAmount,Monthsyouneed);

    cout << "you have to pay " << settleTheLoan << " at least per months to settle the loan" << endl;
    

    return 0;

}