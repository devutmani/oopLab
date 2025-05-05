#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    time_t current = time(0);
    char* time = ctime(&current);

    ofstream logFile;
    logFile.open("log.txt", ios::app);
    if (!logFile.is_open())
    {
        cout<<"\nError: There is an issue in your file 'log.txt'!...."<<endl;
        return 1;
    }

    logFile<<"System started at: "<<time;
    logFile.close();

    cout<<"System successfully logged!..."<<endl;
    return 0;
}