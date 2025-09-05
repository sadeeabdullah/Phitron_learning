#include <bits/stdc++.h>
using namespace std;

int par[1005];

int group_size[1005];
int find_par(int node) // O(Log N)
{
    // base case here

    if (par[node] == -1)
        return node;
    
    // recursive call
    int leader = find_par(par[node]);
    par[node] = leader; // this line update the leader and make it easier for next or new operation
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find_par(node1);
    int leader2 = find_par(node2);

    if (group_size[leader1] < group_size[leader2])
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
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));
    
    dsu_union(1,2);
    cout << find_par(4) << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << i << " -.>" << par[i] << endl;
    }
    return 0;
}