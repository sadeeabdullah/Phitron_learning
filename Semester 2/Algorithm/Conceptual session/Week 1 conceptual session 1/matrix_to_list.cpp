#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // adjacency matrix
    vector<vector<int>> adj_mat(n,vector<int> (n));

    for(int i = 0; i < n; i++)
    {
        for (int j =0; j < n; j++)
            cin >> adj_mat[i][j];
    }

    // taking adjacency list
    vector<vector<int>> adj_list(n, vector<int> ());

    for(int i = 0; i < n; i++)
    {
        for (int j =0; j < n; j++)
        {
            if (adj_mat[i][j] != 0)
            {
                adj_list[i].push_back(j);
            }
        }
    }


    // printing the adjaceny list
    for(int i = 0; i < n; i++)
    {
        cout << i << " --> ";
        for(int x : adj_list[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}