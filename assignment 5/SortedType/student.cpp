#include<bits/stdc++.h>
#include"student.h"
using namespace std;
//template<class St>
Student::Student(){
    id = 0;
    name = "";
    cgpa = 0.0;
}
Student::Student(int i, string n, float c){
    id = i;
    name = n;
    cgpa = c;
}
void Student::setId(int i){
    id = i;
}
void Student::setName(string n){
    name = n;
}
void Student::setCgpa(float c{
    cgpa = c;
}
int Student::getId(){
    return id;
}
string Student::getName(){
    return name;
}
float Student::getCgpa(){
    float cgpa;
}
void Student::Print(){
    cout<<id<<" : "<<name<<" : "<<cgpa<<endl;
}
bool operator==(Student a, Student b){
    if(a.getId() == b.getId())
        return true;
    else
        return false;
}
bool operator!=(Student a, Student b){
    if(a.getId() != b.getId())
        return true;
    else
        return false;
}
