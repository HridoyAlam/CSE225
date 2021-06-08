#include"task1.h"
#include<bits/stdc++.h>
using namespace std;
template<class t>
dynArr<t>::dynArr(){
    data = NULL;
    si - 0;

}
template<class t>
dynArr<t>::dynArr(int s){
    data = new t[s];
    si = s;
}
template<class t>
dynArr<t>::~dynArr(){
    delete []data;
}
template<class t>
t dynArr<t>::getValue(int index){
    return data[index];
}
template<class t>
void dynArr<t>::setValue(int index, t value){
    data[index] = value;
}
