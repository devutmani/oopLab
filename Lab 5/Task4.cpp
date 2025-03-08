#include <iostream>
using namespace std;

class Airport
{
private:
    string name;
    string location;

public:
    Airport(const string &name, const string &location) : name(name), location(location) {}

    string getName() const { return name; }
    string getLocation() const { return location; }

    void display(int i) const
    {
        cout<<"\nDestination "<<i+1<<": "<<name<<"\nLocation: "<<location<<endl;
    }
};

class Flight
{
private:
    string flightNo;
    Airport* airports[3];
    int landingCounts;

public:
    Flight(const string &flightNo) : flightNo(flightNo), landingCounts(0) {}

    void addAirport(const string &name, const string&location)
    {
        if (landingCounts >= 3)
        {
            cout<<"Landing limit is completed!..."<<endl;
            return;
        }
        airports[landingCounts] = new Airport(name, location);
        landingCounts++;
    }

    void display() const
    {
        cout<<"\nFlight number: "<<flightNo<<endl;
        cout<<"Total Landings(Destinations): "<<landingCounts<<endl;
        for (int i = 0; i < landingCounts; i++)
        {
            airports[i]->display(i);
        }
    }

    ~Flight()
    {
        for (int i = 0; i < landingCounts; i++)
        {
            delete airports[i];
        }
    }
};

int main()
{
    Flight f1("PK-303");

    f1.addAirport("Karachi", "Near Quaid Mazar");
    f1.addAirport("Islamabad", "Beside Railway Junction");
    f1.addAirport("England", "Opposite side of Booston Bank");

    f1.display();
    return 0;
}
