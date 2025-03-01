#include <iostream>
using namespace std;

class Battery
{
private:
    int capacity;
    string model;

public:
    void setCapacity(const int capacity)
    {
        this->capacity = capacity;
    }

    void setModel(const string model)
    {
        this->model = model;
    }

    int getCapacity() const {return capacity;}

    string getModel() const {return model;}
};

class SmartPhone
{
public:
    string name;
    string color;
    Battery battery;

public:
    SmartPhone(string name, string color, int capacity, string model) : name(name), color(color)
    {
        battery.setCapacity(capacity);
        battery.setModel(model);
    }

    void display()
    {
        cout<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Battery model: "<<battery.getModel()<<endl;
        cout<<"Battery capacity: "<<battery.getCapacity()<<"mAh"<<endl;
    }
};

int main()
{
    SmartPhone phone1("I phone X", "Black", 1500, "intel x3400b");
    SmartPhone phone2("Samsung S23 Ultra", "White", 2500, "samsung xs7700dk");

    phone1.display();
    phone2.display();
    return 0;
}
