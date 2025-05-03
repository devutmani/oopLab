#include <iostream>
using namespace std;

class BallsFaced;

class Runs
{
private:
    int runs;

public:
    Runs(int runs = 0) : runs(runs) {}

    friend double calculateStrikeRate(const Runs &r, const BallsFaced &b);
};

class BallsFaced
{
private:
    int balls;

public:
    BallsFaced(int balls) : balls(balls) {}

    friend double calculateStrikeRate(const Runs &r, const BallsFaced &b);
};

double calculateStrikeRate(const Runs &r, const BallsFaced &b)
{
    return (r.runs/b.balls)*100;
}

int main()
{
    Runs r(200);
    BallsFaced b(12);

    double strikeRate = calculateStrikeRate(r, b);
    cout<<"Strike Rate: "<<strikeRate<<endl;
    return 0;
}