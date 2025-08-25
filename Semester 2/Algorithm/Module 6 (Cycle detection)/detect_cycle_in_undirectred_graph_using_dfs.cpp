#include <bits/stdc++.h>
using namespace std;

int n, e;
bool vis[1004];
vector<int> adj_list[10000];

// tracking array
vector<int> parent(1005, -1);

// cycle detection
bool cycle;
void dfs(int src)
{
    vis[src] = true;

    for (int child : adj_list[src])
    {
        if (vis[child] && parent[src] != child)
            cycle = true;
        if (!vis[child])
        {
            parent[child] = src; // make sure you set the parent before recursion other wise perfect answer will not came
            dfs(child);
        }
    }
}
int main()
{
    cin >> n >> e;

    while (e--)
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
        if (!vis[i])
            dfs(i);
    }

    // for (int i = 0; i < n; i++)
    // cout << i << " " << parent[i] << endl;

    cout << ((cycle) ? "cycle detected" : "No cycle") << endl;
    return 0;
}