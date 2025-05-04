#include <iostream>
using namespace std;

class Activity
{
public:
    virtual double calculateCaloriesBurned() = 0;
};

class Running : public Activity
{
private:
    double distance;
    double time;

public:
    Running(double distance, double time) : distance(distance), time(time) {}

    double calculateCaloriesBurned() override
    {
        return distance*100; // supposing 100 calories burn in 1km
    }
};

class Cycling : public Activity
{
private:
    double speed;
    double time;

public:
    Cycling(double speed, double time) : speed(speed), time(time) {}

    double calculateCaloriesBurned() override
    {
        // firstly we'll find "distance" and as we know that --> distance = speed x time
        return (speed*time)*100; // supposing 100 calories burn in 1km
    }
};

int main()
{
    Running r(200, 10);
    Cycling c(400, 40);

    cout<<"\nCalories burned in running: "<<r.calculateCaloriesBurned()<<endl;
    cout<<"\nCalories burned in cycling: "<<c.calculateCaloriesBurned()<<endl;
    return 0;
}