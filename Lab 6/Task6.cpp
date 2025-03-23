#include <iostream>
using namespace std;

class Device
{
protected:
    string brand;
    string model;

public:
    Device(const string &brand, const string &model) : brand(brand), model(model) {}

    void display() const
    {
        cout<<"\nBrand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
    }
};

class Smartphone : virtual public Device
{
protected:
    int simSlotCount;

public:
    Smartphone(const string &brand, const string &model, int simSlotCount) : Device(brand, model), simSlotCount(simSlotCount) {}

    void display() const
    {
        Device::display();
        cout<<"Number of Sim slots: "<<simSlotCount<<endl;
    }
};

class Tablet : virtual public Device
{
protected:
    string stylishSupport;

public:
    Tablet(const string &brand, const string &model, const string stylishSupport) : Device(brand, model), stylishSupport(stylishSupport) {}

    void display() const
    {
        Device::display();
        cout<<"Stylish support: "<<stylishSupport<<endl;
    }
};

class HybridDevice : public Smartphone, public Tablet
{
public:
    HybridDevice(const string &brand, const string &model, int simSlotCount, const string &stylishSupport) : Device(brand, model), Smartphone(brand, model, simSlotCount), Tablet(brand, model, stylishSupport) {}

    void display() const
    {
        Smartphone::display();
        cout<<"Stylish support: "<<stylishSupport<<endl;
    }
};

int main()
{
    HybridDevice hd("Samsung", "S24 Ultra", 2, "Golden Alloys");
    hd.display();
    return 0;
}
