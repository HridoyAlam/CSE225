#include<bits/stdc++.h>
#include <iostream>
#include"stacktype.cpp"

using namespace std;

void EmptyCheck(Stack<int>t){

    if(t.isEmpty()){
        cout<<"Stack is Empty\n"<<endl;
        }
    else{
        cout<<"Stack is Not Empty\n"<<endl;
    }
}
void FullCheck(Stack<int>t){

    if(t.isFull()){
        cout<<"Stack is Full\n"<<endl;
        }
    else{
        cout<<"Stack is Not Full\n"<<endl;
    }
}
void PrintStack(Stack<int>t){
    Stack<int>aux;

    while(!t.isEmpty()){
        aux.Push(t.Top());
        t.Pop();
    }
    while(!aux.isEmpty()){
        t.Push(aux.Top());
        cout<<aux.Top()<<"\t";
        aux.Pop();
    }
    cout<<"\n"<<endl;

}

void LargestValue(Stack<int>t){
    int temp;
    int large=0;
    while(!t.isEmpty()){

        temp = t.Top();
        if(temp>large){
            large = temp;
        }
        t.Pop();
    }
    cout<<"Largest value of the stack is: "<<large<<endl;
}

bool isBallenced(string s){
    Stack<char>a;

    for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            a.Push(s[i]);
           }
        else if(s[i] == ')'){
            if(a.isEmpty())
                return false;
            else
                a.Pop();
        }
    }
    return a.isEmpty();
}

int main()
{
    Stack<int>s;

    EmptyCheck(s);

    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);

    EmptyCheck(s);
    FullCheck(s);

    PrintStack(s);
    s.Push(3);

    FullCheck(s);

    s.Pop();
    s.Pop();

    cout<<"Stack Top value: "<<s.Top()<<"\n"<<endl;

    s.Push(9);
    s.Push(8);
    s.Push(10);

    LargestValue(s);
    PrintStack(s);

    string line;
    cin>>line;
    if(isBallenced(line)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
}
