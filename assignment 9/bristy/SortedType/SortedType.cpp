#include<bits/stdc++.h>
#include"SortedType.h"
using namespace std;

template<class T>
SortedType<T>::SortedType(){
    length = 0;
    currentPos = -1;
}

template<class T>
bool SortedType<T>::isEmpty(){
    if(length == 0)
        return true;
    else
        return false;
}

template<class T>
bool SortedType<T>::isFull(){
    if(length == max_items)
        return true;
    else
        return false;
}
template<class T>
void SortedType<T>:: makeEmpty(){
    length = 0;
}
template<class T>
int SortedType<T>::lengthIs(){
    return length;
}

template<class T>
void SortedType<T>::insertItem(T item){
    if(isFull()==false){

        int location = 0;

    for(int i=0;i<length;i++){
        if(item>data[i]){
            location++;
        }
        else{
           break;
        }
    }
    for(int i = length-1;i>=location;i--){
        data[i+1] = data[i];
    }
    data[location] = item;
    length++;
    }
    /*else{
        cout<<"array is full, you can't insert: "<<item<<endl;
    }*/
}
template<class T>
void SortedType<T>::deleteItem(T item){
    int location;
    for(int i =0;i<length;i++){
        if(item == data[i]){
            location = i;
            length--;
            break;
        }
        else{
            continue;
        }
    }
    for(int i=location;i<length;i++){
        data[i]=data[i+1];
    }

}
template<class T>
void SortedType<T>::retrieveItem(T& item, bool& found){
    found = false;
    int f = 0;
    int l = length-1;
    int mid;
    while(f<=l){
        mid = (f+l)/2;
        if(item == data[mid]){
            found = true;
            break;
        }
        else if(item > data[mid]){
            f = mid+1;
        }
        else{
            l = mid-1;
        }
    }
}
template<class T>
void SortedType<T>::getNextItem(T& item){

        currentPos++;
        item = data[currentPos];

}
template<class T>
void SortedType<T>::resetList(){
    currentPos = -1;
}
