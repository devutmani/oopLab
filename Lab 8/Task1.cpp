#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    while (num%2 == 0)
    {
        cout<<"\nEnter a number: ";
        cin>>num;
    }
    return 0;
}