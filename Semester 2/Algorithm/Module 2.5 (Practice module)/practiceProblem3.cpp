#include <bits/stdc++.h>

#define sz 10005
using namespace std;

// creating adjacency list
vector<vector<int>> adj_list(sz, vector<int>());



int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int node;
    cin >> node;
    cout << adj_list[node].size() << endl;

    return 0;
}