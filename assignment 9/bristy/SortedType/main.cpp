#include <iostream>
#include<bits/stdc++.h>
#include"SortedType.cpp"
#include"time.h"
using namespace std;
void CheckFull(SortedType<int>s){
    if(s.isFull()){
        cout<<"Sorted Array list is full"<<endl;
    }
    else{
        cout<<"Sorted Array list is not full"<<endl;
    }
}
void PrintList(SortedType<int>s){
    int temp;
    for(int i=0;i<s.lengthIs();i++){
        s.getNextItem(temp);
        cout<<temp<<"\t";
    }
}
void PrintTime(SortedType<Time>s){
    Time temp;
    for(int i=0;i<s.lengthIs();i++){
        s.getNextItem(temp);
        temp.Print();
    }
}
int main()
{
    SortedType<int> ob1;
    cout<<ob1.isEmpty()<<endl;
    cout<<ob1.isFull()<<endl;
    ob1.insertItem(2);
    ob1.insertItem(3);
    ob1.insertItem(8);
    ob1.insertItem(10);
    ob1.insertItem(12);
    ob1.insertItem(15);
    ob1.insertItem(17);
    ob1.insertItem(19);

    //ob1.deleteItem(15);
    //ob1.insertItem(8);
    cout<<"Length is: "<<ob1.lengthIs()<<endl;
    int p=2;
    bool isFound = true;
    ob1.retrieveItem(p,isFound);
    if(isFound){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    CheckFull(ob1);
    PrintList(ob1);
    cout<<endl;
    cout<<"Length is: "<<ob1.lengthIs()<<endl;
    ob1.resetList();


    Time t1(15,34,23);
    Time t2(45,12,12);
    Time t3(35,12,6);
    Time t4(12,40,18);
    Time t5(12,12,12);

    SortedType<Time> st;
    st.insertItem(t1);
    st.insertItem(t2);
    st.insertItem(t3);
    st.insertItem(t4);
    st.insertItem(t5);



    if(st.isFull()){
        cout<<"list is full"<<endl;
    }
    cout<<"\nLength is: "<<st.lengthIs()<<"\n"<<endl;
    PrintTime(st);

    st.deleteItem(t5);
    cout<<"\nLength is: "<<st.lengthIs()<<"\n"<<endl;
    PrintTime(st);
    if(st.isFull()){
        cout<<"list is full"<<endl;
    }
    else{
        cout<<"\nlist is not full"<<endl;
    }
    return 0;
}
