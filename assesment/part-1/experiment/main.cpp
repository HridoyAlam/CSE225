#include<bits/stdc++.h>
#include <iostream>
#include"stacktype.cpp"
#define MAX(a,b) a>b ? a: b
using namespace std;


void PrintStack(Stack<int>t){
    Stack<int>aux;

    while(!t.isEmpty()){
        aux.Push(t.Top());
        t.Pop();
    }
    while(!aux.isEmpty()){
        t.Push(aux.Top());
        cout<<aux.Top()<<"\t";
        aux.Pop();
    }
    cout<<"\n"<<endl;

}


int solution(Stack<int>ta,Stack<int>tb, int n, int m, int x){
    Stack<int>a;
    Stack<int>b;

    while(!ta.isEmpty()){
        a.Push(ta.Top());
        ta.Pop();
    }

    while(!tb.isEmpty()){
        b.Push(tb.Top());
        tb.Pop();
    }

    int sum = 0;
    int count = 0;
    int i =0;
    int j =0;
    while(j < m && sum+a.Top() <= x){
        sum = sum + b.Top();
        b.Pop();
        j++;
    }
    count = j;

   for(int i = 1; i<=n;i++){
    sum +=a.Top();
    a.Pop();

    while(sum > x && j >0){
        j--;
        sum -=b.Top();
        b.Pop();
    }
    if(sum > x){
        break;
    }
    count = max(count, i+j);
   }

    return count;
}

int main()
{
    Stack<int>a;
    Stack<int>b;

    int n,m,x;

    cin>>n>>m>>x;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.Push(temp);
    }

    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        b.Push(temp);
    }

    int res = solution(a,b,n,m,x);
    cout<<res<<endl;

}
