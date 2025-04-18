#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string id;
    string address;
    string phoneNumber;
    string email;

public:
    Person(const string &name, const string &id, const string &address, const string &phoneNumber, const string &email) : name(name), id(id), address(address), phoneNumber(phoneNumber), email(email) {}

    void updateInfo() const {}

    virtual void displayInfo() const
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Pone Number: "<<phoneNumber<<endl;
        cout<<"Email: "<<email<<endl;
    }
};

class Student   : public Person
{
private:
    string courseEnrolled;
    double gpa;
    string enrollmentYear;

public:
    Student(const string &name, const string &id, const string &address, const string &phoneNumber, const string &email, const string &courseEnrolled, double gpa, const string &enrollmentYear) : Person(name, id, address, phoneNumber, email), courseEnrolled(courseEnrolled), gpa(gpa)  {}

    void displayInfo() const override
    {
        Person::displayInfo();
        cout<<"Enrolled Course: "<<courseEnrolled<<endl;
        cout<<"GPA: "<<gpa<<endl;
        cout<<"Enrollment Year: "<<enrollmentYear<<endl;
    }
};

class Professor : public Person
{
private:
    string department;
    string courseTought;
    double salary;

public:
    Professor(const string &name, const string &id, const string &address, const string &phoneNumber, const string &email, const string &department, const string &courseTaught, double salary) : Person(name, id, address, phoneNumber, email), department(department), courseTought(courseTought), salary(salary) {}

    void displayInfo() const override
    {
        Person::displayInfo();
        cout<<"Department: "<<department<<endl;
        cout<<"Course Tought: "<<courseTought<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Staff : public Person
{
private:
    string department;
    string position;
    double salary;

public:
    Staff(const string &name, const string &id, const string &address, const string &phoneNumber, const string &email, const string &department, const string &position, double salary) : Person(name, id, address, phoneNumber, email) {}

    void displayInfo() const override
    {
        Person::displayInfo();
        cout<<"Department: "<<department<<endl;
        cout<<"Position: "<<position<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    Student s("Dev Kumar", "94-2221", "Umerkot", "0334-6663502", "k240028@nu.edu.pk", "PF", 3.4, "2024");
    Professor p("Basit Jassani", "34-2211", "Karachi", "0349-7785182", "basit.jassani@nu.edu.pk", "AI", "PF", 120000);
    Staff st("Junaid Aasif", "00-1010", "Badine", "0303-7682911", "junaid.aasif@nu.edu.pk", "CS", "Director", 130000);

    s.displayInfo();
    p.displayInfo();
    st.displayInfo();
    return 0;
}