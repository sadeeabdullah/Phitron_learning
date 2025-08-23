#include <bits/stdc++.h>
using namespace std;

// taking a adjacency matrix
int adj_mat[1005][1005];
int main()
{
    memset(adj_mat, 0, sizeof(adj_mat));
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y || adj_mat[x][y] == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}