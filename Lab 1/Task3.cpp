/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program to calculate monthly electricity bill
 */

#include <iostream>
using namespace std;

int main()
{
    // declaring variables for numbers and operator
    int num1;
    int num2;
    char opeartor;

    // taking number 1 (input)
    cout<<"\nEnter number 1: ";
    cin>>num1;

    // taking number 2 (input)
    cout<<"Enter number 2: ";
    cin>>num2;

    // taking operator
    cout<<"\nEnter operator: (+, -, *, /): ";
    cin>>opeartor;

    cout<<endl;
    switch (opeartor)   // switch case for differet type of calculation
    {
    case '+':
        cout<<"Sum of number "<<num1<<" and number "<<num2<<" is: "<<num1-(-num2)<<endl;
        break;

    case '-':
        cout<<"Subtraction of number "<<num1<<" from number "<<num2<<" is: "<<num2-(num1)<<endl;
        break;

    case '*':
        cout<<"Multiplication of number "<<num1<<" and number "<<num2<<" is: "<<num1*num2<<endl;
        break;

    case '/':
        cout<<"Division of number "<<num1<<" from number "<<num2<<" is: "<<num2/num1<<endl;
        break;

    default:
        cout<<"Invalid Input!...";
        break;
    }

    return 0;   // main function ends here
}
