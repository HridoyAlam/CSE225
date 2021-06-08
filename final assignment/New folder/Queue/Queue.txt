#include"Queue.h"
#include<bits/stdc++.h>
using namespace std;
template<class T>
QueType<T>::QueType(){
    front = -1;
    rear = -1;
}
template<class T>
void QueType<T>::MakeEmpty(){
    front = -1;
    rear = -1;
}
template<class T>
bool QueType<T>::isEmpty(){
    return (rear == -1 && front == -1);
}

template<class T>
bool QueType<T>::isFull(){
    if((rear+1) % max_items == front){
        return true;
    }
    else{
        return false;
    }
}
template<class T>
void QueType<T>::Enqueue(T item){

        if(isFull()){
            throw FullQue();
        }
        else if(isEmpty()){
            rear = 0;
            front = 0;
        }
        else{
            rear = (rear+1)%max_items;
        }
        data[rear] = item;


}

template<class T>
void QueType<T>::Dequeue(){
    try{
        if(isEmpty()){
            throw EmptyQue();
        }
        else if(front == rear){
            rear = -1;
            front = -1;

        }
        else{
            front = (front+1)%max_items;
        }
    }
    catch(EmptyQue e){
        cout<<"\nQueue is already Empty\n"<<endl;
    }
}
template<class T>
T QueType<T>::Front(){
    try{
        if(isEmpty()){
            throw EmptyQue();
        }
        else{
            return data[front];
        }
    }
    catch(EmptyQue e){
        cout<<"\nNo data in the queue\n"<<endl;
    }
}
