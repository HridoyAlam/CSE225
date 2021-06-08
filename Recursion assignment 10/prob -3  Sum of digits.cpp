#include<bits/stdc++.h>
using namespace std;

int sumD(int n){
    if(n == 0){
        return 0;
    }
    else{
        return sumD(n/10) + n%10;
    }

}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Sum of Digit of Given Number is: "<<sumD(n)<<endl;
return 0;
}

