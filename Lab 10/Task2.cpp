#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string userInput;
    string temp;

    ifstream in("entries.txt");
    if (!in)
    {
        cout<<"\nError: There is an issue in your file!..."<<endl;
        return 1;
    }

    ofstream out("diary.txt");
    if (!out)
    {
        cout<<"\nError: There is an issue in your file!..."<<endl;
        return 1;
    }

    while (true)
    {
        cin>>userInput;
        if (userInput == "Exit" || userInput == "exit")
        {
            
            break;
        }

        getline(in, temp);
        out<<temp<<endl;
    }

    in.close();
    out.close();
    return 0;
}