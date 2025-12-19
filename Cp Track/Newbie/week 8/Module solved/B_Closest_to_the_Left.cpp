// problem link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

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

int n, m;
vector<int> a;

int BinarySearch(int x)
{
    int l = 0, r = n - 1, mid;
    int ans = 0;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] <= x)
        {
            ans = mid + 1;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
void solve()
{
    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    while (m--)
    {
        int x;
        cin >> x;
        
        if (x < a[0])
        {
            cout << 0 << nl;
            continue;
        }
        
        cout << BinarySearch(x) << nl;
    }
}

int main()
{
    fastIO();
    solve();
    return 0;
}