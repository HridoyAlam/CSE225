#include"unsorted.h"
#include<bits/stdc++.h>
using namespace std;

template<class T>
Unsorted<T>::Unsorted(){
    length = 0;
    currentPos = -1;
}
template<class T>
bool Unsorted<T>:: isEmpty(){
    if (length == 0)
        return true;
    else
        return false;
}
template<class T>
bool Unsorted<T>:: isFull(){
    if(length == max_items){
        return true;
    }
    else{
        return false;
    }
}
template<class T>
void Unsorted<T>::makeEmpty(){
    length = 0;
}
template<class T>
void Unsorted<T>::insertItem(T item){
    if(isFull() == false){
        data[length] = item;
        length++;
    }
    else{
        cout<<"Array is full"<<endl;
    }
}
template<class T>
int Unsorted<T>::lengthIs(){
    return length;
}
template<class T>
void Unsorted<T>::deleteItem(T item){
    if(isEmpty()==false){
        for(int i=0;i<lengthIs();i++){
             if(data[i]==item){
                data[i]=data[length-1];
                length--;
                break;
            }
            else{
                cout<<"This item is not found in array"<<endl;
            }
        }
    }
    else{
        cout<<"Array is Empty"<<endl;
    }
}
template<class T>
void Unsorted<T>::retrieveItem(T& item, bool& found){
    if(isEmpty() == true){
        cout<<"Array is Empty"<<endl;
    }
    else{
        found = false;

        for(int i=0;i<length;i++){
            if(data[i] == item){
                found = true;
                //cout<<item<<" : "<<found<<endl;
                break;
            }
        }
    }
}
template<class T>
void Unsorted<T>::getNextItem(T& item){
    if(isEmpty()==true){
        cout<<"Array is Empty"<<endl;
    }
    else{
        currentPos++;
        item = data[currentPos];
    }
}
template<class T>
void Unsorted<T>::resetList(){
    currentPos= -1;
}

template<class T>
void Unsorted<T>::assending_sort()
{
    sort(data, data+length);

}

template<class T>
void Unsorted<T>::dessending_sort()
{
    sort(data, data + length, greater<int>());
}
