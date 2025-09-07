#include <bits/stdc++.h>
using namespace std;

int n, e;

// taking a size variable to store the number of component;
int sz_cmp;

// taking vector for tracking the leader of each node
vector<int> par;

// group size vector for storing the component size
vector<int> grp_sz;

// max group size is 1;
int grpSz_count = 1;

int find(int node)
{
    if (par[node] == -1)
        return node;

    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsuUnion(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (grp_sz[leader1] > grp_sz[leader2])
    {
        // changing the leader to leader1 of both
        par[leader2] = leader1;
        // increasing the group  size of leader1;
        grp_sz[leader1] += grp_sz[leader2];

        // checking the max group size here
        grpSz_count = max(grpSz_count, grp_sz[leader1]);
    }
    else
    {
        // changing the leader to leader1 of both
        par[leader1] = leader2;
        // increasing the group  size of leader1;
        grp_sz[leader2] += grp_sz[leader1];
        // checking the max group size here
        grpSz_count = max(grpSz_count, grp_sz[leader2]);
    }
    sz_cmp--;
}
int main()
{
    cin >> n >> e;

    sz_cmp = n;

    grp_sz.assign(n + 1, 1); // initially all group size is one;
    par.assign(n + 1, -1);   // initially everynode is its own leader;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        // dsu operation with it if it has not the same leader
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA != leaderB)
        {
            dsuUnion(a, b);
        }
        cout << sz_cmp << " ";


        cout << grpSz_count << endl;
    }
    return 0;
}