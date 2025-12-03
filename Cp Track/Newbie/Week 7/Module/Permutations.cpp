// problem link : https://cses.fi/problemset/task/1070

// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) \
    string var;   \
    cin >> var;
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n;
    int f = n;
    
    if(n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << nl;
        return;
    }

    for(int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
    for(int i = 1; i <= n;i += 2)
    {
        cout << i << " ";
    }

    cout << nl;
}
int main()
{
    fastIO();
    solve();
    return 0;
}