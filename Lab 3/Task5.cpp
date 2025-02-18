#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employeeName;
    double employeeSalary;
    double taxPercentage;

public:
    void employeeData() {
        cout<<"\nEnter name: ";
        cin>>employeeName;
        cout<<"Enter salary: $";
        cin>>employeeSalary;
        cout<<"Enter tax: ";
        cin>>taxPercentage;
    }

    double updatedSalary() {
        double taxAmount = (employeeSalary * taxPercentage) / 100;
        double salaryAfterTax = employeeSalary - taxAmount;
        return salaryAfterTax;
    }

    void updateTax(double newTaxPercentage) {
        taxPercentage = newTaxPercentage;
        cout<<"Tax percentage updated to "<<taxPercentage<<"%!"<<endl;
    }

    void display() {
        cout<<"\nEmployee Name: "<<employeeName<<endl;
        cout<<"Monthly Salary: $"<<employeeSalary<<endl;
        cout<<"Tax Percentage: "<<taxPercentage<<"%"<<endl;
        cout<<"Salary After Tax: $"<<updatedSalary()<<endl;
    }
};

int main() {
    Employee emp;

    emp.employeeData();
    emp.display();
    emp.updateTax(2.5);
    emp.display();

    return 0;
}
