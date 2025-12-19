//Bismillah hir rahmanir rahim
//keep Patience, Destiny is more beautiful


#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) string var; cin >> var;
#define testCase int t; cin >> t; while(t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int n, m;
vector<int> a;

int BinarySearch(int x)
{
    int l = 0, r = n - 1, mid, ans;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] == x)
        {
            ans = mid;
            // checking to the left for searching the first occurance of the value
            // r = mid - 1;

            // checking to the right for searching the first occurance of the value
            l = mid + 1;
        }
        else if(a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

void solve()
{
   cin >> n >> m;
   a.resize(n);
   for(int i = 0; i < n; i++)
        cin >> a[i];

    while(m--)
    {
        int x;
        cin >> x;
        cout << BinarySearch(x) << nl;
    }
}
int main ()
{
    fastIO();
    solve();
    return 0;
}