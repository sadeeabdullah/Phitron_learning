#include <bits/stdc++.h>
using namespace std;

int n, e;

vector<int> adj_list[1005];


int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        if (adj_list[x].empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(adj_list[x].begin(),adj_list[x].end(), greater<int>());
            for (int node : adj_list[x])
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }
    return 0;
}