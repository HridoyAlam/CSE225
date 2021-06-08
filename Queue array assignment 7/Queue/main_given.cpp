#include <iostream>
#include<bits/stdc++.h>
#include"Queue.cpp"
using namespace std;
void PrintBinary(int n)
{
 QueType<string> q;
    q.Enqueue("1");
    while(n--){
        string s1 = q.Front();
        q.Dequeue();
        cout<<s1<<endl;
        string s2 = s1;

        q.Enqueue(s1.append("0"));
        q.Enqueue(s2.append("1"));
    }
}

void CheckEmpty(QueType<int> q)
{
    if(q.isEmpty()){
        cout<<"\nQueue is Empty\n"<<endl;
    }
    else{
        cout<<"\nQueue is not Empty\n"<<endl;
    }
}

void CheckFull(QueType<int> q)
{
    if(q.isFull()){
        cout<<"\nQueue is Full\n"<<endl;
    }
    else{
        cout<<"\nQueue is not Full\n"<<endl;
    }
}


void Print(QueType<int> q)
{
    while(!q.isEmpty()){
        cout<<q.Front()<<"\t";
        q.Dequeue();
    }
    cout<<"\n"<<endl;
}
void rever(QueType<int>& q){
        if(q.isEmpty())
            return;
        int data = q.Front();
        q.Dequeue();
        rever(q);
        q.Enqueue(data);
}
void PrintReverse(QueType<int> t)
{
    QueType<int>aux;
    while(!t.isEmpty()){
        aux.Enqueue(t.Front());
        t.Dequeue();
    }
    rever(aux);
    while(!aux.isEmpty()){
        cout<<aux.Front()<<"\t";
        aux.Dequeue();
    }
    cout<<"\n"<<endl;
}


bool WightMeter(QueType<int> q, int weightLimit)
{
    int sum = 0;
    while(!q.isEmpty()){
        sum += q.Front();
        q.Dequeue();
    }
    if(sum<=weightLimit){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    QueType<int> q;
    int n;
    CheckEmpty(q);
    q.Front();
    for(int i=0;i<4;i++)
    {
        cin>>n;
        q.Enqueue(n);
    }
    CheckEmpty(q);
    CheckFull(q);
    cin>>n;
    q.Enqueue(n);
    Print(q);
    CheckFull(q);
    cin>>n;
    //q.Enqueue(q);
    q.Dequeue();
    q.Dequeue();
    Print(q);
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    CheckEmpty(q);
    q.Dequeue();
    for(int i=0;i<5;i++)
    {
        cin>>n;
        q.Enqueue(n);
    }
    PrintReverse(q);
    Print(q);

    QueType<int> lift;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        lift.Enqueue(n);
    }
    int weigtLimit;
    cin>>weigtLimit;
    if(WightMeter(lift, weigtLimit)){
        cout<<"\nGood to go\n"<<endl;
    }
    else{
        cout<<"\nOver Weight, Maximum Limit \"350\"\n"<<endl;
    }
    //Now change the max_items
    int binaryNumbers;
    cin>>binaryNumbers;
    PrintBinary(binaryNumbers);

    return 0;
}
