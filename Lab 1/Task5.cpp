/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program to find factorial of given number
 */

#include <iostream>
using namespace std;

int factorial(int num);     // prototype of factorial calculating function

int main()
{
    // declaring variable for number
    int num;

    // taking number (input)
    cout<<"Enter number: ";
    cin>>num;

    // condition what if the number is valid or invalid
    if (num < 0)
    {
        cout<<"invalid number!..."<<endl;
        return 0;
    }
    
    // calling factorial function and also printing it
    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;

    return 0;   // main function ends here
}

// defining factorial function for finding factorial with recursion
int factorial(int num)
{
    // condition if num is 0 then return 1 (one)
    if (num == 0)
    {
        return 1;
    }

    // multiplying num with recursive call of "factorial(num-1)" untill num became 0(zero) and return 1(one)
    return num*factorial(num-1);
}
