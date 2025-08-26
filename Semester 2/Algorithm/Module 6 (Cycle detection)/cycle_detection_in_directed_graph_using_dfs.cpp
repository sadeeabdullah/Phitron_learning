#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
vector<bool> vis(1005,false);
// taking path visitor tracking array
vector<bool> path(1005, false);
bool flag = false;
void dfs(int src)
{
    vis[src] = true;
    path[src] = true;

    for(int child : adj_list[src])
    {
        if (vis[child] && path[child])
            flag = true;
        if (!vis[child])
            dfs(child);
    }

    // while backtracking making the path not visited
    path[src] = false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b); // only this because one way connection
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    cout << ((flag) ? "cycle detected" : "no cycle") << endl;
    return 0;
}