#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n <= 0){
        return 1;
    }
    else{
        return n * fib(n-1);
    }

}

int main(){
    int n;
    cin>>n;
    cout<<"Nth fibonacci Number is: "<<fib(n)<<endl;
return 0;
}
