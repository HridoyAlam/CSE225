//#define MIN 99999
#include<bits/stdc++.h>
using namespace std;

int minArr(int a[], int n){
    int MIN = 99999;
    if(n== 1){
        return a[0];
    }
    return min(a[n-1], minArr(a,n-1));
}

int main(){

    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<"th Index value: ";
        cin>>arr[i];
    }
    cout<<"Minimum number of array is: "<<minArr(arr, n)<<endl;
return 0;
}
