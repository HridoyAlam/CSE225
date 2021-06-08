#include "task3.h"
#include<bits/stdc++.h>
using namespace std;

dynArr::dynArr(){
    data = NULL;
    row = 0;
    col =0;
}
dynArr::dynArr(int r,int c){
    data = new int*[r];
    for(int i=0;i<r; i++){
        data[i] = new int[c];
    }
    row = row;
    col = col;
}
dynArr::~dynArr(){
    for(int i=0;i<row;i++){
        delete []data[i];
    }
    delete []data;
}
void dynArr::setValue(int row, int col, int value){
   data[row][col]=value;
}
int dynArr::getValue(int row, int col){

    return data[row][col];
}
