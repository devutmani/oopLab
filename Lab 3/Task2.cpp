#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    double pi;

public:
    Circle(double radius = 0)
    {
        this->radius = radius;
        pi = 3.14195;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }

    double getRadius()
    {
        return radius;
    }

    double getArea()
    {
        return (pi*radius*radius);
    }

    double getDiameter()
    {
        return 2*radius;
    }

    double getCircumference()
    {
        return (2*pi*radius);
    }

    void display()
    {
        cout<<"\nRadius of Circle: "<<radius<<endl;
        cout<<"Area of Circle: "<<getArea()<<endl;
        cout<<"Diameter of Circle: "<<getDiameter()<<endl;
        cout<<"Circumference of Circle: "<<getCircumference()<<endl;
    }
};

int main()
{
    Circle c1(3.4);
    cout<<"\nRadius of Circle: "<<c1.getRadius()<<endl;
    cout<<"Area of Circle: "<<c1.getArea()<<endl;
    cout<<"Diameter of Circle: "<<c1.getDiameter()<<endl;
    cout<<"Circumference of Circle: "<<c1.getCircumference()<<endl;

    c1.setRadius(1.2);
    cout<<"\nUpdated radius is: "<<c1.getRadius()<<" "<<endl;

    c1.display();
    return 0;
}
