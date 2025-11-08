// problem link : https://cses.fi/problemset/task/1641

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
using namespace std;

int main ()
{
    fastIO();
    int n, x;
    cin>> n >> x;
    vector<pair<int,int>> a;
    loop(0, n - 1, i)
    {
        int x;
        cin >> x;
        a.push_back({x, i + 1});
    }

    sORT(a);

    for(int l = 0; l < n - 2; l++)
    {
        ll req_sum = x - a[l].first;
        int j = l + 1;
        int k = n - 1;
        while(j < k)
        {
            if (a[l].first + a[j].first + a[k].first == x)
            {
                cout  << a[l].second << " " <<  a[j].second << " " <<  a[k].second << nl;
                return 0;
            }
            else if (a[l].first + a[j].first + a[k].first > x)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

        cout << "IMPOSSIBLE" << nl;

    return 0;
}