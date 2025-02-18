#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
    string employeeName;
    double employeeSalary;
    double taxPercentage;

public:
    void employeeData();
    double updatedSalary();
    void updateTax(double newTaxPercentage);
    void display();
};

#endif
