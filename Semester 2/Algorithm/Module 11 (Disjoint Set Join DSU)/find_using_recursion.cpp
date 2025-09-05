#include <bits/stdc++.h>
using namespace std;

int par[1005];

int find_par(int node) // O(N)
{
    cout << node << endl;
    // base case here

    if (par[node] == -1)
        return node;
    
    // recursive call
    int leader = find_par(par[node]);
    return leader;
}
int main()
{
    memset(par, -1, sizeof(par));
    
    // now assume that union operation has been done
    par[0] = 1;
    par[1] = -1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    cout << find_par(4) << endl;
    return 0;
}