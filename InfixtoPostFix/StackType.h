#ifndef STACKTYPE_H
#define STACKTYPE_H
#include<iostream>
using namespace std;

const int SIZE=15;
class FullStack{
    public:
        FullStack(){
            cout<<"\nStack is Full"<<endl;
        }
};
class EmptyStack{
    public:
        EmptyStack(){
            cout<<"\nStack is Empty"<<endl;
        }

};
template<class ItemType>
class StackType
{
    public:
        StackType();
        void makeEmpty();
        bool isEmpty();
        bool isFull();
        void Push(ItemType);
        void Pop();
        void printStack();
        ItemType Top();



    private:
        int top;
        ItemType items[SIZE];
};

#endif // STACKTYPE_H
