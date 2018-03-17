#ifndef UNSORTED_H
#define UNSORTED_H

template<class ItemType>
class Unsorted
{
    struct NodeType{
     ItemType info;
     NodeType *next;
    };
    public:
        Unsorted();
        ~Unsorted();
        bool IsFull();
        int Lenghts();
        void MakeEmpty();
        void RetrieveItem(ItemType&,bool&);
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void ResetList();
        void GetNextItem(ItemType&);
        void Display();



    private:
        NodeType* listData;
        int lenght;
        NodeType* currentPos;
};

#endif // UNSORTED_H
