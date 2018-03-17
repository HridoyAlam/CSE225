#include "Unsorted.h"
#include<iostream>
using namespace std;

template<class ItemType>
Unsorted<ItemType>::Unsorted()
{
   lenght=0;
   listData=NULL;
   currentPos=NULL;
}

template<class ItemType>
void Unsorted<ItemType>::InsertItem(ItemType item){
    NodeType* location;

    location =new NodeType;
    location->info=item;
    location->next=listData;
    listData=location;
    lenght++;

}
template<class ItemType>
void Unsorted<ItemType>::Display(){
    NodeType *location=listData;
    cout<<location->info<<" ";

    while(location->next!=NULL){

        location=location->next;
        cout<<location->info<<" ";
    }

    cout<<endl;

}
template<class ItemType>
bool Unsorted<ItemType>::IsFull(){
    NodeType* location;

    try{
        location=new NodeType;
            delete location;
            return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}
template<class ItemType>
void Unsorted<ItemType>::DeleteItem(ItemType item){
    NodeType* location=listData;
    NodeType* tempLocation;

    if(item==listData->info){
        tempLocation=location;
        listData=listData->next;

    }
    else{
        while(! (item==(location->next)->info))
            location=location->next;
        tempLocation=location->next;
        location->next=(location->next)->next;
    }
    delete tempLocation;
    lenght--;
}
template<class ItemType>
void Unsorted<ItemType>::RetrieveItem(ItemType& item,bool& found){
    NodeType* location=listData;
    bool moreToSearch =(location !=NULL);
    found = false;

    while(moreToSearch && !found){
        if(item==location->info)
            found=true;
        else{
            location=location->next;
            moreToSearch=(location !=NULL);
        }
    }


}

template<class ItemType>
void Unsorted<ItemType>::MakeEmpty(){
NodeType* tempPtr;
while(listData !=NULL){
    tempPtr=listData;
    listData=listData->next;
    delete tempPtr;
}
lenght = 0;
}
template<class ItemType>
Unsorted<ItemType>::~Unsorted(){
    MakeEmpty();

}
template<class ItemType>
void Unsorted<ItemType>::ResetList(){
 currentPos=NULL;

}
template<class ItemType>
void Unsorted<ItemType>::GetNextItem(ItemType& item){
if(currentPos==NULL)
    currentPos=listData;
else
    currentPos=currentPos->next;
item=currentPos->info;

}
