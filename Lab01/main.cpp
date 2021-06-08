#include<bits/stdc++.h>
using namespace std;

void swap_two(int* x, int *y){
    int t;

    t = *x;
    *x = *y;
    *y = t;
}

int sum_two(int* x, int *y){
    int sum = *x + *y ;
    return sum;
}

int main(){

    int a = 6;
    int ab = 8;
    float b = 7.5;

    int* pa;
    float* pb;

    pa = &a;

    cout<< a<<endl;
    cout<< ab<<endl;
    cout<< b << endl;

    cout<< pa<<endl;
    cout<< *pa<<endl;
    swap_two(&a,&ab);
    cout<<"A:"<<a<< " b:" <<ab<<endl;
    int sum = sum_two(&a,&ab);
    cout<< "Sum of two value:"<<sum<<endl;
return 0;
}
