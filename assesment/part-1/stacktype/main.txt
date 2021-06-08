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


int solution(Stack<int>a,Stack<int>b, int n, int m, int x){


    int sum = 0;
    int count = 0;
    int i =0;
    int j =0;

    while(i<n){
        sum += a.Top();
        a.Pop();
        i++;
        if(sum > x){
            i--;
            sum -= a.Top();
            a.Pop();
            break;
        }
    }

    count = i;
    while(j<m){
        sum += b.Top();
        j++;
        while(sum > x && i> 0){
            i--;
            sum -=a.Top();
            a.Pop();
        }
        count  = (sum <= x) ? MAX( (count), (i+j) ) : count;
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
