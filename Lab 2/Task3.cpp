#include <iostream>
using namespace std;

int* pointerOfDynamicArr(int num);

int main()
{
    int noOfElements;

    cout<<"\nEnter quantity of elements that you want to dynamically allocate as array: ";
    cin>>noOfElements;

    int* ptr = pointerOfDynamicArr(noOfElements);
    cout<<"\nPointer pointing the address: "<<ptr<<endl;

    return 0;
}

int* pointerOfDynamicArr(int num)
{
    int* ptr = new int[num];

    return ptr;
}
