#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll, ll>> adj_list[100005];

vector<ll> dis;
vector<ll> parent(100005, -1);

// creating dijkstra
void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>,vector<pair<ll,ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});

    dis[src] = 0;
    while (!pq.empty())
    {
        auto par = pq.top();
        pq.pop();

        ll par_node = par.second;
        ll par_dis = par.first;

        for(auto child : adj_list[par_node])
        {
            ll childNode = child.second;
            ll childDis = child.first;
            if (par_dis + childDis < dis[childNode])
            {
                dis[childNode] = par_dis + childDis;
                pq.push({dis[childNode], childNode});
                parent[childNode] = par_node;
            }
        }
    }
}
int  main()
{
    ll n, m;
    cin >> n >> m;
    dis.assign(n + 1, 1e18);
    while (m--)
    {
        ll a, b, c;
        cin >> a >> b  >> c;
        adj_list[a].push_back({c, b});
        adj_list[b].push_back({c, a});
    }

    dijkstra(1);

    if (dis[n] == 1e18)
    {
        cout << -1 << endl;
    }
    else
    {
        ll node = n;
        vector<ll> path;
        while (node != -1)
        {
            path.push_back(node);
            node = parent[node];
        }

        reverse(path.begin(), path.end());
        for (int i : path)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}