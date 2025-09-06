#include <bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> sz;
// find function for dsu
int find(int src)
{
    if (par[src] == -1)
        return src;

    int leader = find(par[src]);
    par[src] = leader;
    return leader;
}

// we are using set to remove the duplicated value;

int n, m;

// creating function for union
void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (sz[leader1] >= sz[leader2])
    {
        par[leader2] = leader1;
        sz[leader1] += sz[leader2];
    }
    else
    {
        par[leader1] = leader2;
        sz[leader2] += sz[leader1];
    }
}
int main()
{
    cin >> n >> m;

    par.assign(n + 1, -1);
    sz.assign(n + 1, 1);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA != leaderB)
            dsu_union(a, b);
    }

    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        // taking 1 as a constant component
        int leader1 = find(1);
        int leader_node = find(i);
        if (leader1 != leader_node)
        {
            dsu_union(leader1, leader_node); // connectiong 2 component;
            result.push_back(leader_node);

        }
    }

    int cnt = result.size();
    cout << cnt  << endl;

    // print the actual edges to connect components
    for (int val : result)
    {
        cout << 1 << " " << val << endl; // every time after union 1 become the leader so
    }
    return 0;
}