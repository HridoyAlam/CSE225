/*
6. Write a recursive function that find the sum of the following series.
1 + 1/2 + 1/4 + 1/8 + ... + 1/2
n
*/

#include<bits/stdc++.h>
using namespace std;

double sum_s(int n){
    double sum;
    if(n==1){
        return 1;
    }
    return 1/pow(2,n-1)+sum_s(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of the series is: "<<sum_s(n)<<endl;
return 0;
}

