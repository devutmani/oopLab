#include <iostream>
using namespace std;

class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    bool status;

public:
    SmartDevice() : deviceName("NULL"), deviceType("NULL"), status(false) {}

    SmartDevice(const string &name, const string &type, bool status = false) : deviceName(name), deviceType(type), status(status) {}

    void display() const
    {
        cout<<"\nDevice Name: "<<deviceName<<endl;
        cout<<"Device Type: "<<deviceType<<endl;
        cout<<"Status: "<<status<<endl;
    }

    ~SmartDevice()
    {
        cout<<"Farwell dear, "<<this->deviceName<<endl;
    }
};

int main()
{
    SmartDevice mixer("Cofee mixer", "mixing", true);
    mixer.display();

    cout << endl;
    SmartDevice vacuum("Robo-Vacuum", "Cleaning", false);
    vacuum.display();
    cout << endl;
    return 0;
}
