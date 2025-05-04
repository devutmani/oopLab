#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string ISBN;

public:
    Book(const string &title, const string &author, const string &ISBN) : title(title), author(author), ISBN(ISBN) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return ISBN; }

    void display() const
    {
        cout<<"\nTitle: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"ISBN: "<<ISBN<<endl;
    }
};

class Library
{
private:
    Book** books;
    int bookCount;
    int capacity;

public:
    Library() : books(nullptr), bookCount(0), capacity(0) {}

    void addBook(const Book &b)
    {
        if (bookCount == capacity)
        {
            if (capacity == 0)
            {
                capacity = 1;
            }
            else
            {
                capacity *= 2;
            }

            Book **newBooks = new Book *[capacity];
            for (int i = 0; i < bookCount; i++)
            {
                newBooks[i] = books[i];
            }
            delete[] books;
            books = newBooks;
        }

        books[bookCount] = new Book(b);
        cout<<"\nAdded Book of ISBN: "<<b.getISBN()<<endl;
        bookCount++;
    }

    void removeBook(const string &ISBN)
    {
        for (int i = 0; i < bookCount; i++)
        {
            if (books[i]->getISBN() == ISBN)
            {
                delete books[i];
                for (int j = i; j < bookCount-1; j++)
                {
                    books[j] = books[j+1];
                }
                books[bookCount-1] = nullptr;
                bookCount--;
                cout<<"\nDeleted book of ISBN: "<<ISBN<<endl;
                return;
            }
        }
        cout << "\nBook with ISBN " << ISBN << " not found." << endl;
    }

    void searchBook(const string &ISBN) const
    {
        for (int i = 0; i < bookCount; i++)
        {
            if (books[i]->getISBN() == ISBN)
            {
                cout<<"\nBook found of ISBN: "<<ISBN<<endl;
                books[i]->display();
                return;
            }
        }
        cout<<"\nBook with ISBN "<<ISBN<<" not found."<<endl;
    }

    void display() const
    {
        for (int i = 0; i < bookCount; i++)
        {
            books[i]->display();
        }
    }

    ~Library() {
        for (int i = 0; i < bookCount; i++) {
            delete books[i];
        }
        delete[] books;
    }
};

#endif