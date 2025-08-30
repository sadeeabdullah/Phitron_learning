#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[1005];
vector<int> dis(1005, INT_MAX);

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});

    dis[src] = 0;

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();

        // splitting
        int par_node = par.first;
        int par_dis = par.second;

        for (auto child : adj_list[par_node])
        {
            // splitting child
            int child_node = child.first;
            int child_dis = child.second;

            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                q.push({child_node, dis[child_node]});
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
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }
    return 0;
}