#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string model;
    double rate;

public:
    Vehicle(const string &model, double rate) : model(model), rate(rate) {}

    virtual double getDailyRate() = 0;
    virtual void displayDetails() = 0;
};

class Car : public Vehicle
{
public:
    Car(const string &model, double rate) : Vehicle(model, rate) {}

    double getDailyRate() override
    {
        return rate;
    }

    void displayDetails() override
    {
        cout<<"\nCar Model: "<<model<<endl;
        cout<<"Rate: "<<rate<<endl;
    }
};

class Bike : public Vehicle
{
public:
    Bike(const string &model, double rate) : Vehicle(model, rate) {}

    double getDailyRate() override
    {
        return rate;
    }

    void displayDetails() override
    {
        cout<<"\nBike Model: "<<model<<endl;
        cout<<"Rate: "<<rate<<endl;
    }
};

int main()
{
    Vehicle* vehicles[2];

    vehicles[0] = new Car("Rolls Roys", 45.0);
    vehicles[1] = new Bike("Honda CD 70", 17.0);

    for (int i = 0; i < 2; ++i) {
        vehicles[i]->displayDetails();
    }

    for (int i = 0; i < 2; ++i) {
        delete vehicles[i];
    }
    return 0;
}