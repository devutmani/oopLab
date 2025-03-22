#include <iostream>
using namespace std;

class Character
{
protected:
    int health;
    int damage;

public:
    Character(int health, int damage) : health(health), damage(damage) {}

    virtual void display() const
    {
        cout<<"\nHealth: "<<health<<endl;
        cout<<"Damage: "<<damage<<endl;
    }
};

class Enemy : public Character
{
private:
    string name;
    string role;

public:
    Enemy(int health, int damage, const string &name, const string &role) : Character(health, damage), name(name), role(role) {}

    void display() const override
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Role: "<<role;
        Character::display();
    }
};

class Player : public Character
{
protected:
    string name;
    string role;

public:
    Player(int health, int damage, const string &name, const string &role) : Character(health, damage), name(name), role(role) {}

    void display() const override
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Role: "<<role;
        Character::display();
    }
};

class Wizard : public Player
{
private:
    string magicPower;
    string spells;

public:
    Wizard(int health, int damage, const string &name, const string &role, const string &magicPower, const string &spells) : Player(health, damage, name, role), magicPower(magicPower), spells(spells) {}

    void display() const override
    {
        Player::display();
        cout<<"Magic Power: "<<magicPower<<endl;
        cout<<"Spells: "<<spells<<endl;
    }
};

int main()
{
    Player hero(200, 0, "Dev Kumar", "Hero");
    hero.display();

    Enemy enemy(150, 0, "Noman", "Enemy");
    enemy.display();
    
    Wizard wiz(100, 0, "Gotam", "Wizard", "Touch and fire", "Fooooo");
    wiz.display();

    return 0;
}
