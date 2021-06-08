#include <bits/stdc++.h>
#include"dynarr.h"
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    DynArr d(5);


    //d.setValue(0, 255);
    //cout<<d.getValue(0)<<endl;

    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        d.setValue(i,n);
    }
    for(int i=0;i<5;i++){
        cout<<d.getValue(i)<<"\t";
    }

    return 0;
}
