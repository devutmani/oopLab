#include <iostream>
using namespace std;

class Book
{
protected:
    string title;
    string author;
    string publisher;

public:
    Book(const string &title, const string &author, const string &publisher) : title(title), author(author), publisher(publisher) {}

    void display() const
    {
        cout<<"\nTitle: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Publisher: "<<publisher<<endl;
    }
};

class FictionBook : public Book
{
private:
    string genre;
    string protagonist;

public:
    FictionBook(const string &title, const string &author, const string &publisher, const string &genre, const string &protagonist) : Book(title, author, publisher), genre(genre), protagonist(protagonist) {}

    void display() const
    {
        cout<<endl;
        Book::display();
        cout<<"Genre: "<<genre<<endl;
        cout<<"Protagonist: "<<protagonist<<endl;
    }
};

int main()
{
    Book oops("OOPs in C++", "Dev Kumar", "Gotam Kumar");
    oops.display();

    FictionBook power("40 Laws of Power", "Dev Kumar", "Sahil Kumar", "Motivational", "Ved");
    power.display();

    return 0;
}
