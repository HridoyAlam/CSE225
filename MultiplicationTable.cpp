#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int row,col,mul,r,c;
  cin>>row>>col;
  r=1;
  cout<<"          MULTIPLICATION TABLE          "<<endl;
  cout<<"----------------------------------------"<<endl;
  do{
    c=1;
    do{
      mul=c*r;
      printf("%4d",mul);
      //cout<<fixed<<setprecision(4)<<mul;
      c +=1;
    }
    while(c<=col);
    cout<<endl;
    r +=1;
  }
  while(r <=row);
  cout<<"----------------------------------------"<<endl;
  return 0;
}
