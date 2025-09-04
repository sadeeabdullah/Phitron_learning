// problem link: //  https://cses.fi/problemset/task/1673

// solution:
#include <bits/stdc++.h>

#define ll long long int
# define nl endl

using namespace std;

// class for edge
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

vector<Edge> edge_list;

ll pinf = 1e17;
ll ninf = -1 *  pinf;
vector<ll> dis(2505,pinf); // setting all the avlue to the highest value;
int n, m;

// taking the distance array

void bellman_ford(int src)
{
    dis[src] = 0;

    for(int i = 1; i <= n; i++) // in every loop we will get at least one best distance
    {
        for (auto [a, b, c] : edge_list) 
        {
            if (dis[a] == pinf) continue;
            dis[b] = min(dis[a] + c, dis[b]);
        }
    }

    // now we will run this again so if any cycle is there it will be detected and distance will be updated to ninf
    for(int i = 1; i <= n; i++) // in every loop we will get at least one best distance
    {
        for (auto [a, b, c] : edge_list) 
        {
            if (dis[a] == pinf) continue;
            if (dis[a] + c < dis[b])
                dis[b] = ninf;
        }
    }
}

int main()
{
    cin >> n >> m;
    
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        c = -1 * c; // we are multiplying -1 with because we have to get the highest weight but here with bell man we can get the lowest so we will multiply -1 again when showing the largest.
        
        edge_list.push_back(Edge(a, b, c));
    }

    bellman_ford(1);

    cout << ((dis[n] == ninf) ? -1 : dis[n]* -1) << nl;
    return 0;
}