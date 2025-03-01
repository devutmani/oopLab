#include <iostream>
using namespace std;

class FootballPlayer
{
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer() : playerName("Unknown Player"), position("Benchwarmer"), goalCount(0) {}

    FootballPlayer(const string &name, const string &position = "Midfielder", int goalCount = 10)
    {
        playerName = name;
        this->position = position;
        this->goalCount = goalCount;
    }

    FootballPlayer(const FootballPlayer &obj)
    {
        this->playerName = obj.playerName;
        this->position = obj.position;
        this->goalCount = obj.goalCount;
    }

    void updateGoalCount(int goalCount)
    {
        this->goalCount = goalCount;
    }

    void display() const
    {
        cout<<"\nPlayer Name: "<<playerName<<endl;
        cout<<"Position: "<<position<<endl;
        cout<<"Goal count: "<<goalCount<<endl;
    }
};

int main()
{
    FootballPlayer player1;
    player1.display();

    FootballPlayer player2("Dev Kumar");
    player2.display();

    FootballPlayer player3("Messi", "Captain", 4);
    player3.display();

    player3.updateGoalCount(6);
    FootballPlayer player4(player3);
    player4.display();

    return 0;
}
