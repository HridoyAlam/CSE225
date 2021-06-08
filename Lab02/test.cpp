#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the row number:"<<endl;
    cin>>row;
    int **a=new int *[row];
    int *col_x = new int [row];

    for(int r=0;r<row;r++){
        cout<<"Enter the column no.of array "<<r<<endl;
        cin>>col_x[r];
        a[r]=new int[col_x[r]];

        cout<<"Enter the elements in the array:"<<endl;

        for(int j=0;j<col_x[r];j++){
            cin>>a[r][j];
        }
    }

    cout<<"The elements in the array:"<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col_x[i];j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<row; ++i)
        delete[] a[i];
    delete []a;
    delete []col_x;
    return 0;
}
