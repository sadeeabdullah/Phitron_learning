#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj_list(1005);

vector<bool> vis (1005, false);


void dfs(int src)
{
    // cout << src << " ";
    vis[src] = true;

    for(int child : adj_list[src])
    {

        if (!vis[child])
        {
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

    int cmpCount = 0;
    for(int i =0; i < n; i++)
    {
        if (!vis[i])
        {
            cmpCount++;
            dfs(i);
        }
    }
    cout << cmpCount ;
    return 0;
}