/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program to find factorial of given number
 */

#include <iostream>
using namespace std;

struct Product
{
    string name;
    double price;
    int quantity;
    int productID;

    
};

void displayProduct(Product p);
void updateProduct();

int main()
{
    Product p[10];
    
    string name;
    double price;
    int quantity;
    int productID = 1;

    for (int i = 0; i < 10; i++)
    {
        cout<<"\nEnter name of product: ";
        cin>>p[i].name;
        
        cout<<"Enter price: ";
        cin>>p[i].price;

        cout<<"Enter quantity: ";
        cin>>p[i].quantity;

        p[i].productID = productID++;
        cout<<"\nYour Product is Successfully stored with product ID: "<<p[i].productID<<endl;

        char choiice;
        cout<<"\nDo you want to add another product(Y/N):  ";
        cin>>choiice;

        if (choiice == 'N')
        {
            break;
        }
    }

    char choice;
    cout<<"\nAre you want to see your your product(Y/N): ";
    cin>>choice;

    if (choice == 'Y')
    {
        int id;
        cout<<"\nEnter ID of product: ";
        cin>>id;

        for (int i = 0; i < 10; i++)
        {
            if (p[i].productID == id)
            {
                displayProduct(p[id-1]);
                break;
            }
        }
    }
    return 0;
}

void displayProduct(Product p)
{
    cout<<"\nProduct ID: "<<p.productID<<endl;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Price: "<<p.price<<endl;
    cout<<"Quantity: "<<p.quantity<<endl;
}
