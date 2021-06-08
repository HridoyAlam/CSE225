#include<bits/stdc++.h>
using namespace std;
#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED
const int max_items = 5;
template<class T>
class Unsorted{
private:
    T data[max_items];
    int length;
    int currentPos;
public:
    Unsorted();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    int lengthIs();
    void insertItem(T);
    void deleteItem(T);
    void retrieveItem(T&, bool&);
    void getNextItem(T&);
    void resetList();
    void assending_sort();

    void dessending_sort();
};
#endif // UNSORTED_H_INCLUDED


#include<bits/stdc++.h>
using namespace std;

template<class T>
Unsorted<T>::Unsorted(){
    length = 0;
    currentPos = -1;
}
template<class T>
bool Unsorted<T>:: isEmpty(){
    if (length == 0)
        return true;
    else
        return false;
}
template<class T>
bool Unsorted<T>:: isFull(){
    if(length == max_items){
        return true;
    }
    else{
        return false;
    }
}
template<class T>
void Unsorted<T>::makeEmpty(){
    length = 0;
}
template<class T>
void Unsorted<T>::insertItem(T item){
    if(isFull() == false){
        data[length] = item;
        length++;
    }
    else{
        cout<<"Array is full"<<endl;
    }
}
template<class T>
int Unsorted<T>::lengthIs(){
    return length;
}
template<class T>
void Unsorted<T>::deleteItem(T item){
    if(isEmpty()==false){
        for(int i=0;i<lengthIs();i++){
             if(data[i]==item){
                data[i]=data[length-1];
                length--;
                break;
            }
            else{
                cout<<"This item is not found in array"<<endl;
            }
        }
    }
    else{
        cout<<"Array is Empty"<<endl;
    }
}
template<class T>
void Unsorted<T>::retrieveItem(T& item, bool& found){
    if(isEmpty() == true){
        cout<<"Array is Empty"<<endl;
    }
    else{
        found = false;

        for(int i=0;i<length;i++){
            if(data[i] == item){
                found = true;
                //cout<<item<<" : "<<found<<endl;
                break;
            }
        }
    }
}
template<class T>
void Unsorted<T>::getNextItem(T& item){
    if(isEmpty()==true){
        cout<<"Array is Empty"<<endl;
    }
    else{
        currentPos++;
        item = data[currentPos];
    }
}
template<class T>
void Unsorted<T>::resetList(){
    currentPos= -1;
}

template<class T>
void Unsorted<T>::assending_sort()
{
    sort(data, data+length);

}

template<class T>
void Unsorted<T>::dessending_sort()
{
    sort(data, data + length, greater<int>());
}


#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED


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

