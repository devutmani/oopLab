#include <iostream>
using namespace std;

class Currency
{
protected:
    double amount;
    string currencyCode;
    string currencySymbol;
    double exchangeRate;

public:
    Currency(double amount, const string &currencyCode, const string &currencySymbol, double exchangeRate) : amount(amount), currencyCode(currencyCode), currencySymbol(currencySymbol), exchangeRate(exchangeRate) {}

    virtual double convertToBase() const
    {
        return amount * exchangeRate;
    }

    virtual double convertTo(const Currency &currency) const
    {
        double baseAmount = convertToBase();
        return baseAmount / currency.exchangeRate;
    }

    virtual void displayCurrency() const
    {
        cout<<amount<<" "<<currencySymbol<<" ("<<currencyCode<<")"<<endl;
    }
};

class Dollar : public Currency
{
public:
    Dollar(double amount, const string &currencyCode, const string &currencySymbol, double exchangeRate) : Currency(amount, currencyCode, currencySymbol, exchangeRate) {}

    double convertToBase() const
    {
        return amount * exchangeRate;
    }

    void displayCurrency() const
    {
        cout<<amount<<" "<<currencySymbol<<"(US Dollars)"<<endl;
    }
};

class Euro  : public Currency
{
public:
    Euro(double amount, const string &currencyCode, const string &currencySymbol, double exchangeRate) : Currency(amount, currencyCode, currencySymbol, exchangeRate) {}

    double convertToBase() const
    {
        return amount * exchangeRate;
    }

    void displayCurrency() const
    {
        cout<<amount<<" "<<currencySymbol<<"(Euros)"<<endl;
    }
};

class Rupee : public Currency
{
public:
    Rupee(double amount, const string &currencyCode, const string &currencySymbol, double exchangeRate) : Currency(amount, currencyCode, currencySymbol, exchangeRate) {}

    double convertToBase() const
    {
        return amount * exchangeRate;
    }

    void displayCurrency()
    {
        cout<<amount<<" "<<currencySymbol<<" (Indian Rupees)"<<endl;
    }
};

int main()
{
    Dollar temp1(2342, "USD", "$", 3.2);
    Euro temp2(985678, "INR", "$", 3.2);
    Rupee temp3(85732, "Rs", "$", 3.2);

    temp1.convertToBase();
    temp2.convertToBase();
    temp3.convertToBase();

    temp1.displayCurrency();
    temp2.displayCurrency();
    temp3.displayCurrency();
    return 0;
}