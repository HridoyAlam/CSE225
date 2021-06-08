#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int arr[5] = {1,2,3,4,5};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    //dynamic array defined
    int* p = new int[5];
    p[0] = 1;
    p[1] = 2;

    cout<<p[0]<<endl;
*/
    // 2d array
    //int** arr = new int*[3];
    //arr[0] = new int[3];


    int row, col;
    cin>> row>> col;
    int** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }
    for(int i = 0; i<row;i++){
        for(int j=0;j<col;j++){
            int n;
            cin>>n;
            arr[i][j] = n;
        }
    }
    for(int i=0; i< row; i++){
        for(int j= 0; j<col ; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

return 0;
}
