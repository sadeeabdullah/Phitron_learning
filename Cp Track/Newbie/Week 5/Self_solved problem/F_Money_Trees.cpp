// problem link : https://codeforces.com/problemset/problem/1873/F

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
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main ()
{
    fastIO();
 
    testCase
    {
        tInt(n);
        tInt(k);
        vector<ll> a(n), h(n);

        loop(0, n - 1, i)
        {
            cin >> a[i];
        }
        loop(0, n - 1, i)
        {
            cin >> h[i];
        }

        ll fruit = a[0], l = 0, r = 1, ans = 0;

        if (fruit <= k)
        {
            ans = 1;
        }
        while(r < n)
        {
            if (h[r - 1] % h[r] != 0) // if the height condition fails start a new array
            {
                fruit = 0;
                l = r;
            }
            fruit += a[r];
            while(fruit > k && l <= r) 
            {
                fruit -= a[l];
                l++;
            }
            
            // if(fruit <= k && l <= r)
            ans = max(ans, r - l  + 1);
            r++;
        }

        cout << ans << nl;
    }
    return 0;
}