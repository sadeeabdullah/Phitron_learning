#include <bits/stdc++.h>

#define sz 10005
using namespace std;

// creating adjacency list
vector<vector<int>> adj_list(sz, vector<int>());

// taking vector for visitor tracking
vector<bool> vis(sz, false);

// taking vector for tracking level
vector<int> level(sz, -1);

// bfs
void bfs()
{
    queue<int> q;
    q.push(0);
    vis[0] = true;
    level[0] = 0;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    bfs();

    int lvl; 
    cin >> lvl;

    // taking vector for reversing
    vector<int> levelNodes;

    for(int i = 0; i < n; i++)
    {
        if (level[i] == lvl)
            levelNodes.push_back(i);

    }

    reverse(levelNodes.begin(), levelNodes.end());

    for(int x : levelNodes)
    {
        cout << x << " ";
    }
    return 0;
}