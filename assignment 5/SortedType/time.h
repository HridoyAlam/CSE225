
#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time();
        Time(int, int, int);
        void setHour(int);
        void setMin(int);
        void setSec(int);

        int getHour();
        int getMin();
        int getSec();

        void Print();
        friend bool operator < (Time, Time);
        friend bool operator > (Time, Time);
        friend bool operator == (Time, Time);
        friend bool operator != (Time, Time);

};
#endif // TIME_H_INCLUDED
