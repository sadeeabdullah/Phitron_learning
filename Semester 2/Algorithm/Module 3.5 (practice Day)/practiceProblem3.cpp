#include <bits/stdc++.h>
using namespace std;

// taking adjacency list here
vector<vector<int>> adj_list(1005);

// taking vector for visitor tracking and setting all the value to false
vector<bool> vis(1005, false);

// creating dfs function for traversing through the adjacency list
int  dfs(int src)
{
    vis[src] = true;
    int cnt = 1;
    for(int child : adj_list[src])
    {
        if (!vis[child])
        {
            vis[child] = true;
            cnt+= dfs(child);

        }
    }
    return cnt;
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

    // here storing the component nodes count
    vector<int> nodeCount;
    // now we will traverse through the visited tracking vector and if the index is not visited then we will run a dfs on it and make a count and importantly in one dfs it will visit the node it is connected with and make them true. so we will get the component that are not connected to each other
    for(int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            int node = dfs(i);
            nodeCount.push_back(node);
        }
    }

    sort(nodeCount.begin(), nodeCount.end());
    for(int x : nodeCount)
    {
        cout << x << " ";
    }
    return 0;
}