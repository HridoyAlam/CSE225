#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
const int SIZE = 5;
class FullStack{};
class EmptyStack{};
template<class T>
class Stack{
private:
    int top;
    T data[SIZE];
public:
    Stack();
    bool isFull();
    bool isEmpty();
    void Push(T);
    void Pop();
    T Top();
};
#endif // STACKTYPE_H_INCLUDED
