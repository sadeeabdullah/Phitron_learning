
#include <bits/stdc++.h>
using namespace std;

// taking size array for tracking the size of set
vector<int> sz(100005, 1);

// taking leader array
vector<int> par(100005, -1);

// find function
int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

int cnt = 0;
// creating dsu union function
void dsuUnion(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(leader1 == leader2)
    {
        cnt++;
        return;
    }

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
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        dsuUnion(a, b);
    }

    cout << cnt << endl;
    return 0;
}