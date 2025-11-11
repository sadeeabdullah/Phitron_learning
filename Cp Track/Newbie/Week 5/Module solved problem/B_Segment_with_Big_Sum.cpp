//problem link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

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
 
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    loop(0, n - 1, i)
    {
        cin >> a[i];
    }

    ll ans = llmax, sum = 0;
    ll l = 0, r = 0;
    while(r < n)
    {
        sum += a[r];  
        if (sum >= s)
        {
            while(sum >= s && l <= r)
            {
                ans = min(ans, r - l + 1);
                sum -= a[l];
                l++;
            }
        }
        
        
        r++;
    }

    cout << ((ans == llmax) ? -1 : ans ) << nl;
    return 0;
}