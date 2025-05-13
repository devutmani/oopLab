#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int num1 = 5;
    int num2 = 10;

    cout<<"Before swap: a = "<<num1<<", b = "<<num2<<endl;
    swapValues(num1, num2);

    cout<<"After swap: a = "<<num1<<", b = "<<num2<<endl;
    
    float x = 3.5f;
    float y = 7.8f;

    cout<<"\nBefore swap: x = "<<x<<", y = "<<y<<endl;
    swapValues(x, y);
    cout<<"After swap: x = " <<x<<", y = "<<y<<endl;
    
    char ch1 = 'A';
    char ch2 = 'Z';

    cout<<"\nBefore swap: ch1 = '"<<ch1<<"', ch2 = '"<<ch2<<"'"<<endl;
    swapValues(ch1, ch2);
    cout<<"After swap: ch1 = '"<<ch1<<"', ch2 = '"<<ch2<<"'"<<endl;
    
    return 0;
}