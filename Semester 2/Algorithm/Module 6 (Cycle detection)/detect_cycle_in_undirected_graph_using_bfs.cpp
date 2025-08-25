#include <bits/stdc++.h>
using namespace std;

int n, e;
bool vis[1004];
vector<int> adj_list[10000];

// tracking array
vector<int> parent(1005,-1);

// cycle detection
bool cycle;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int x : adj_list[par])
        {
            if(vis[x] && parent[par] != x)
                cycle = true;
            if (!vis[x])
            {
                q.push(x);
                vis[x] = true;
                parent[x] = par;
            }
        }

    }
}
int main()
{
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i])
            bfs(i);
    }
    
    cout << ((cycle) ? "cycle detected" : "No cycle") << endl;
    return 0;
}