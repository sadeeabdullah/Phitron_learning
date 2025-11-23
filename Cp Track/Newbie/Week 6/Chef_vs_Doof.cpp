// problem link : https://www.codechef.com/problems/CLLCM?tab=statement

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
#define tInt(var) \
    int var;      \
    cin >> var;
#define tLL(var) \
    ll var;      \
    cin >> var;
#define tStr(var) \
    string var;   \
    cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    tInt(n);
    vector<int> a(n);
    loop(0, n - 1, i)
    {
        cin >> a[i];
    }

    bool isEven = false;
    loop(0, n - 1, i)
    {
        if (a[i] % 2 == 0)
        {
            isEven = true;
            break;
        }
    }

    if (isEven)
    {
        no;
    }
    else
    {
        yes;
    }
}
int main()
{
    fastIO();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}