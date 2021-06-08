#include"task3.cpp"
#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int row, col;
    cin>>row>>col;
    dynArr<int> ob1(row,col);
    for(int i=0; i<2;i++){
        for(int j=0;j<2;j++){
            int temp;
            cin>>temp;
            ob1.setValue(i,j,temp);
        }
    }
    cout<<"postion of O O is: "<<ob1.getValue(0,0)<<endl;

    ob1.~dynArr();
    //cout<<"postion of O O is: "<<ob1.getValue(0,0)<<endl;

    return 0;


}
