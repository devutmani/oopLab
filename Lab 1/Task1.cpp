/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/24/2025
 * Desc: Program to find the given number is prime or not
 */

#include <iostream>
using namespace std;

bool isPrime(int num);      // prototype  of prime number checking function

int main()
{
    // declaring variable for number
    int num;

    // taking number (input)
    cout<<"Enter number: ";
    cin>>num;

    // condition for number less than 1
    if (num < 1)
    {
        cout<<num<<" is not a prime number!"<<endl;
        return 0;    // for ending main function here
    }

    // calling prime number identifying function in if condition
    if (isPrime(num) == true)
    {
        cout<<num<<" is a Prime number!"<<endl;
        return 0;   // main function ends here if above if condition is true
    }

    // if above condition is not true then this line will exicute
    cout<<num<<" is not a prime number!"<<endl;
}

// defining "isPrime" function for identifying the number is prime or not
bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
    }

    return true;
}
