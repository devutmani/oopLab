#include <iostream>
using namespace std;

template <typename T>
T findMax(const T arr[], int size) 
{
    T max = arr[0];

    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
void printArray(const T arr[], int size) 
{
    cout << "[";
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i];
    }
    cout << "]";
}

int main() 
{
    int arr[] = {10, 20, 5, 30, 25};
    int intSize = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array: ";
    printArray(arr, intSize);
    cout<<"\nMaximum: " << findMax(arr, intSize)<<endl;

    string arr2[] = {"Apple", "Mango", "Banana", "Peach"};
    constexpr int strSize = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << "\nArray: ";
    printArray(arr2, strSize);
    cout << "\nMaximum: " << findMax(arr2, strSize) << endl;

    return 0;
}