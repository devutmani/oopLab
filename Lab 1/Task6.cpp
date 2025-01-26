/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program to find factorial of given number
 */

#include <iostream>
using namespace std;

void evenSeq(int startRange, int endRange);     // prototype of sequential even odd numbers printing function

int main()
{
    // declaring variables for starting range and ending range
    int startRange;
    int endRange;

    // taking starting range (input)
    cout<<"Enter starting range: ";
    cin>>startRange;

    // taking ending range (input)
    cout<<"Enter ending range: ";
    cin>>endRange;

    // condition if starting range is even if it is, then sending it as it as else we will send after increasing 1
    if (startRange%2 == 0)
    {
        evenSeq(startRange, endRange);
    }
    else
    {
        evenSeq(startRange+1, endRange);
    }

    return 0;   // main function ends here
}

// defining sequential even odd numbers printing function by recursion
void evenSeq(int startRange, int endRange)
{
    // declaing variable for storing starting range
    int temp = startRange;

    // condition if starting range is equal to ending range or exceeding it then breaking recursive call or returning
    if (temp >= endRange)
    {
        return;
    }
    
    // loop for printing only 5 even numbers
    for (int i = 1; i <= 5 ; i++)
    {
        cout<<temp<<" , ";
        temp+=2;
    }

    // condition if starting range is less than ending range then printing next odd number else not print
    if (temp <= endRange)
    {
        cout<<temp-1<<" , ";
    }

    // recursive call for printing this sequence untill starting range is not equal to ending range or maximum starting range and less than ending range
    evenSeq(temp, endRange);
}
