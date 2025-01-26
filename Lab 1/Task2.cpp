/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program for handling student marks management
 */

#include <iostream>
using namespace std;

float totalMarks(float pf, float oop, float dld, float ict);    // prototype of total marks calculating function
float avgMarks(float pf, float oop, float dld, float ict);      // prototype of average marks calculating function
char grade(float avgMarks);     // prototype of Grade finding function 

int main()
{
    // declaring variables for different courses
    float pf;
    float oop;
    float dld;
    float ict;

    // taking marks of each course
    cout<<"\nStudent Marks Management:\n"<<endl;
    cout<<"Enter marks of PF: ";
    cin>>pf;

    cout<<"Enter marks of OOP: ";
    cin>>oop;

    cout<<"Enter marks of DLD: ";
    cin>>dld;

    cout<<"Enter marks of ICT: ";
    cin>>ict;

    // calling functions and also printing it's values like total Marks, Average Marks, Grade
    cout<<endl;
    cout<<"Total Marks: "<<totalMarks(pf, oop, dld, ict)<<endl;
    cout<<"Average Marks: "<<avgMarks(pf, oop, dld, ict)<<endl;
    cout<<"Grade: "<<grade(avgMarks(pf, oop, dld, ict))<<endl;

    return 0;
}

// defining total Marks calculating function
float totalMarks(float pf, float oop, float dld, float ict)
{
    return pf+oop+dld+ict;
}

// defining average marks calculating function
float avgMarks(float pf, float oop, float dld, float ict)
{
    return (pf+oop+dld+ict)/4.0;
}

// defining grade finding function
char grade(float avgMarks)
{
    // condition if avgMmarks are 90 or above then return Grade "A"
    if (avgMarks >= 90)
    {
        return 'A';
    }
    // condition if avgMmarks are 80 or above then return Grade "B"
    else if (avgMarks >= 80)
    {
        return 'B';
    }
    // condition if avgMmarks are 70 or above then return Grade "C"
    else if (avgMarks >= 70)
    {
        return 'C';
    }
    // condition if avgMmarks are 60 or above then return Grade "D"
    else if (avgMarks >= 60)
    {
        return 'D';
    }
    // condition if avgMmarks are below 60 then return Grade "F"
    else
    {
        return 'F';
    }
}
