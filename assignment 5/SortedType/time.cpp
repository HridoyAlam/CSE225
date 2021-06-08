#include<bits/stdc++.h>
#include"time.h"
using namespace std;
//template<class St>
Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}
Time::Time(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}
void Time::setHour(int h){
    hour = h;
}
void Time::setMin(int n){
    minute = n;
}
void Time::setSec(int c){
    second = c;
}
int Time::getHour(){
    return hour;
}
int Time::getMin(){
    return minute;
}
int Time::getSec(){
    return second;
}
void Time::Print(){
    cout<<second<<" : "<<minute<<" : "<<hour<<endl;
}
bool operator==(Time a, Time b){
    if(a.getHour() == b.getHour() && a.getMin()==b.getMin() && a.getSec()==b.getSec())
        return true;
    else
        return false;
}
bool operator!=(Time a, Time b){
    if(a.getHour() != b.getHour() && a.getMin()!=b.getMin() && a.getSec()!=b.getSec())
        return true;
    else
        return false;
}
bool operator<(Time a, Time b){
    if(a.getHour() < b.getHour() && a.getMin()< b.getMin() && a.getSec()<b.getSec())
        return true;
    else
        return false;
}
bool operator>(Time a, Time b){
    if(a.getHour() > b.getHour() && a.getMin()> b.getMin() && a.getSec()>b.getSec())
        return true;
    else
        return false;
}
