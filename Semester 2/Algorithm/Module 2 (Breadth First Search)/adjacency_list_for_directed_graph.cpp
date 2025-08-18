#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    // creating adjacency list
    vector<int> adj_list[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj_list[i].size(); j++)
            cout << adj_list[i][j] << " ";
        cout << endl;
    }

    return 0;
}