#include <bits/stdc++.h>
#define sz 100005
using namespace std;

// taking adjacency list
vector<int> adj_list[sz];

// tracking visitor
bool vis[sz];

// taking parent
int parent[sz];

void bfs(int src, int dst)
{
    queue<int> q;
    q.push(src);

    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
                if (child == dst)
                    return;
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

    int query;
    cin >> query;
    while (query--)
    {
        int src, dst;
        cin >> src >> dst;

        if (src >= n || dst >= n) // out of bounds
        {
            cout << -1 << endl;
            continue;
        }

        // setting all visitor to false
        memset(vis, false, sizeof(vis));

        // setting all parent to -1;
        memset(parent, -1, sizeof(parent));

        bfs(src, dst);

        if (!vis[dst])
        {
            cout << -1 << endl;
        }

        else
        {
            int edge_count = 0;
            int node = dst;
            while (node != -1)
            {
                edge_count++;
                node = parent[node];
            }
            cout << edge_count - 1 << endl;
        }
    }
    return 0;
}