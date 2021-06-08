#include<bits/stdc++.h>
#define N 8
using namespace std;
int graph[N][N];
bool visited[N][N];

int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {-1, 1, 1, -1, 2, -2, 2, -2};

void intialize(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            graph[i][j] = 0;
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            visited[i][j] = false;
        }
    }

}
int is_valid(int x, int y) {
  if (x >=0 && x<N && y>=0 && y<N && visited[x][y] == false)
    return true;
  return false;
}
void dfs(int x, int y){
    int cnt=0;
    int line =0;

    visited[x][y] = true;
    for(int i =0; i< N; i++){
        int next_x = x+dx[i];
        int next_y = y+dy[i];

        if(is_valid(next_x, next_y)){
            cnt++;
            dfs(next_x, next_y);
        }
    }
    cout<<"required steps: "<<cnt<<endl;
}

int main(){
    intialize();
    graph[2][4] = 1;
    dfs(5,5);
return 0;
}
