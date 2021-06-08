#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

const int max_items = 5;

template<class T>
class SortedType{
private:
    int length;
    int currentPos;
    T data[max_items];
public:
    SortedType();
    void makeEmpty();
    bool isEmpty();
    bool isFull();
    int lengthIs();
    void insertItem(T);
    void deleteItem(T);
    void resetList();
    void getNextItem(T&);
    void retrieveItem(T&, bool&);

};
#endif // SORTEDTYPE_H_INCLUDED
