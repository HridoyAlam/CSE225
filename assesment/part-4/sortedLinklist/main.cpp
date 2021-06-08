#include <iostream>
#include"sorted.h"
#include"sorted.cpp"
using namespace std;

void PrintGetNextItem(Sorted<int>ob1){
    int temp;

    for(int i = 0 ;i<ob1.lenghtIs();i++){
        ob1.getNextItem(temp);
        cout<<temp<<"\t";
    }
    cout<<endl;
}

int main()
{
    Sorted<int>s;
    int value = 9;
    s.insertItem(value);
    s.insertItem(4);
    s.insertItem(6);
    s.insertItem(1);
    s.insertItem(3);
    s.display();
    s.deleteItem(6);
    s.display();
    bool isFound = false;
    s.retrieveItem(value,isFound);
    if(isFound){
        cout<<value<<" is exist on the list"<<endl;
    }
    cout<<"Length of the list is: "<<s.lenghtIs()<<endl;
    s.deleteItem(3);
    s.display();
    cout<<"Length of the list is: "<<s.lenghtIs()<<endl;
    PrintGetNextItem(s);

    return 0;
}
