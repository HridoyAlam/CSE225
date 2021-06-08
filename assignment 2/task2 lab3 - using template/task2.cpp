
#include "task2.h"
#include<bits/stdc++.h>
using namespace std;
template<class T>
dynArr<T>::dynArr(){
    data = NULL;
    si = 0;
}
template<class T>
dynArr<T>::dynArr(int s){
    data = new T[s];
    si= s;
}
template<class T>
dynArr<T>::~dynArr(){
    delete []data;
}
template<class T>
void dynArr<T>::setValue(int index, T value){
    data[index] = value;
}
template<class T>
T dynArr<T>:: getValue(int index){
    return data[index];
}
template<class T>
void dynArr<T>::allocate(int n){
    delete []data;
    data= new T[n];
    si = n;
}
