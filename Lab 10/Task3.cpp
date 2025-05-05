#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    string email;
    string end;

    do
    {
        cout<<"\nEnter your name: ";
        getline(cin, name);

        cout<<"\nEnter your email: ";
        getline(cin, email);

        ofstream out;
        out.open("signup.txt", ios::app);
        if (!out.is_open())
        {
            cout<<"Error: There is an error in your file!..."<<endl;
            return 1;
        }

        out<<"Name: "<<"<"<<name<<">, Email: "<<"<"<<email<<">"<<endl;
        out.close();

        cout<<"\nDo you want to enter data of another user?(if Yes Enter Y/y either press any key): ";
        cin>>end;

        cin.ignore();
    } while (end == "Y" || end == "y");

    cout<<"Registration saved, successfully!..."<<endl;
    return 0;
}