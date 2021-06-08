#include"task1.h"
#include<bits/stdc++.h>
using namespace std;

dynArr::dynArr(){
    data = NULL;
    si - 0;

}
dynArr::dynArr(int s){
    data = new int[s];
    si = s;
}
dynArr::~dynArr(){
    delete []data;
}
int dynArr::getValue(int index){
    return data[index];
}
void dynArr::setValue(int index, int value){
    data[index] = value;
}
