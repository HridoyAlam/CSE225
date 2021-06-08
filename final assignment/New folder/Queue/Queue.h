#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
const int max_items = 100;
class FullQue{
};
class EmptyQue{

};
template<class T>
class QueType{
private:
    int rear;
    int front;
    T data[max_items];

public:
    QueType();
    void MakeEmpty();
    bool isEmpty();
    bool isFull();
    void Enqueue(T);
    void Dequeue();
    T Front();
};
#endif // QUEUE_H_INCLUDED
