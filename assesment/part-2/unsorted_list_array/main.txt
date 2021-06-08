#include<bits/stdc++.h>
#include <iostream>
#include"unsorted.cpp"
#include"student.h"
using namespace std;
void PRINT(Unsorted<int>ob1){
int temp;
    for(int i=0;i<ob1.lengthIs();i++){
        ob1.getNextItem(temp);
        cout<<temp<<"\t";
    }
}
void PrintStudentInfo(Unsorted<Student>st){
    Student te;
    st.assending_sort();
    for(int i=0;i<st.lengthIs();i++){
        st.getNextItem(te);
        te.Print();
    }
}
int main()
{
    int num_st, num_exam;
    cout<<"Number of Students: ";
    cin>>num_st;
    cout<<"Number of Exam: ";
    cin>>num_exam;
    Unsorted<Student> st;
    for(int i=0;i<num_st;i++){
        int id;
        string name;
        float cgpa;
        int atten;

        cout<<"Student ID: ";
        cin>>id;
        cout<<"Student NAME: ";
        cin>>name;
        cout<<"Student CGPA: ";
        cin>>cgpa;
        cout<<"Number of Exam attended: ";
        cin>>atten;
        Unsorted<int>m;
        int e_m;
        for(int i=0;i<atten;i++){
            cout<<"Exam "<<i+1<<": ";
            cin>>e_m;
            m.insertItem(e_m);
        }

        Student s(id, name, cgpa,m);
        st.insertItem(s);

    }

    PrintStudentInfo(st);

    return 0;
}
