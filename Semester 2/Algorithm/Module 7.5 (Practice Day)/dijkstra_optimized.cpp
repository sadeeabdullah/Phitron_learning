#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[1005];
vector<int> dis(1005, INT_MAX);

void dijkstra(int src) // tc : O(v log v  + E log v) or Log V ( V + E)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // tc for push and pop O(log V)

    pq.push({0, src}); // giving the dis first as we know pair in priority queue sort by the first value

    dis[src] = 0;

    while (!pq.empty()) // tc : O(v)
    {
        auto par = pq.top();
        pq.pop(); // tc : O(v log v)

        // splitting
        int par_node = par.second;
        int par_dis = par.first;

        for (auto child : adj_list[par_node]) // tc : O(E)
        {
            // splitting child
            int child_node = child.first;
            int child_dis = child.second;

            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                pq.push({dis[child_node], child_node}); // tc : (E log V)
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