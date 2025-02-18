#include "Employee.h"

void Employee::employeeData() 
{
    cout<<"\nEnter name: ";
    cin>>employeeName;
    cout<<"Enter salary: $";
    cin>>employeeSalary;
    cout<<"Enter tax: ";
    cin>>taxPercentage;
}

double Employee::updatedSalary() 
{
    double taxAmount = (employeeSalary * taxPercentage) / 100;
    double salaryAfterTax = employeeSalary - taxAmount;
    return salaryAfterTax;
}

void Employee::updateTax(double newTaxPercentage) 
{
    taxPercentage = newTaxPercentage;
    cout<<"Tax percentage updated to "<<taxPercentage<<"%!"<<endl;
}

void Employee::display() 
{
    cout<<"\nEmployee Name: "<<employeeName<<endl;
    cout<<"Monthly Salary: $"<<employeeSalary<<endl;
    cout<<"Tax Percentage: "<<taxPercentage<<"%"<<endl;
    cout<<"Salary After Tax: $"<<updatedSalary()<<endl;
}
