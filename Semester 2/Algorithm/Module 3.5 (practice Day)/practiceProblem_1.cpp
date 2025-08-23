#include <bits/stdc++.h>
using namespace std;

// taking adjaceny list
vector<vector<int>> adj_list(1005);

// taking visitor track and set the value to false
vector<bool> vis(1005, false);

// node count here
int nodeCount = 0;
// creating dfs for traversing through the graph
void dfs(int src)
{
    // no base case needed here because we are handling it below
    nodeCount++;
    vis[src] = true;
    for(int child : adj_list[src])
    {
        if(!vis[child])
        {
            vis[child] = true;
            dfs(child);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int src;
    cin >> src;
    dfs(src);
    cout << nodeCount;
    return 0;
}