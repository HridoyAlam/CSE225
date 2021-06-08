//0 1 1 2 3 5 8 13 21

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fact(n-1)+fact(n-2);
    }

}

int main(){
    int n;
    cin>>n;
    cout<<"Nth Factorial Number is: "<<fact(n)<<endl;
return 0;
}

