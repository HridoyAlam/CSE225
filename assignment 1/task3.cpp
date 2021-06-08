#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,cl;
    cout<<"Enter number of Row: ";
    cin>>row;
    int **arr = new int*[row];

    int *col = new int[row];

    for(int i=0;i<row;i++){
        //int temp;
        //cin>>temp;
        //col[i] = temp;
        cout<<"Enter: "<<i<<"th row's column size: ";
        cin>>col[i];
        arr[i] = new int[col[i]];

    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<<"enter: "<<i<<" "<<j<<" value: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
//deleting
for(int i=0; i<row;i++){
    delete []arr[i];
}
delete arr;
delete []col;

return 0;
}
