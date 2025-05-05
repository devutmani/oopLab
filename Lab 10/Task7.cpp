#include <iostream>
#include <fstream>
using namespace std;

typedef struct Student
{
    char name[50];
    int id;
    float GPA;

} Student;

int main()
{
    ofstream studentFile;
    studentFile.open("students.dat", ios::binary);
    if (!studentFile.is_open())
    {
        cout<<"Error: There is an issue in your file 'student.dat'!..."<<endl;
        return 1;
    }

    int studentCount;
    cout<<"\nEnter number of students: ";
    cin>>studentCount;
    cin.ignore();

    Student student;

    for (int i = 0; i < studentCount; i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        cout<<"Enter name: ";
        cin.getline(student.name, 50);
        cout<<"Enter ID: ";
        cin>>student.id;
        cout<<"Enter GPA: ";
        cin>>student.GPA;
        cin.ignore();

        studentFile.write((char*)&student, sizeof(Student));

    }

    studentFile.close();

    ifstream inFile;
    inFile.open("students.dat", ios::binary);
    if (!inFile.is_open())
    {
        cout<<"\nError: There is an issue in your file 'students.dat'!..."<<endl;
        return 1;
    }

    while(inFile.read((char*)&student, sizeof(Student)))
    {
        cout<<"\nName: "<<student.name<<endl;
        cout<<"ID: "<<student.id<<endl;
        cout<<"GPA: "<<student.GPA<<endl;
    }

    inFile.close();

    return 0;
}
