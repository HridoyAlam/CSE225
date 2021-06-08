
#include <bits/stdc++.h>
using namespace std;

struct cell {
    int x, y;
    int dis;
    int item;
    cell() {}
    cell(int x, int y, int dis, int item)
        : x(x), y(y), dis(dis), item(item)
    {
    }
};

bool is_valid(int x, int y, int N)
{
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}

int minStepToReachTarget(int kingth[], int destination[],int N, int item){

    int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    queue<cell> q;
    q.push(cell(kingth[0], kingth[1], 0, 0));

    cell t;
    int x, y;
    int it = item;
    bool visit[N + 1][N + 1];
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visit[i][j] = false;

    visit[kingth[0]][kingth[1]] = true;

    while (!q.empty()) {
        t = q.front();
        q.pop();

        if (t.x == destination[0] && t.y == destination[1])
            return t.dis;

        for (int i = 0; i < 8; i++) {
            x = t.x + dx[i];
            y = t.y + dy[i];

            if (is_valid(x, y, N) && !visit[x][y]) {
                visit[x][y] = true;
                q.push(cell(x, y, t.dis + 1,it));
            }
        }
    }
}


int main()
{
    int item;
    int N = 30;
    //int kingth[2];

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
        cout<<"enter if\npawn(61 <-> 68):\nking(1):\nqueen(2):\nrocks(31<->32):\nknights(41-42):\nbishop(51-52): ";
        cin>>item;
        int destination5[] = {x,y};

        if(item>= 61 && item<=68){
            cout <<"Shortest Path from knight to pawn: "<<minStepToReachTarget(kingth, destination5, N,item);
        }


        cout<<endl;

    }

    return 0;
}
/*
3 5
*/
