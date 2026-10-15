/*calculate hohw many months you need to settle the loan*/

#include <iostream>
using namespace std;

float settleLoan(float LoanAmount, float MonthlyPayment){

    return LoanAmount / MonthlyPayment;
}

int main(){

    float LoanAmount;
    cout << "Enter Loan Amount: ";
    cin >> LoanAmount;

    float MonthlyPayment;
    cout << "Enter Monthly payment: ";
    cin >> MonthlyPayment;

    float settleTheLoan = settleLoan(LoanAmount,MonthlyPayment);

    cout << "you need " << settleTheLoan << " months to settle the loan" << endl;
    

    return 0;

}