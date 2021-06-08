#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED
const int max_items = 5;
template<class T>
class Unsorted{
private:
    T data[max_items];
    int length;
    int currentPos;
public:
    Unsorted();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    int lengthIs();
    void insertItem(T);
    void deleteItem(T);
    void retrieveItem(T&, bool&);
    void getNextItem(T&);
    void resetList();
};
#endif // UNSORTED_H_INCLUDED
