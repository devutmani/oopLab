#include <iostream>
using namespace std;

class WaterBottle
{
private:
    string company;
    string color;
    float capacity;

public:

    void setDetail(string comp, string col, float cap)
    {
        company = comp;
        color = col;
        capacity = cap;
    }

    void setCapacity(float cap)
    {
        capacity = cap;
    }

    void display()
    {
        cout<<"\nCompany: "<<company<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Capacity: "<<capacity<<"liters"<<endl;
    }
};

int main()
{
    WaterBottle b1;
    b1.setDetail("Monarch", "Transparent", 20);
    b1.display();

    float capacity;
    cout<<"\nEnter the capacity of bottle if you want to update other wise enter '0': ";
    cin>>capacity;

    if (capacity != 0)
    {
        b1.setCapacity(capacity);
        b1.display();
        return 0;
    }
    cout<<endl;
    return 0;
}
