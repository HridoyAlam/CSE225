#include<bits/stdc++.h>

using namespace std;

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


template<class T>
Sorted<T>:: Sorted(){
    lenght = 0;
    head = NULL;
    currentPos = NULL;
}

template<class T>
bool Sorted<T>::IsFull(){
    Node* location;
    try{
        location = new Node();
        delete location;
        return false;
    }
    catch(bad_alloc exception){
        return true;
    }
}

template<class T>
int Sorted<T>::lenghtIs(){
    return lenght;
}

template<class T>
void Sorted<T>:: makeEmpty(){
    Node* temp;

    while(head != NULL){
        temp = head;
        head = head->next;
        delete temp;
    }
    lenght = 0;
}
template<class T>
void Sorted<T>::retrieveItem(T& item, bool& found){
    bool moreSearch;
    Node* location = head;
    found = false;
    moreSearch = (location != NULL);
    while(moreSearch && !found){
        if(location->data < item){
            location = location->next;
            moreSearch = (location != NULL);
        }
        else if(item == location->data){
            found = true;
            item = location->data;
        }
        else{
            found=false;
        }
    }
}
template<class T>
void Sorted<T>::insertItem(T item){
    Node* temp = new Node;
    temp->data = item;
    temp->next = NULL;

    Node* pre = NULL;
    Node* location =head;
    bool moreSearch;
    moreSearch = (location != NULL);

    while(moreSearch){
        if(location->data < item){
            pre = location;
            location = location->next;
            moreSearch = (location!=NULL);

        }
        else{
            moreSearch = false;

        }
    }
    if(pre == NULL){
        temp->next = head;
        head = temp;
    }
    else{
        temp->next = location;
        pre->next = temp;
    }
    lenght++;
}
template<class T>
void Sorted<T>::deleteItem(T item){
    Node* location = head;
    Node* temp;

    if(location->data == item){
        temp = location;
        head = location->next;
    }
    else{
        while(location->next->data != item){
            location = location->next;
        }
        temp = location->next;
        location->next = (location->next)->next;

    }
    delete temp;
    lenght--;
}
template<class T>
void Sorted<T>::resetList(){
    currentPos = NULL;
}
template<class T>
void Sorted<T>::getNextItem(T& item){
    if(currentPos == NULL){
        currentPos = head;
    }
    item = currentPos->data;
    currentPos = currentPos->next;
}
template<class T>
void Sorted<T>::display(){
    Node* location= head;


    while(location!=NULL){
        cout<<location->data<<" ";
        location=location->next;

    }

    cout<<endl;

}

void PrintGetNextItem(Sorted<int>ob1){
    int temp;

    for(int i = 0 ;i<ob1.lenghtIs();i++){
        ob1.getNextItem(temp);
        cout<<temp<<"\t";
    }
    cout<<endl;
}

int main()
{
    Sorted<int>s;
    int value = 9;
    s.insertItem(value);
    s.insertItem(4);
    s.insertItem(6);
    s.insertItem(1);
    s.insertItem(3);
    s.display();
    s.deleteItem(6);
    s.display();
    bool isFound = false;
    s.retrieveItem(value,isFound);
    if(isFound){
        cout<<value<<" is exist on the list"<<endl;
    }
    cout<<"Length of the list is: "<<s.lenghtIs()<<endl;
    s.deleteItem(3);
    s.display();
    cout<<"Length of the list is: "<<s.lenghtIs()<<endl;
    PrintGetNextItem(s);

    return 0;
}
