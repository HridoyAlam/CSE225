#include<bits/stdc++.h>
using namespace std;

int decToBin(int n){
    if(n==1)
        return 1;
    else
        return (n%2)+ 10* decToBin(n/2);

}

int main(){
    int n;
    cout<<"Enter a number in Decimal: ";
    cin>>n;
    cout<<"Binary value is: "<<decToBin(n)<<endl;
return 0;
}

