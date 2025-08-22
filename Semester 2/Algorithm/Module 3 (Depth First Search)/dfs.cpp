#include <bits/stdc++.h>
#define sz 1005
using namespace std;

// taking adjacency  list
vector<vector<int>> adj_list(sz, vector<int>());

// taking visitor tracking vector
vector<bool> vis(sz, false);

// dfs
void dfs(int src)
{
    // base case
    // here we have no need of base case if you look down in this function that the recursive call is happending under a condition and when the condition is not satisfied then the call will be automatically off.

    // printing source node
    cout << src << " ";
    vis[src] = true;

    for (int child : adj_list[src])
    {
        if (!vis[child])
            dfs(child);
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

    dfs(0);
    return 0;
}