#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include<bits/stdc++.h>
#include"unsorted.h"
using namespace std;

class Student{

private:
    int id;
    string name;
    float cgpa;
    Unsorted<int>marks;
public:
    Student();
    Student(int, string, float,Unsorted<int>);
    void setId(int);
    void setName(string);
    void setCgpa(float);
    int getId();
    string getName();
    float getCgpa();
    void Print();
    void PrintMarks(Unsorted<int>);
    double averageMarks(Unsorted<int>);
    friend bool operator ==(Student, Student);
    friend bool operator != (Student, Student);
    friend bool operator < (Student, Student);
    friend bool operator > (Student, Student);
};

#endif // STUDENT_H_INCLUDED
