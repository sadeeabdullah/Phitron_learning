#include <bits/stdc++.h>
using namespace std;

// declaring vector for adjacency list
vector<int> adj_list[1005];

// tracking array
bool vis[1005];

// for tracking level
int level[1005];



// bfs
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;


    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int x : adj_list[par])
        {
            if (!vis[x]){
                q.push(x);
            
            vis[x] = true;
            level[x] = level[par] + 1;}
        }
    }
}
int main()
{

    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    // setting the vis tracking to false
    memset(vis, false, sizeof(vis));

    // first node level is 0
    memset(level, -1, sizeof(level));

    int src, dst;
    cin >> src >> dst;
    bfs(src);

    cout << level[dst];
    
    return 0;
}