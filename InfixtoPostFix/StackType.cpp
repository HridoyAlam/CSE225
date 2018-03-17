#include "StackType.h"
#include<iostream>
using namespace std;

template<class ItemType>
StackType<ItemType>::StackType()
{
    top=-1;
}

template<class ItemType>
void StackType<ItemType>::makeEmpty(){
 top=-1;

}

template<class ItemType>
bool StackType<ItemType>::isEmpty(){
 return(top==-1);
}

template<class ItemType>
bool StackType<ItemType>::isFull(){
 return(top==SIZE-1);
}
template<class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
 if(isFull())
    throw FullStack();
 top++;
 items[top]=newItem;

}
template<class ItemType>
void StackType<ItemType>::Pop(){
 if(isEmpty())
    throw EmptyStack();
 top--;

}
template<class ItemType>
ItemType StackType<ItemType>::Top(){
 if(isEmpty())
    throw EmptyStack();
 return items[top];


}
template<class ItemType>
void StackType<ItemType>::printStack(){

    if(isEmpty())
    throw EmptyStack();

    for(int i=top;i>=0;i--)
        cout<<items[i]<<" ";
    cout<<endl;
}
