#include<bits/stdc++.h>
using namespace std;
int main(){
    int len;
    cin>>len;
    int* arr = new int[len];

    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";
    }

    delete []arr;
    //test
    cout<<arr[0]<<endl;
return 0;
}
