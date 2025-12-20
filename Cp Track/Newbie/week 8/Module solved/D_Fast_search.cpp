// problem link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

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
int n;

vector<int> a;

//implementing binary search for getting the upper boudn and lowerbound
int lowerBound(int x)  // First element >= x
{
    int ans = n;
    int l = 0, r = n - 1, mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] >= x)
        {
            ans = mid;
            r = mid - 1;  // Look left for earlier occurrence
        }
        else  // a[mid] < x
        {
            l = mid + 1;  // Look right
        }
    }
    return ans;
}

int upperBound(int x)  // First element > x
{
    int ans = n;
    int l = 0, r = n - 1, mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] > x)
        {
            ans = mid;
            r = mid - 1;  // Look left for earlier occurrence
        }
        else  // a[mid] <= x
        {
            l = mid + 1;  // Look right
        }
    }
    return ans;
}

void solve()
{
     cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //sorting the element
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        
        int leftIdx = lowerBound(l);   // First element >= l
        int rightIdx = upperBound(r);  // First element > r
        
        cout << (rightIdx - leftIdx) << " ";
    }
}
int main()
{
    fastIO();
    solve();
    return 0;
}