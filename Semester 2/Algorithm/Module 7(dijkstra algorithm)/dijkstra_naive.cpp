#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[1005];

vector<int> dis(105, INT_MAX);

// tc : while detecting the time complexity we can say the worst case is every node can relaxation one node . so we have v node or vectices so the time complexity is O(V*E)

void dijkstra(int src)
{
    queue<pair<int,int>> q;
    q.push({src,0});

    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        // splitting pair
        int par_node = par.first;
        int par_dis = par.second;

        for (auto child : adj_list[par_node])
        {
            // splitting child
            int child_node = child.first;
            int child_dis = child.second;

            // if (path relaxation???) if we get short weight then update : par_dis + child_dis < dis{childNode} then relaxation possible
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


    // note memset function cannot set int_max but vector can or if you cannot do that then traverse and set manually.

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }
    return 0;
}