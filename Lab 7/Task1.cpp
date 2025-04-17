#include <iostream>
using namespace std;

class Account
{
protected:
    string accountNo;
    double balance;
    string accountHolderName;

public:
    Account(const string &accountNo, double balance = 0, const string &accountHolderName = "") : 
        accountNo(accountNo), balance(balance), accountHolderName(accountHolderName) {}

    void deposite(double amount)
    {
        if (amount < 0)
        {
            cout<<"\n"<<accountHolderName<<" Invalid Amount!..."<<endl;
            return;
        }
        balance += amount;
        cout<<"\n"<<accountHolderName<<" "<<amount<<" has been added to your balance!..."<<endl;
    }

    void withdraw(double amount)
    {
        if (amount < 0 || amount > balance)
        {
            if (amount < 0)
            {
                cout<<"\n"<<accountHolderName<<" Invalid Amount you are trying to withdraw!..."<<endl;
                return;
            }
            cout<<"\n"<<accountHolderName<<" Sorry, You are trying to withdraw amount more than balance!..."<<endl;
            return;
        }
        balance -= amount;
        cout<<"\n"<<accountHolderName<<" You have successfully withdrawl "<<amount<<endl;
    }

    virtual double calculateInterest() { return 0.0; }

    virtual void printStatement() {}

    void getAccountInfo() const
    {
        cout<<"\nAccount No: "<<accountNo<<endl;
        cout<<"Account Holder Name: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

class SavingAccount : public Account
{
private:
    double interestRate;
    double minimumBalance;

public:
    SavingAccount(const string &accountNo, double balance = 0, const string &accountHolderName = "", 
                double interestRate = 0.0, double minimumBalance = 0.0) : 
        Account(accountNo, balance, accountHolderName), interestRate(interestRate), 
        minimumBalance(minimumBalance) {}

    double calculateInterest() override
    {
        return balance*interestRate;
    }

    void printStatement() override
    {
        Account::getAccountInfo();
        cout<<"Interest Rate: "<<interestRate<<endl;
        cout<<"Minimum Balance: "<<minimumBalance<<endl;
    }
};

class CheckingAccount : public Account
{
public:
    CheckingAccount(const string &accountNo, double balance = 0, const string &accountHolderName = "") : 
        Account(accountNo, balance, accountHolderName) {}

    double calculateInterest() override
    {
        return 0.0;
    }

    void printStatement() override
    {
        Account::getAccountInfo();
    }
};

class FixedDepositeAccount : public Account
{
private:
    string maturityDate;
    double fixedInterestRate;

public:
    FixedDepositeAccount(const string &accountNo, double balance = 0, const string &accountHolderName = "", 
                       const string &maturityDate = "", double fixedInterestRate = 0.0) : 
        Account(accountNo, balance, accountHolderName), maturityDate(maturityDate), 
        fixedInterestRate(fixedInterestRate) {}

    double calculateInterest() override
    {
        return balance*fixedInterestRate;
    }

    void printStatement() override
    {
        Account::getAccountInfo();
        cout<<"Maturity Date: "<<maturityDate<<endl;
        cout<<"Fixed Interest Rate: "<<fixedInterestRate<<endl;
    }
};

int main()
{
    SavingAccount Dev("24K0028", 234523, "Dev Kumar", 2, 1000);
    CheckingAccount Sahil("24K1234", 432313, "Sahil Kumar");
    FixedDepositeAccount Gotam("24K9832", 635322, "Gotam Lal", "2-2-2025", 5);

    Dev.calculateInterest();
    Sahil.calculateInterest();
    Gotam.calculateInterest();

    Dev.deposite(500);
    Sahil.deposite(600);
    Gotam.deposite(700);

    Dev.withdraw(9000);
    Sahil.withdraw(35353532);
    Gotam.withdraw(42424);

    Dev.printStatement();
    Sahil.printStatement();
    Gotam.printStatement();
    return 0;
}
