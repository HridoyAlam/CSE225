#include <iostream>
#include"task1.h"
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    dynArr ob1();
    dynArr ob2(5);

    for(int i=0;i<5;i++){
        int temp;
        cin>>temp;
        ob2.setValue(i,temp);
    }
    for(int i=0;i<5;i++){
        cout<<ob2.getValue(i)<<"\t";

    }
    return 0;
}
