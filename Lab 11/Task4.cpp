#include <iostream>
using namespace std;

class FundError
{
public:
    const string what() const 
    {
        return "Fund is not right for withdraw!";
    }
};

class BankAccount 
{
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void withdraw(double amount) 
    {
        if (amount > balance) {
            throw(amount);
        }
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(500.0);
    
    cout << "Current Balance: $" << account.getBalance() << endl;
    
    try 
    {
        cout << "Enter amount for withdraw: $";
        double amount;
        cin >> amount;
        
        account.withdraw(amount);
        cout << "Withdrawal successful! New Balance: $" << account.getBalance() << endl;
    }

    catch (double amount) 
    {
        cout<<"Error: This amount is above of your current balance"<<amount<<endl;
        cout<<"Current Balance: $"<<account.getBalance()<<endl;
    }

    return 0;
}