#include <iostream>
using namespace std;

struct Book
{
    int publicationYear;
    string title;
    string author;
    string genre;
};

void Search(Book b);

int main()
{
    Book b[10];
    string search;
    int choice;
    int bookIndx;
    int bookQuantity = -1;

    for (int i = 0; i < 10; i++)
    {
        cout<<"<--------------------------------------------------->"<<endl;
        cout<<"\n\t1. Do you want to display all books"<<endl;
        cout<<"\t2. Do you want to add another book"<<endl;
        cout<<"\t3. Do you want to update any book"<<endl;
        cout<<"\t4. Do you want to search any book"<<endl;
        cout<<"\t5.Do you want Quit?\n"<<endl;

        cout<<"<--------------------------------------------------->"<<endl;
        cout<<"\nSelect what type of service you want to have: ";
        cin>>choice;
        cout<<"<--------------------------------------------------->"<<endl;

        switch (choice)
        {
            case 1:
                if (bookQuantity < 0)
                {
                    cout<<"<--------------------------------------------------->"<<endl;
                    cout<<"\nBook Storage is empty"<<endl;
                    break;
                }
                for (int i = 0; i <= bookQuantity; i++)
                {
                    if (i == 0)
                    {
                        cout<<"<--------------------------------------------------->"<<endl;
                        cout<<"\nLibrary Book's Storage\n"<<endl;
                    }

                    cout<<"\nBook title: "<<b[i].title<<endl;
                    cout<<"Author: "<<b[i].author<<endl;
                    cout<<"Genre: "<<b[i].genre<<endl;
                    cout<<"Publishing year: "<<b[i].publicationYear<<endl;
                }
                break;

            case 2:
                bookQuantity++;
                cout<<"<--------------------------------------------------->"<<endl;
                cout<<"\nEnter title of book: ";
                cin>>b[bookQuantity].title;

                cout<<"Enter author name: ";
                cin>>b[bookQuantity].author;

                cout<<"Enter genre: ";
                cin>>b[bookQuantity].genre;

                cout<<"Enter year of publication: ";
                cin>>b[bookQuantity].publicationYear;
                break;

            case 3:
                cout<<"<--------------------------------------------------->"<<endl;
                cout<<"\nEnter author name or book title whose data you want to change: ";
                cin>>search;

                for (int i = 0; i < 10; i++)
                {
                    if (search == b[i].author || search == b[i].title)
                    {
                        bookIndx = i;
                        break;
                    }
                    else if (i == 9)
                    {
                        bookIndx = -1;
                        cout<<"\nWrong input, This book is not available\n"<<endl;
                        break;
                    }
                }
                if (bookIndx == -1)
                {
                    break;
                }

                cout<<"\nEnter title of book: ";
                cin>>b[bookIndx].title;

                cout<<"Enter author name: ";
                cin>>b[bookIndx].author;

                cout<<"Enter genre: ";
                cin>>b[bookIndx].genre;

                cout<<"Enter year of publication: ";
                cin>>b[bookIndx].publicationYear;
                break;

            case 4:
                cout<<"<--------------------------------------------------->"<<endl;
                cout<<"\nEnter author name or book title: ";
                cin>>search;

                for (int i = 0; i < 10; i++)
                {
                    if (search == b[i].author || search == b[i].title)
                    {
                        Search(b[i]);
                        break;
                    }
                }
                break;

            case 5:
                cout<<"<--------------------------------------------------->"<<endl;
                cout<<"\n\tThanks for using this Library System!...\n"<<endl;
                cout<<"<--------------------------------------------------->"<<endl;
                i = 11;
                break;
            default:
                cout<<"Invalid input!..."<<endl;
        }
    }
}

void Search(Book b)
{
    cout<<endl;
    cout<<"Book title: "<<b.title<<endl;
    cout<<"Author: "<<b.author<<endl;
    cout<<"Genre: "<<b.genre<<endl;
    cout<<"Publishing year: "<<b.publicationYear<<endl;
}
