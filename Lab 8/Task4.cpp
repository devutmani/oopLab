#include <iostream>
using namespace std;

class TrafficSystem
{
private:
    int cars;
    double waitTime;

public:
    TrafficSystem(int cars = 0, double waitTime = 0) : cars(cars), waitTime(waitTime) {}

    TrafficSystem operator+(const TrafficSystem &b)
    {
        return TrafficSystem(cars + b.cars, waitTime);
    }

    TrafficSystem operator-(const TrafficSystem &b)
    {
        return TrafficSystem(cars - b.cars, waitTime);
    }

    TrafficSystem operator*(int factor)
    {
        return TrafficSystem(cars, waitTime * factor);
    }

    bool operator==(const TrafficSystem &b)
    {
        return cars == b.cars;
    }

    void display() const
    {
        cout<<"\nCars: "<<cars<<endl;
        cout<<"Wait Time: "<<waitTime<<endl;
    }
};

int main()
{
    TrafficSystem a(30, 5);
    TrafficSystem b(20, 10);

    TrafficSystem c;
    c.display();

    c = a + b;
    c.display();

    c = a - b;
    c.display();

    c = a * 2;
    c.display();

    TrafficSystem d(10, 3);
    TrafficSystem e(10, 9);

    if (d == e)
    {
        cout<<"\nEqual!..."<<endl;
    }

    return 0;
}