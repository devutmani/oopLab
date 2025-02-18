#include <iostream>
using namespace std;

class StationeryShop
{
private:
    string items[25];
    double prices[25];
    int noOfItems;

public:
    StationeryShop() : noOfItems(0) {}

    void addItem(const string &item, double price)
    {
        if (noOfItems >= 25)
        {
            cout<<"Shop is full, no further item can be added..."<<endl;
            return;
        }
        items[noOfItems] = item;
        prices[noOfItems] = price;
        noOfItems++;

        cout<<"Your item is added!..."<<endl;
    }

    void listItems() const
    {
        if (noOfItems == 0)
        {
            cout<<"Shop is Empty!..."<<endl;
            return;
        }

        cout<<"----------(Items)----------"<<endl;
        for(int i = 0; i < noOfItems; i++)
        {
            cout<<i+1<<") "<<items[i]<<" "<<prices[i]<<endl;
        }
    }

    void updatePrice(int index, double newPrice)
    {
        if (index < 1 || index > noOfItems)
        {
            cout<<"Invalid refernce of Items"<<endl;
            return;
        }
        prices[index-1] = newPrice;
        cout<<"Price is changed now!"<<endl;
    }

    void generateReceipt(int purchasedItems[], int quantity[], int purchaseCount)
    {
        if (purchaseCount == 0)
        {
            cout<<"No item purchased still"<<endl;
            return;
        }

        double total = 0.0;
        cout<<"---------------------------------------"<<endl;
        cout<<"            Customer Recept            "<<endl;
        cout<<"---------------------------------------"<<endl;

        
        for (int i = 0; i < purchaseCount; i++)
        {
            int index = purchasedItems[i];
            if (index < 1 || index > noOfItems)
            {
                cout<<"Invalid item in the list"<<endl;
                continue;
            }

            double itemTotal = prices[index-1]*quantity[i];
            total += itemTotal;

            cout<<items[index-1]<<" "<<quantity[i]<<" "<<prices[index]<<endl;
        }
        cout<<"---------------------------------------"<<endl;
        cout<<"Total: "<<total<<endl;
    }
};

int main() {
    StationeryShop shop;

    shop.addItem("Pen", 1.5);
    shop.addItem("Notebook", 3.0);
    shop.addItem("Pencil", 0.5);

    shop.listItems();

    shop.updatePrice(2, 2.5);
    shop.listItems();

    int purchasedItems[] = {1, 2};
    int quantities[] = {2, 1};
    shop.generateReceipt(purchasedItems, quantities, 2);

    return 0;
}
