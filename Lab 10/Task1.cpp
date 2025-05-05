#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    string message;

    cout<<"\nRecipient name: ";
    getline(cin, name);

    cout<<"\nEnter short message: ";
    getline(cin, message);

    ofstream out("greeting.txt");
    if (!out)
    {
        cout<<"Error: There is an error in your file!..."<<endl;
        return 1;
    }
    
    out<<name<<endl;
    out<<message<<endl;
    out<<"Best Regards!"<<endl;

    out.close();
    return 0;
}