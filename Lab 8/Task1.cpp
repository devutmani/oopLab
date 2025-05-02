#include <iostream>
using namespace std;

class Time;

class Speed
{
private:
    double speed;

public:
    Speed(double speed = 0) : speed(speed) {}

    friend double calculateDistance(const Speed &s, const Time &t);
};

class Time
{
private:
    double time;

public:
    Time(double time = 0) : time(time) {}

    friend double calculateDistance(const Speed &s, const Time &t);
};

double calculateDistance(const Speed &s, const Time &t)
{
    return s.speed*t.time;
}

int main()
{
    Speed speed(50.8);
    Time time(9);

    double distance = calculateDistance(speed, time);
    cout << "Distance traveled: " << distance << " km" << endl;

    return 0;
}