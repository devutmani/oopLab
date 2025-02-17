#include <iostream>
using namespace std;

class BoardMarker
{
private:
    bool refillable;
    bool inkStatus;

public:
    string company;
    string color;

    void setAttributes(string comp, string col)
    {
        company = comp;
        color = col;
        refillable = true;
        inkStatus = true;
    }

    void write()
    {
        if (inkStatus == false)
        {
            cout<<"\nWriting is not possible!."<<endl;
            return;
        }
        cout<<"\nWriting..."<<endl;
        inkStatus = false;
        return;
    }

    void refill()
    {
        if (refillable == true && inkStatus == false)
        {
            inkStatus = true;
            return;
        }
        cout<<"This marker is not refillable!..."<<endl;
        return;
    }

    void display()
    {
        cout<<"Company: "<<company<<endl;
        cout<<"Color is: "<<color<<endl;
    }
};

int main()
{
    BoardMarker m1;
    m1.setAttributes("Doller", "Red");
    m1.write();
    m1.refill();

    cout<<endl;
    m1.display();
    return 0;
}
