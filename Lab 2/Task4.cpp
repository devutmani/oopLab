/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program to find factorial of given number
 */

#include <iostream>
using namespace std;

void add(double num1, double num2, double* result);
void subtract(double num1, double num2, double* result);
void multiply(double num1, double num2, double* result);
void divide(double num1, double num2, double* result);

int main()
{
    double num1;
    double num2;
    double result;
    int operation;

    cout<<"\n<----------------------------------->"<<endl;
    cout<<"\nEnter number 1: ";
    cin>>num1;

    cout<<"<----------------------------------->"<<endl;
    cout<<"Enter number 2: ";
    cin>>num2;

    cout<<"<----------------------------------->"<<endl;
    cout<<"\nChoose Operation: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"<----------------------------------->"<<endl;

    cout<<"\nWhat operation you want to perform: ";
    cin>>operation;
    cout<<"<----------------------------------->"<<endl;

    switch (operation)
    {
    case 1:
        add(num1, num2, &result);
        cout<<"<----------------------------------->"<<endl;
        cout<<"\nSum of "<<num1<<" and "<<num2<<" is: "<<result<<endl;
        cout<<"<----------------------------------->"<<endl;
        break;

    case 2:
        subtract(num1, num2, &result);
        cout<<"<----------------------------------->"<<endl;
        cout<<"\nSubtraction of "<<num2<<" from "<<num1<<" is: "<<result<<endl;
        cout<<"<----------------------------------->"<<endl;
        break;

    case 3:
        multiply(num1, num2, &result);
        cout<<"<----------------------------------->"<<endl;
        cout<<"\nMultiplication of "<<num1<<" and "<<num2<<" is: "<<result<<endl;
        cout<<"<----------------------------------->"<<endl;
        break;

    case 4:
        divide(num1, num2, &result);
        cout<<"<----------------------------------->"<<endl;
        cout<<"\nDivision of "<<num2<<" from "<<num1<<" is: "<<result<<endl;
        cout<<"<----------------------------------->"<<endl;
        break;
    
    default:
        break;
    }
}

void add(double num1, double num2, double* result)
{
    *result = num1 + num2;
}

void subtract(double num1, double num2, double* result)
{
    *result = num1 - num2;
}

void multiply(double num1, double num2, double* result)
{
    *result = num1*num2;
}

void divide(double num1, double num2, double* result)
{
    *result = num1/num2;
}
