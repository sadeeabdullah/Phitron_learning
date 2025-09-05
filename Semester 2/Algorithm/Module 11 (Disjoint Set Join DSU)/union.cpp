#include <bits/stdc++.h>
using namespace std;

// we are taking a parent array for leader tracking
vector<int> par(1005, -1);

// we are takign another group size vector to track the size of each group
vector<int> group_size(1005, 1); // 1 because at least a group will contain 1 element into it initially.

int find(int src)
{
    // cout << src << " ";
    // here is the base case
    if (par[src] == -1)
        return src;

    // here in the recursive call we are going to its parent or leader
    int leader = find(par[src]);
    par[src] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    // now we know that the group  leader will be based on the group size who have max size between two the will have the leader
    if (group_size[leader1] < group_size[leader2])
    {
        par[leader1] = leader2; // as the leader 2 have max size then the new parent of leader 2 will be leader of 1
        group_size[leader2] += group_size[leader1]; // increase the leader2 group size
    }
    else // it will also work for equal size
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
}
int main()
{
    dsu_union(1, 2);
    dsu_union(2, 0);
    dsu_union(3, 1);
    for (int i = 0; i < 6; i++)
        cout << i << " -> " << par[i] << endl;
    return 0;
}