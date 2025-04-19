#include <iostream>
using namespace std;

class Media
{
protected:
    string title;
    string publicationDate;
    string uniqueID;
    string publisher;

public:
    Media(const string &title, const string &publicationDate, const string &uniqueID, const string &publisher) : title(title), publicationDate(publicationDate), uniqueID(uniqueID), publisher(publisher) {}

    virtual void displayInfo() const
    {
        cout<<"\nTitle: "<<title<<endl;
        cout<<"Publication Date: "<<publicationDate<<endl;
        cout<<"Unique ID: "<<uniqueID<<endl;
        cout<<"Publisher: "<<publisher<<endl;
    }

    virtual void checkOut() const 
    {
        cout<<"\nItem of ID "<<uniqueID<<" is checked out!..."<<endl;
    }

    virtual void returnItem() const 
    {
        cout<<"\nItem of ID "<<uniqueID<<" is returned!..."<<endl;
    }
};

class Book : public Media
{
private:
    string author;
    string ISBN;
    int noOfPages;

public:
    Book(const string &title, const string &publicationDate, const string &uniqueID, const string &publisher, const string &author, const string &ISBN, int noOfPages) : Media(title, publicationDate, uniqueID, publisher), author(author), ISBN(ISBN), noOfPages(noOfPages) {}

    void displayInfo() const
    {
        Media::displayInfo();
        cout<<"Author: "<<author<<endl;
        cout<<"ISBN: "<<ISBN<<endl;
        cout<<"Page NO: "<<noOfPages<<endl;
    }
};

class DVD : public Media
{
private:
    string director;
    int duration;
    double rating;

public:
    DVD(const string &title, const string &publicationDate, const string &uniqueID, const string &publisher, const string &director, int duration, double rating) : Media(title, publicationDate, uniqueID, publisher), director(director), duration(duration), rating(rating) {}

    void displayInfo() const
    {
        Media::displayInfo();
        cout<<"Director: "<<director<<endl;
        cout<<"Duration: "<<duration<<endl;
        cout<<"Rating: "<<rating<<endl;

    }
};

class CD : public Media
{
private:
    string artist;
    int noOfTracks;
    string genre;

public:
    CD(const string &title, const string &publicationDate, const string &uniqueID, const string &publisher, const string &artist, int noOfTracks, const string &genre) : Media(title, publicationDate, uniqueID, publisher), artist(artist), noOfTracks(noOfTracks), genre(genre) {}

    void displayInfo() const
    {
        Media::displayInfo();
        cout<<"Artist: "<<artist<<endl;
        cout<<"No Of Tracks: "<<noOfTracks<<endl;
        cout<<"Genre: "<<genre<<endl;
    }
};

class Magazine : public Media
{
private:
    string name;
    int magazineNo;

public: 
    Magazine(const string &title, const string &publicationDate, const string &uniqueID, const string &publisher, const string &name, int magazineNo) : Media(title, publicationDate, uniqueID, publisher), name(name), magazineNo(magazineNo) {}

    void displayInfo() const
    {
        Media::displayInfo();
        cout<<"Name: "<<name<<endl;
        cout<<"Magazine No: "<<magazineNo<<endl;
    }
};

int main()
{
    // Book b;
    // DVD d;
    // CD c;
    // Magazine m;

    return 0;
}