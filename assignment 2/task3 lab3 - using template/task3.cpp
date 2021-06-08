#include "task3.h"
#include<bits/stdc++.h>
using namespace std;
template<class T>
dynArr<T>::dynArr(){
    data = NULL;
    row = 0;
    col =0;
}
template<class T>
dynArr<T>::dynArr(int r,int c){
    data = new T*[r];
    for(int i=0;i<r; i++){
        data[i] = new T[c];
    }
    row = row;
    col = col;
}
template<class T>
dynArr<T>::~dynArr(){
    for(int i=0;i<row;i++){
        delete []data[i];
    }
    delete []data;
}
template<class T>
void dynArr<T>::setValue(int row, int col, T value){
   data[row][col]=value;
}
template<class T>
T dynArr<T>::getValue(int row, int col){

    return data[row][col];
}
