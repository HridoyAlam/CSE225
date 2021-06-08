#include"dynarr.h"
#include<bits/stdc++.h>
using namespace std;

DynArr::DynArr(){
    arr = NULL;
    sz = 0;
}
DynArr::DynArr(int s){
    arr = new int[s];
    sz = s;
}
DynArr::~DynArr(){
    delete []arr;
}
void DynArr::setValue(int index, int value){
    arr[index] = value;
}
int DynArr::getValue(int index){
    return arr[index];
}
