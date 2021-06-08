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
int main()
{
    Unsorted<int> ob1;
    cout<<ob1.isEmpty()<<endl;
    cout<<ob1.isFull()<<endl;
    ob1.insertItem(4);
    cout<<ob1.lengthIs()<<endl;
    ob1.deleteItem(4);
    cout<<ob1.lengthIs()<<endl;
    ob1.deleteItem(4);
    //ob1.insertItem(3);
    ob1.deleteItem(5);
    cout<<ob1.lengthIs()<<endl;
    int p=7;
    bool isFound = true;
    ob1.retrieveItem(p,isFound);
    if(isFound){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    ob1.insertItem(5);
    ob1.insertItem(7);
    ob1.insertItem(6);
    ob1.insertItem(9);
    PRINT(ob1);
    cout<<endl;
    cout<<ob1.lengthIs()<<endl;
    ob1.insertItem(1);
    PRINT(ob1);
    cout<<endl;
    int t=4;
    bool isF = true;

    ob1.retrieveItem(t,isF);

    if(isF){
        cout<<t<<" is Present"<<endl;
    }
    else{
        cout<<t<<" is Absent"<<endl;
    }
    cout<<"Length is : "<<ob1.lengthIs()<<endl;

    Student s1(15234, "Jon", 2.6);
    Student s2(13732, "Sandor", 1.2);
    Student s3(13569, "Ramsey", 3.1);
    Student s4(16285, "Arya", 3.1);
    Student s5(16285, "Tyron", 3.9);
    //s1.Print();

    Unsorted<Student> si;
    si.insertItem(s1);
    si.insertItem(s2);
    si.insertItem(s3);
    si.insertItem(s4);
    si.insertItem(s5);

    Student temp;
    for(int i=0;i<si.lengthIs();i++){
        si.getNextItem(temp);
        temp.Print();
    }
    //si.resetList();
    s4.setId(15467);
    si.deleteItem(s4);
    si.retrieveItem(s3,isF);
    if(isF){
        cout<<s3.getId()<<" is Present"<<endl;
    }
    else{
        cout<<" is Absent"<<endl;
    }
    si.resetList();
    Student te;
    for(int i=0;i<si.lengthIs();i++){
        si.getNextItem(te);
        te.Print();
    }
    return 0;
}
