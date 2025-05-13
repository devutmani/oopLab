#include <iostream>
using namespace std;

class InvalidAge
{
public:
    const string what() const 
    {
        return "Error: Age must be between 1 and 119";
    }
};

class InvalidSalary 
{
public:
    const string what() const 
    {
        return "Error: Salary must be positive";
    }
};

class InvalidHeight 
{
public:
    const string what() const 
    {
        return "Error: Height must be positive";
    }
};

void validateAge(int age) 
{
    if (age <= 0 || age >= 120) 
    {
        throw InvalidAge();
    }
}

void validateSalary(double salary) 
{
    if (salary <= 0) 
    {
        throw InvalidSalary();
    }
}

void validateHeight(double height) 
{
    if (height <= 0) 
    {
        throw InvalidHeight();
    }
}

int main() 
{
    try 
    {
        int age;
        std::cout << "Enter age: ";
        std::cin >> age;
        validateAge(age);
        std::cout << "Age is valid.\n";

        double salary;
        std::cout << "Enter salary: ";
        std::cin >> salary;
        validateSalary(salary);
        std::cout << "Salary is valid.\n";

        double height;
        std::cout << "Enter height: ";
        std::cin >> height;
        validateHeight(height);
        std::cout << "Height is valid.\n";

    } 

    catch (const InvalidAge& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    
    catch (const InvalidSalary& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    
    catch (const InvalidHeight& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
