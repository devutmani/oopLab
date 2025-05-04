#include <iostream>
using namespace std;

class SmartDevice
{
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void getStatus() const = 0;
};

class LightBulb : public SmartDevice
{
private:
    bool isOn;
    int brightness;

public:
    LightBulb(bool isOn = false, int brightness = 0) : isOn(isOn), brightness(brightness) {}

    void turnOn() override
    {
        if (isOn == true)
        {
            cout<<"Already truned On!..."<<endl;
            return;
        }
        cout<<"Turned On!..."<<endl;
    }

    void turnOff() override
    {
        if (isOn == false)
        {
            cout<<"Already truned Off!..."<<endl;
            return;
        }
        cout<<"Truned Off!..."<<endl;
    }

    void getStatus() const override
    {
        cout<<"\nLight Bulb Status: "<<isOn<<endl;
        cout<<"Brightness: "<<brightness<<endl;
    }
};

class Thermostat : public SmartDevice
{
private:
    bool isOn;
    double temperature;

public:
    Thermostat(bool isOn = false, double temperature = 37) : isOn(isOn), temperature(temperature) {}

    void turnOn() override
    {
        if (isOn == true)
        {
            cout<<"Already truned On!..."<<endl;
            return;
        }
        isOn = true;
        cout<<"Turned On!..."<<endl;
    }

    void turnOff() override
    {
        if (isOn == false)
        {
            cout<<"Already truned Off!..."<<endl;
            return;
        }
        isOn = false;
        cout<<"Truned Off!..."<<endl;
    }

    void getStatus() const override
    {
        cout<<"\nThermostat Status: "<<isOn<<endl;
        cout<<"Temperature: "<<temperature<<endl;
    }
};

int main()
{
    SmartDevice* devices[2];

    devices[0] = new LightBulb();
    devices[1] = new Thermostat();

    for (int i = 0; i < 2; i++)
    {
        devices[i]->getStatus();
        devices[i]->turnOff();
        devices[i]->turnOn();
    }

    for (int i = 0; i < 2; i++)
    {
        delete devices[i];
    }
    return 0;
}