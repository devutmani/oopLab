#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &name, int age) : name(name), age(age) {}

    void display() const
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student : virtual public Person
{
protected:
    string studentID;
    string gradeLevel;

    public:
        Student(const string &name, int age, const string &studentID, const string &gradeLevel) : Person(name, age), studentID(studentID), gradeLevel(gradeLevel) {}

        void display() const
        {
            Person::display();
            cout<<"Student ID: "<<studentID<<endl;
            cout<<"Grade Level: "<<gradeLevel<<endl;
        }
};

class Teacher : virtual public Person
{
protected:
    string course;
    string roomNo;

public:
    Teacher(const string &name, int age, const string &course, const string &roomNo) : Person(name, age), course(course), roomNo(roomNo) {}

    void display() const
    {
        Person::display();
        cout<<"Course: "<<course<<endl;
        cout<<"Room No: "<<roomNo<<endl;
    }
};

class TeacherAssistance : public Teacher, public Student
{
public:
    TeacherAssistance(const string &name, int age, const string &studentID, const string &gradeLevel, const string &course, const string &roomNo) : Student(name, age, studentID, gradeLevel), Teacher(name, age, course, roomNo), Person(name, age) {}

    void display() const
    {
        Student::display();
        cout<<"Course: "<<course<<endl;
        cout<<"Room No: "<<roomNo<<endl;
    }
};

int main()
{
    TeacherAssistance dev("Dev Kumar", 20, "24K-0028", "7nd Semester", "PF", "MTC-19");
    dev.display();

    return 0;
}
