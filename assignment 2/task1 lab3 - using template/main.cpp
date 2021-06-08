#include <iostream>
#include"task1.cpp"
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    dynArr<int> ob1(5);
    dynArr<float> ob2(5);



    for(int i=0;i<5;i++){
        float temp;

        cin>>temp;
        ob2.setValue(i,temp);
    }
    for(int i=0;i<5;i++){
        cout<<ob2.getValue(i)<<"\t";

    }

    return 0;
}
