#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int,int>> adj_list[n];
    while (e--)
    {
        int a, b ,c;
        cin >> a >> b >> c; // here a and b is node and c is weight between them

            adj_list[a].push_back({b,c});
            adj_list[b].push_back({a,c}); // undirected // no need of the line if directed
        

    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (auto p : adj_list[i])
        {
            cout << p.first << " " << p.second <<",";
        }
        cout << endl;
    }
    return 0;
}