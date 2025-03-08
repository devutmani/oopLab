#include <iostream>
using namespace std;

class LoanHelper
{
private:
    double loanAmount;
    int months;
    const double interestRate;

    void calculateInterestAmount() const
    {
        if (interestRate < 0 || interestRate > 0.5)
        {
            cout<<"\nInterest rate is out of given range!..."<<endl;
            return;
        }

        double interestAmount = (loanAmount/months)*interestRate;
        cout<<"\nYou have to pay "<<interestAmount<<" for "<<months<<" months to repay your loan."<<endl;
    }

public:
    LoanHelper(double amount, int month, double interestRate) : loanAmount(amount), months(month), interestRate(interestRate)
    {
        if (interestRate < 0 || interestRate > 0.5)
        {
            cout<<"\nInterest rate is out of given range!..."<<endl;
            return;
        }
        this->calculateInterestAmount();
    }
};

int main()
{
    LoanHelper loan1(100000, 12, 0.5);
    LoanHelper loan2(2300, 8, 0.6);

    return 0;
}
