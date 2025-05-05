#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string message;

    cout<<"\nEnter log message: ";
    getline(cin, message);

    ofstream logFile;
    logFile.open("logg.txt", ios::app);
    if (!logFile.is_open())
    {
        cerr<<"Error: There is an issue in your file 'log.txt'!..."<<endl;
        exit(1);
    }

    logFile<<message<<endl;
    streamsize size = logFile.tellp();
    cout<<"Current size of file: "<<size<<endl;

    logFile.close();
    return 0;
}