#include <bits/stdc++.h>
using namespace std;

// creating vector for tracking leader
vector<int> par(1005, -1);

// creating vector for tracking size
vector<int> group_size(1005, 1);

// creating function to get the leader
int find(int src)
{
    if (par[src] == -1)
        return src;
    int leader = find(par[src]);
    return leader;
}

// creating function to doing the union
void dsu_Union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] > group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    bool isCycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
            isCycle = true;
        else
            dsu_Union(a, b);
    }

    cout << ((isCycle) ? "cycle detected." : "No cycle") << endl;
    return 0;
}