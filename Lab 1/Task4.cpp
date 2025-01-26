/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program to count no: of even and odd numbers from given integer array
 */

#include <iostream>
using namespace std;

int main()
{
    // declaring variable for range of numbers 
    int length;

    // initalizing variables for counting even and odd numbers with 0 (zero)
    int evenCount = 0;
    int oddCount = 0;

    // taking length/Range of numbers
    cout<<"\nEnter length/Range of numbers: ";
    cin>>length;

    // declaring array with user defined length
    int arr[length];

    // taking numbers (input)
    cout<<"\nNumber Input:"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>arr[i];

        // within loop counting even and odd numbers
        if (arr[i]%2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    // printing no: of even and odd numbers 
    cout<<"\nTotal even numbers: "<<evenCount<<endl;
    cout<<"Total odd numbers: "<<oddCount<<endl;

    return 0;   // main function ends here
}
