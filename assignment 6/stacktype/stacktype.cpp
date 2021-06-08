#include"stacktype.h"
#include<bits/stdc++.h>
using namespace std;
template<class T>
Stack<T>::Stack(){
    top = -1;
}

template<class T>
bool Stack<T>:: isFull(){
    return top == SIZE-1;
}

template<class T>
bool Stack<T>::isEmpty(){
    return top==-1;
}

template<class T>
void Stack<T>::Push(T item){
    try{
        if(isFull())
            throw FullStack();
        top++;
        data[top]=item;
    }
    catch(FullStack e){
        cout<<"Stack is Already Full, you can't insert: "<<item<<endl;
    }
}

template<class T>
void Stack<T>::Pop(){
    try{
        if(isEmpty())
            throw EmptyStack();
        top--;
    }
    catch(EmptyStack e){
        cout<<"Stack is Already Empty"<<endl;
    }
}
template<class T>
T Stack<T>::Top(){
    try{
        if(isEmpty())
            throw EmptyStack();
        return data[top];
    }
    catch(EmptyStack e){
        cout<<"You don't have any item on the stack"<<endl;
    }

}
