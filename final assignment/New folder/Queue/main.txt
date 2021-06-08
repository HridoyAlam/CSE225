#include <iostream>
#include<bits/stdc++.h>
#include"Queue.cpp"
#define N 30
using namespace std;
struct cell {
    int x, y;
    int distance;
    int item;
    cell() {}
    cell(int x, int y, int distance, int item)
        : x(x), y(y), distance(distance), item(item)
    {
    }
};

bool is_valid(int x, int y)
{
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}

int minStepToReachTarget(int kingth[], int destination[], int item){

    QueType<cell> q;

    int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    //queue<cell> q;
    q.Enqueue(cell(kingth[0], kingth[1], 0, 0));

    cell t;
    int x, y;
    int it = item;
    bool visit[N + 1][N + 1];
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visit[i][j] = false;

    visit[kingth[0]][kingth[1]] = true;

    while (!q.isEmpty()) {
        t = q.Front();
        q.Dequeue();

        if (t.x == destination[0] && t.y == destination[1])
            return t.distance;

        for (int i = 0; i < 8; i++) {
            x = t.x + dx[i];
            y = t.y + dy[i];

            if (is_valid(x, y) && !visit[x][y]) {
                visit[x][y] = true;
                q.Enqueue(cell(x, y, t.distance + 1,it));
            }
        }
    }
}


int main()
{
    int item;

    int a,b;
    cout<<"Enter knight location(a,b): ";
    cin>>a>>b;
    int kingth[] = {a,b};

    int n;
    cout<<"\nEnter Number of input: ";
    cin>>n;
    int x, y;
    while(n--){
        cout<<"enter x and y value: ";
        cin>>x>>y;
        cout<<"enter if pawn(61 <-> 68):king(1): queen(2): rocks(31<->32): knights(41-42): bishop(51-52): ";
        cin>>item;
        int destination[] = {x,y};

        if(item>= 61 && item<=68){
            cout <<"Shortest Path from knight to pawn: "<<minStepToReachTarget(kingth, destination,item);
        }
        else if(item>= 51 && item<=52){
            cout <<"Shortest Path from knight to bishop: "<<minStepToReachTarget(kingth, destination,item);
        }
        else if(item>= 41 && item<=42){
            cout <<"Shortest Path from knight to knight: "<<minStepToReachTarget(kingth, destination,item);
        }
        else if(item>= 31 && item<=32){
            cout <<"Shortest Path from knight to rocks: "<<minStepToReachTarget(kingth, destination,item);
        }
        else if(item == 2){
            cout <<"Shortest Path from knight to queen: "<<minStepToReachTarget(kingth, destination,item);
        }
        else{
            cout <<"Shortest Path from knight to king: "<<minStepToReachTarget(kingth, destination,item);
        }
        cout<<endl;

    }

    return 0;
}
/*
3 5
*/
