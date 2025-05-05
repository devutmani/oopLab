#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    char* secret;
    char ch;
    int count = 0;

    ifstream secretFile;
    secretFile.open("secret.txt");
    if (!secretFile.is_open())
    {
        cout<<"Error: There is an error in your file 'secret.txt'!..."<<endl;
        return 1;
    }


    while (secretFile.get(ch))
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            secret[count] = ch;
            count++;
        }
    }
    secret[count] = '\0';
    secretFile.close();

    cout<<secret<<endl;
    cout<<"Total charachters: "<<count<<endl;
    return 0;
}