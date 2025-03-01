#include <iostream>
using namespace std;

class CricketPlayer
{
private:
    string playerName;
    int jerseyNumber;
    double battingAverage;
    int matchCount;

public:
    CricketPlayer(const string &playerName = "NULL", int jerseyNumber = 0, double battingAverage = 0.0) : matchCount(0)
    {
        this->playerName = playerName;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
    }
    
    CricketPlayer* updateBattingAvg(double newScore)
    {
        battingAverage = ((battingAverage*matchCount)+newScore)/(matchCount+1);
        return this;
    }

    void playMatch(double newScores)
    {
        battingAverage = ((battingAverage*matchCount)+newScores)/(matchCount+1);
        matchCount++;
    }

    void displayPlayerStats() const
    {
        cout<<"\nPlayer name: "<<playerName<<endl;
        cout<<"jersey number: "<<jerseyNumber<<endl;
        cout<<"Batting average: "<<battingAverage<<endl;
    }
};

int main()
{
    CricketPlayer player1;
    player1.displayPlayerStats();

    CricketPlayer player2("Babar Azam", 7, 13.3);
    player2.displayPlayerStats();

    CricketPlayer player3("Dev Kumar", 7, 12.0);

    player3.updateBattingAvg(13);
    player3.displayPlayerStats();

    player3.playMatch(23);
    player3.displayPlayerStats();
    return 0;
}
