#include"task2.cpp"
#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    dynArr<int> ob1();
    //dynArr<int> ob1(1);
    dynArr<float> ob2(1);
    float temp;
    cin>>temp;
    ob2.setValue(0,temp);
    cout<<ob2.getValue(0)<<endl;

    //ob2.~dynArr();
    //cout<<ob2.getValue(0)<<endl;
    int newS;
    cout<<"New size of array: ";
    cin>>newS;
    ob2.allocate(newS);
    for(int i=0;i<newS;i++){
        float temp;
        cin>>temp;
        ob2.setValue(i,temp);
    }
    cout<<"Newly allocated array"<<endl;
    for(int i=0;i<newS;i++){
        cout<<ob2.getValue(i)<<"\t";
    }
    ob2.~dynArr();
    return 0;


}
