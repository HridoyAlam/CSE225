
#include "task2.h"
#include<bits/stdc++.h>
using namespace std;

dynArr::dynArr(){
    data = NULL;
    si = 0;
}
dynArr::dynArr(int s){
    data = new int[s];
    si= s;
}
dynArr::~dynArr(){
    delete []data;
}
void dynArr::setValue(int index, int value){
    data[index] = value;
}
int dynArr:: getValue(int index){
    return data[index];
}
void dynArr::allocate(int n){
    delete []data;
    data= new int[n];
    si = n;
}
