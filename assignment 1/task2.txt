#include<bits/stdc++.h>
using namespace std;
int main(){

    int row, col;
    cin>>row>>col;
    char **arr = new char*[row];
    for(int i=0;i<row;i++){
        arr[i] = new char[col];
    }
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            char n;
            cin>>n;
            arr[i][j] = n;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    //deleting
    for(int i=0; i<row;i++){
        delete []arr[i];
    }
    delete []arr;

return 0;
}
