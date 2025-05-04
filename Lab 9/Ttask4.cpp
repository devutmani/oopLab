#include <iostream>
using namespace std;

class PaymentMethod
{
public:
    virtual bool processPayment(double amount) = 0;
};

class CreditCard : public PaymentMethod
{
private:
    string cardNumber;

public:
    CreditCard(const string &cardNumber) : cardNumber(cardNumber) {}

    bool processPayment(double amount) override
    {
        if (amount < 0)
        {
            cout<<"\nInvalid Amount!..."<<endl;
            return false;
        }

        string userInput;
        cout<<"\nEnter card Number: ";
        cin>>userInput;

        if (this->cardNumber == userInput)
        {
            cout<<"Credit card payment processed successfully!..."<<endl;
            return true;
        }
        cout<<"Sorry, Credit card payment not successfully processed!..."<<endl;
        return false;
    }
};

class DigitalWallet : public PaymentMethod
{
private:
    double balance;

public:
    DigitalWallet(double balance) : balance(balance) {}

    bool processPayment(double amount) override
    {
        if (amount <= balance)
        {
            cout<<"\nDigital Wallet payment of "<<amount<<" successfully processed!..."<<endl;
            balance -= amount;
            cout<<"Remaining balance: "<<balance<<endl;
            return true;
        }
        else
        {
            cout<<"\nSorry, Digital Wallet payment not successfully processed!..."<<endl;
            return false;
        }
    }
};

int main()
{
    CreditCard nayapay("123-0022-1234-0928");
    DigitalWallet easypesa(120000);

    nayapay.processPayment(20000);

    cout<<"\nDigital Wallet";
    easypesa.processPayment(200000);
    easypesa.processPayment(80000);
    return 0;
}