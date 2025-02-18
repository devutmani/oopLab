#include "Employee.h"

int main() 
{
  Employee emp1;

  cout<<"Details for Employee 1:"<<endl;
  emp1.employeeData();
  emp1.display();

  emp1.updateTax(3.0);
  emp1.display();

  return 0;
}
