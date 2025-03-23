#include <iostream>
using namespace std;

class Position
{
protected:
    int x;
    int y;
    int z;

public:
    Position(int x, int y, int z) : x(x), y(y), z(z) {}

    virtual void display() const
    {
        cout<<"Position: ("<<x<<", "<<y<<", "<<z<<")."<<endl;
    }
};

class Health
{
protected:
    int health;
    int damage;

public:
    Health(int health, int damage) : health(health), damage(damage) {}

    virtual void display() const
    {
        cout<<"\nHealth: "<<health<<endl;
        cout<<"Damage: "<<damage<<endl;
    }
};

class Character : public Position, public Health
{
private:
    string name;
    string role;

public:
    Character(int x, int y, int z, int health, int damage, const string &name, const string &role) : Position(x, y, z), Health(health, damage), name(name), role(role) {}

    void display() const override
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Role: "<<role;
        Health::display();
        Position::display();
    }
};

int main()
{
    Character krish(1, 2, 3, 200, 0, "Krish", "Hero");
    krish.display();

    Character ravan(3, 2, 1, 120, 0, "Rravan", "Enemy");
    ravan.display();
    return 0;
}
