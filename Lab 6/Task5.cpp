#include <iostream>
using namespace std;

class vehicle
{
protected:
    string model;
    int year;

public:
    vehicle(const string &model, int year) : model(model), year(year) {}

    void display()
    {
        cout<<"\nModel: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

class Car : public vehicle
{
protected:
    int doorCount;
    string fuelEfficiency;

public:
    Car(const string &model, int year, int doorCount, const string &fuelEfficiency) : vehicle(model, year), doorCount(doorCount), fuelEfficiency(fuelEfficiency) {}

    void display()
    {
        vehicle::display();
        cout<<"Number of doors: "<<doorCount<<endl;
        cout<<"Fuel efficiency: "<<fuelEfficiency<<endl;
    }
};

class ElectricCar : public Car
{
private:
    int battery;

public:
    ElectricCar(const string &model, int year, int doorCount, const string &fuelEfficiency, int battery) : Car(model, year, doorCount, fuelEfficiency), battery(battery) {}

    void display()
    {
        Car::display();
        cout<<"Battery: "<<battery<<" MW"<<endl;
    }
};

int main()
{
    ElectricCar tesla("Roki Benz", 2026, 2, "Good", 5650);
    tesla.display();

    return 0;
}
