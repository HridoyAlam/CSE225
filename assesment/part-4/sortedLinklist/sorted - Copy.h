#ifndef SORTED_H_INCLUDED
#define SORTED_H_INCLUDED
template<class T>
class Sorted
{
    struct Node{
     T data;
     Node *next;
    };
    public:
        Sorted();
        bool IsFull();
        bool isEmpty();
        int lenghtIs();
        void makeEmpty();
        void retrieveItem(T&,bool&);
        void insertItem(T);
        void deleteItem(T);
        void resetList();
        void getNextItem(T&);
        void display();



    private:
        Node* head;
        int lenght;
        Node* currentPos;
};
#endif // SORTED_H_INCLUDED
