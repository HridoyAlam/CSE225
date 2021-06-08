#include"student.h"
#include"unsorted.cpp"
#include<bits/stdc++.h>
using namespace std;
Student::Student(){
    id = 0;
    name = "";
    cgpa = 0.0;
    Unsorted<int>marks;
}
Student::Student(int i, string n, float c,Unsorted<int>m){
    id = i;
    name = n;
    cgpa = c;
    marks = m;
}
void Student::setId(int i){
    id = i;
}
void Student::setName(string n){
    name = n;
}
void Student::setCgpa(float c){
    cgpa = c;
}
int Student:: getId(){
    return id;
}
string Student::getName(){
    return name;
}
float Student:: getCgpa(){
    return cgpa;
}
double Student::averageMarks(Unsorted<int>m){
    double sum =0;
    m.dessending_sort();
    int temp;
    for(int i=0;i<3;i++){
        m.getNextItem(temp);
        sum = sum+temp;

    }
    return (sum/3);

}
void Student::PrintMarks(Unsorted<int>m){
    int temp;
    //m.dessending_sort();
    for(int i=0;i<m.lengthIs();i++){
        m.getNextItem(temp);
        cout<<temp<<",";
    }
}

void Student::Print(){
    cout<<"\nID: "<<id;
    cout<<"; "<<" NAME: " <<name;
    cout<<"; "<<" CGPA: "<<cgpa;
    cout<<"; "<<" EXAM's: ";
    PrintMarks(marks);
    cout<<"; "<<" Average Marks: "<<averageMarks(marks);
    cout<<endl;
}
bool operator==(Student a, Student b) {
    if(a.getId() == b.getId())
        return true;
    else{
        return false;
    }
}
bool operator!=(Student a, Student b) {
    if(a.getId() != b.getId())
        return true;
    else{
        return false;
    }
}
bool operator < (Student a, Student b) {
    if(a.getId() < b.getId())
        return true;
    else{
        return false;
    }
}
bool operator > (Student a, Student b) {
    if(a.getId() > b.getId())
        return true;
    else{
        return false;
    }
}
