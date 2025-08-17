#include <bits/stdc++.h>
using namespace std;
int main()
{
    // now taking node number and edge number
    int n, e;
    cin >> n >> e;

    // now taking adjacency matrix(2d array) for storing the edge or the connections
    // int adj_mat[n][n] = {0}; we cannot make the array like  that because it is 2d array

    // we can manually set the value to 0
    int adj_mat[n][n];

    // for (int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         adj_mat[i][j] = 0;
    //     }
    // }

    // OR MORE SHORTLY WE CAN MEMORY SET THEM BY ZERO
    memset(adj_mat, 0, sizeof(adj_mat));

    
    // making the adjacent 1
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if (i == j)
                adj_mat[i][j] = 1;
    

    // now taking connections
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1; // no need of the connection from b to a because it is directed graph
    }

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}