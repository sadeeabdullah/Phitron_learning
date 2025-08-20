#include <bits/stdc++.h>
using namespace std;

// taking adjacency list
vector<int> adj_list[100005];

// taking an array for tracking the visitor
bool vis[100005];

// taking another array for tracking the parent;
int parent[100005];

// doing bread first search
void bfs(int src, int dst)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        
        for(int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
                if (child == dst) return;

            }
        }
    }
}

// now doing break fist
int main()
{
    int n, e;
    cin >> n >> e;

    int src = 1, dst = n;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // the given graph is undirected
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    // setting vis array to false
    memset(vis, false, sizeof(vis));

    // setting parent array to -1;
    memset(parent, -1, sizeof(parent));

    bfs(src, dst);

    if (!vis[dst]) {
    cout << "IMPOSSIBLE\n";
    return 0;
}


    // taking vector for reversing the path;
    vector<int> path;

    int node = dst;
    int min_route = 0;
    while(node != -1)
    {
        path.push_back(node);
        min_route++;
        node = parent[node];

    }

    reverse(path.begin(), path.end());
    cout << min_route << endl;

    for(int x : path)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}