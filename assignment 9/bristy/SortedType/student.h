#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        int id;
        string name;
        float cgpa;
    public:
        Student();
        Student(int, string, float);
        void setId(int);
        void setName(string);
        void setCgpa(float);

        int getId();
        string getName();
        float getCgpa();

        void Print();
        friend bool operator == (Student, Student);
        friend bool operator != (Student, Student);

};
#endif // STUDENT_H_INCLUDED
