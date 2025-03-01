#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    double price;

public:
    Book() : title("Untitled"), author("Anonymous"), price(0.0) {}

    Book(const string &title, const string &author = "Unknown", double price = 0.0)
    {
        this->title = title;
        this->author = author;
        this->price = price;
    }

    Book(const Book &obj)
    {
        this->title = obj.title;
        this->author = obj.author;
        this->price = obj.price;
    }

    void display() const
    {
        cout<<"\nTitle: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<"$"<<endl;
    }
};

int main()
{
    Book b1;
    b1.display();

    Book b2("Ego is the enemy");
    b2.display();

    Book b3("40 laws of power", "Dev Kumar", 10000);
    b3.display();
    
    return 0;
}
