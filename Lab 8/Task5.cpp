#include <iostream>
using namespace std;

class Teacher;

class Student
{
private:
    string name;
    double math;
    double physics;
    double chemistry;

    friend class Teacher;

public:
    Student(const string &name, double math, double physics, double chemistry) : name(name), math(math), physics(physics), chemistry(chemistry) {}

    void display() const 
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Grades: "<<endl;
        cout<<"Math: "<<math<<endl;
        cout<<"Physics: "<<physics<<endl;
        cout<<"Chemistry: "<<chemistry<<endl;
    }
};

class Teacher
{
private:
    string name;
    string department;
    double salary;

public:
    Teacher(const string &name, const string department, double salary) : name(name), department(department), salary(salary) {}

    void updateGrades(Student &s)
    {
        cout<<"\nUpdate grades of "<<s.name<<endl;
        cout<<"Enter grades of Math: ";
        cin>>s.math;

        cout<<"\nEnter grades of Physics: ";
        cin>>s.physics;

        cout<<"\nEnter grades of Chemistry: ";
        cin>>s.chemistry;
    }

    void display() const
    {
        cout<<"\nTeacher Name: "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    Student Dev("Dev Kumar", 99, 94, 95);
    Dev.display();

    Teacher Farooq("Farooq Zaidi", "AI", 200000);
    Farooq.display();
    Farooq.updateGrades(Dev);
    Dev.display();

    return 0;
}