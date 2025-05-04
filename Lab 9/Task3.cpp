#include "Book.h"
#include <iostream>
using namespace std;

int main()
{
    Library Public;

    Book b1("Ego is the Enemy", "Dev Kumar", "234U-AZ2");
    Book b2("Rich Dad Poor Dad", "Aashir", "243U-123");
    Book b3("OOP by Developer", "Sahil Kumar", "234U-123");

    Public.addBook(b1);
    Public.addBook(b2);
    Public.addBook(b3);

    Public.display();

    Public.searchBook("123U-K3h");
    Public.searchBook("243U-123");
    Public.removeBook("243U-123");
    return 0;
}