#include<bits/stdc++.h>
#define SIZE 10
using namespace std;
bool g[SIZE][SIZE];
void intialize(){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            g[i][j] = false;
        }
    }
}
void printGraph(int n, int e){
    for(int i=0; i<e; i++){
        for(int j=0; j<e; j++){
            if(g[i][j] == true){
                cout<<i+1<<"->"<<j+1;
            }
            cout<<endl;
        }
    }
}
int main(){
    int nodes, edges,x,y;
    cout<<"enter nodes and edges: ";
    cin>>nodes>>edges;
    intialize();
    for(int i=0; i<edges; i++){
        cin>>x>>y;
        g[x][y] = true;
        g[y][x] = true;
    }
    printGraph(nodes, edges);
return 0;
}
