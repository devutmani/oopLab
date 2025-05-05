#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("debug_file.txt", ios::binary);
    if (!file.is_open())
    {
        cerr<<"Error: Cannot open file!"<<endl;
        return 1;
    }

    while (true)
    {
        long long offset;
        cout<<"\nEnter byte offset: ";
        cin>>offset;

        if (offset < 0)
        {
            cout<<"Exiting debugger tool."<<endl;
            break;
        }

        file.seekg(offset, ios::beg);
        if (!file)
        {
            cerr<<"Error: Offset out of range!"<<endl;
            file.clear();
            continue;
        }

        streampos beforePos = file.tellg();
        cout<<"Pointer position before reading: "<<beforePos<<endl;

        char buffer[101] = {0};
        file.read(buffer, 100);
        size_t bytesRead = file.gcount();

        cout<<"Contents:\n";
        for (size_t i = 0; i < bytesRead; i++)
            cout<<(isprint(buffer[i]) ? buffer[i] : '.');
        cout<<"\n\nBytes read: "<<bytesRead<<endl;

        streampos afterPos = file.tellg();
        cout<<"Pointer position after reading: "<<afterPos<<endl;
    }

    file.close();
    return 0;
}
