//problem link : https://codeforces.com/contest/1216/problem/D

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
    tInt(n);
    vector<ll> a(n);

    ll max_val = 0 ;

    loop(0, n - 1, i)
    {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }

    ll gcd_val = 0 ;
    ll total_diff = 0;

    loop(0, n - 1, i)
    {
        ll diff = max_val - a[i];
        gcd_val = __gcd(gcd_val, diff);
        total_diff += diff;
    }

    ll y = total_diff / gcd_val;
    ll z = gcd_val;

    cout << y << " " << z << nl;
    
    return 0;
}