#include <bits/stdc++.h>
using namespace std;

// taking the adjacency list in top so that any one can access
vector<int> adj_list[1005];

// taking an array for tracking
bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int x : adj_list[par])
        {
            if (!vis[x])
            q.push(x);
            vis[x] = true;
        }

    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis,false, sizeof(vis));
    int src, dst;
    cin >> src >> dst;

    bfs(src);

    cout << ((vis[dst])? "YES" : "NO") << endl;
    return 0;
}