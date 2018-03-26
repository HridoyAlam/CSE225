#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int GCD(int a,int b){
  if(b>a)
     return GCD(b,a);
  if(b==0)
     return a;
  else
     return GCD(b,a%b);
 }
int main(){
  int n,m;
  cout<<"Enter Two numbers"<<endl;
  cin>>n>>m;
  cout<<"GCD is : "<<GCD(n,m)<<endl;
  return 0;
}
