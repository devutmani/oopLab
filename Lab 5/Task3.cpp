#include <iostream>
using namespace std;

class MenuItems
{
private:
    string name;
    double price;

public:
    MenuItems(const string &name, double price) : name(name), price(price) {}

    string getName() const
    {
        return name;
    }

    double getPrice() const
    {
        return price;
    }

    void display() const
    {
        cout<<name<<"  Price: "<<price<<endl;
    }
};

class Menu
{
private:
    MenuItems* items[10];
    int itemCount;

public:
    Menu() : itemCount(0) {}

    void addItem(const string &name, double price)
    {
        items[itemCount] = new MenuItems(name, price);
        itemCount++;
    }

    void removeItem(const string &name)
    {
        for (int i = 0; i < itemCount; i++)
        {
            if (name == items[i]->getName())
            {
                for (int j = i; j < itemCount-1; j++)
                {
                    items[j] = items[j+1];
                }
                delete items[itemCount-1];
            }
        }
    }

    MenuItems* getItem(int index) const
    {
        if (index >= 0 && index < itemCount)
        {
            return items[index];
        }
        return nullptr;
    }

    void display() const
    {
        for (int i = 0; i < itemCount; i++)
        {
            items[i]->display();
        }
    }
};

class Order
{
private:
    Menu* m;
    int purchaseCount;

public:
    Order(Menu* menu) : m(menu), purchaseCount(0) {}

    void placeOrder()
    {
        m->display();

        int itemReferences[10];
        int itemQuantities[10];
        int index = 0;

        int tempItemNum;
        int tempQuant;

        while (true)
        {
            cout << "\nEnter item No (you can stop purchasing by entering '-1'): ";
            cin >> tempItemNum;

            if (tempItemNum == -1)
            {
                break;
            }

            cout << "Enter quantity: ";
            cin >> tempQuant;

            if (tempQuant < 0 || tempQuant > 10)
            {
                if (tempQuant < 0)
                {
                    cout << "You entered an invalid quantity, so it will be considered as 0!..." << endl;
                    tempQuant = 0;
                }
                else
                {
                    cout << "Sorry, we don't have enough stock! We'll provide the maximum available quantity (10)." << endl;
                    tempQuant = 10;
                }
            }

            itemReferences[index] = tempItemNum;
            itemQuantities[index] = tempQuant;
            index++;
        }

        purchaseCount = index;

        Payment payment;
        payment.calculateBill(m, itemReferences, itemQuantities, purchaseCount);
    }
};

class Payment
{
private:
    double amount;

public:
    Payment() : amount(0) {}

    void calculateBill(Menu* menu, int* itemReferences, int* itemQuantities, int purchaseCount)
    {
        amount = 0;
        cout << "\n--- Bill Details ---" << endl;
        for (int i = 0; i < purchaseCount; i++)
        {
            int itemIndex = itemReferences[i] - 1;
            MenuItems* item = menu->getItem(itemIndex);
            if (item)
            {
                double itemTotalPrice = item->getPrice() * itemQuantities[i];
                cout << i + 1 << ". " << item->getName() << "  Quantity: " << itemQuantities[i] << "  Price: " << itemTotalPrice << endl;
                amount += itemTotalPrice;
            }
            else
            {
                cout << "Invalid item reference: " << itemReferences[i] << endl;
            }
        }
        cout << "\nTotal Amount: " << amount << endl;
    }
};

int main()
{
    Menu menu;
    menu.addItem("Kari Pakora", 120);
    menu.addItem("Daal Mash", 320);
    menu.addItem("Matar Paneer", 540);
    menu.addItem("Daal Chawal", 130);

    Order order(&menu);
    order.placeOrder();
    return 0;
}
