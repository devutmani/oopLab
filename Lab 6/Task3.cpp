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

// With the Guidence of ChatGPT and it's new ideas I added some features in this above code here
#include <iostream>
using namespace std;

class Position
{
protected:
    float x;
    float y;
    float z;

public:
    Position(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    void setPosition(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    virtual void display() const
    {
        cout<<"Position: ("<<x<<", "<<y<<", "<<z<<")."<<endl;
    }
};

class Health
{
protected:
    int health;
    int Damage;

public:
    Health(int health = 100) : health(health), Damage(0) {}

    void damage(int damage)
    {
        Damage = damage;

        if(damage < 0)
        {
            cout<<"\ninvalid Damage!..."<<endl;
            return;
        }
        else if(damage >= 0 && damage <= 100)
        {
            health -= damage;
            cout<<"\nGot Damage of "<<damage<<" and now Health is: "<<health<<endl;
        }
        else
        {
            cout<<"Damage is more than Health so, now Health is '0'!..."<<endl;
            health = 0;
        }
    }

    void heal(int heal)
    {
        if(heal < 0)
        {
            cout<<"\nInvalid Heal!..."<<endl;
        }
        else if(heal >= 0 && heal <= Damage)
        {
            health += heal;
            cout<<"Healed up by "<<heal<<" and now Health is: "<<health<<endl;
        }
    }

    bool isAlive() const
    {
        if (health > 0)
        {
            return true;
        }
        return false;
    }

    virtual void display() const
    {
        cout<<"\nHealth: "<<health<<endl;
    }
};

class Character : public Position, public Health
{
private:
    string name;
    string role;

public:
    Character(float x, float y, float z, int health, const string &name, const string &role) : Position(x, y, z), Health(health), name(name), role(role) {}

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
    Character krish(1, 2, 3, 200, "Krish", "Hero");
    krish.display();
    krish.setPosition(8, 9, 3);
    krish.damage(85);
    krish.heal(15);

    if (krish.isAlive() == true)
    {
        cout<<"Krish is Alive!..."<<endl;
    }
    krish.display();

    Character ravan(3, 2, 1, 120, "Rravan", "Enemy");
    ravan.display();
    ravan.heal(15);

    if (ravan.isAlive() == true)
    {
        cout<<"Ravan is Alive!..."<<endl;
    }
    ravan.setPosition(2, 4, 1);
    ravan.display();

    return 0;
}
