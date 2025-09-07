#include <bits/stdc++.h>
using namespace std;

// leader array
vector<int> par;

// group size array
vector<int> grp_sz;

int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

// dsu union function
void dsuUnion(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (grp_sz[leader1] > grp_sz[leader2])
    {
        par[leader2] = leader1;
        grp_sz[leader1] += grp_sz[leader2];
    }
    else
    {
        par[leader1] = leader2;
        grp_sz[leader2] += grp_sz[leader1];
    }
}

int main()
{
    int n;
    cin >> n;

    par.assign(n + 1, -1);
    grp_sz.assign(n + 1, 1);

    // vector for storing the cycle making node
    vector<pair<int, int>> extraNode;
    vector<pair<int, int>> roadCreate;
    int edges = n - 1;
    int newRoad = 0 ;

    while (edges--)
    {
        int a, b;
        cin >> a >> b;

        if (find(a) == find(b))
        {
            extraNode.push_back({a, b});
        }
        else
        {
            dsuUnion(a, b);
        }
    }


    // take 1 as a permanent leader of one node
    for (int i = 2; i <= n; i++)
    {
        int leader1 = find(1);
        int leader2 = find(i);
        if (leader1 != leader2)
        {
            roadCreate.push_back({1,i});
            dsuUnion(1, i);
        }
    }

    cout << roadCreate.size() << endl;

    for (int i = 0; i < roadCreate.size(); i++)
    {
        cout << extraNode[i].first << " " << extraNode[i].second << " " << roadCreate[i].first << " " << roadCreate[i].second << endl;
    }

    return 0;
}