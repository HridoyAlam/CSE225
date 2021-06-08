#include <iostream>
#include<bits/stdc++.h>
#include"Queue.cpp"
using namespace std;

void CheckEmpty(QueType<int> t){
    if(t.isEmpty()){
        cout<<"\nQueue is Empty\n"<<endl;
    }
    else{
        cout<<"\nQueue is not Empty\n"<<endl;
    }
}

void CheckFull(QueType<int> t){
    if(t.isFull()){
        cout<<"\nQueue is Full\n"<<endl;
    }
    else{
        cout<<"\nQueue is not Full\n"<<endl;
    }
}
void PrintQueue(QueType<int> t){
    while(!t.isEmpty()){
        cout<<t.Front()<<"\t";
        t.Dequeue();
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
void PrintReverseQue(QueType<int> t){
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

bool WightMeter(QueType<int> q, int weightLimit){
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

void PrintBinary(int n){
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

int main()
{
    QueType<int> q;

    int n;

    CheckEmpty(q);
    //cout<<q.Front()<<endl;
    q.Front();
    /*
    //not using array, for fast input

    for(int i=0;i<4;i++){
        cin>>n;
        q.Enqueue(n);
    }*/
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);
    q.Enqueue(6);
    CheckEmpty(q);
    CheckFull(q);

    PrintQueue(q);
    CheckFull(q);
    q.Enqueue(8);

    q.Dequeue();
    q.Dequeue();

    PrintQueue(q);

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    CheckEmpty(q);

    q.Dequeue();

    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);

    PrintReverseQue(q);
    PrintQueue(q);

    QueType<int>lift;

    //not using array, for fast input
    lift.Enqueue(65);
    lift.Enqueue(75);
    lift.Enqueue(70);
    lift.Enqueue(80);
    lift.Enqueue(100);
    int wieghtlimt=350;
    //cin>>wieghtlimt;
    if(WightMeter(lift, wieghtlimt)){
        cout<<"\nGood to go\n"<<endl;
    }
    else{
        cout<<"\nOver Weight, Maximum Limit \"350\"\n"<<endl;
    }
    //PrintQueue(lift);

    PrintBinary(5);
    // if want to print more than 5, need to change the constant value

}
