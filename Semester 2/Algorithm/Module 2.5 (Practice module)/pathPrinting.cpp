#include <bits/stdc++.h>
using namespace std;

// taking array of vector for adjacency list
vector<int> adj_list[1005];

// we are taking an array for tracking for making sure that any node is not duplicated or tracking if it is visited or not
bool vis[1005];

// taking another array to track the level;
int level[1005];

// we are taking another array for tracking the node for the child nodes
int parent[1005];

// we are creating function to take input in bfs
void bfs(int src)
{
    // taking a queue to store the graphs nodes
    queue<int> q;
    q.push(src);
    vis[src] = true; // setting the tracker to true;
    level[src] = 0; // first node or the root node or the  source node always in the level 0;

    // we will continue the process untill the queue is  empty
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
                level[child] = level[par] + 1;
                parent[child] = par; // now we are setting the child index value to the parent number;
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
        adj_list[b].push_back(a); // beacuse the given graph is undirected
    }

    // setting all the tracker to false
    memset(vis, false, sizeof(vis));

    // setting all the level to -1;
    memset(level, -1, sizeof(level));

    // setting all the parent nodes to  -1 ;
    memset(parent, -1, sizeof(parent));

    int src, dst;
    cin >> src >> dst;
    bfs(src);

    // // so now printing all the parent node of the given graph nodes
    // for(int i = 0; i < n; i++)
    // {
    //     cout <<" parent node of " << i << "is --> " << parent[i] << endl;
    // }

    // taking a vector for storing the path;
    vector<int> path;
    // now printing the path in backward;
    int node = dst;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());
    for(int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    return 0;
}