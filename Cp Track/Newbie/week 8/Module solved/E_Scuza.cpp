//  problem link : https://codeforces.com/problemset/problem/1742/E
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


void solve()
{
    ll n , q;      cin >> n >> q;
    vector<ll> a(n), pref(n),maxSoFar(n);  for(ll i = 0; i < n; i++)  cin >> a[i];   
    pref[0] = a[0];
    maxSoFar[0] = a[0];
    for(ll i= 1; i < n; i++) {
        
        pref[i] = pref[i - 1] + a[i];
        maxSoFar[i] = max(maxSoFar[i - 1], a[i]);
    } 

    while(q--){
        ll x;  cin >> x;
        auto pos = upper_bound(maxSoFar.begin(), maxSoFar.end(), x) - maxSoFar.begin();
        if(pos >= n)
        {
            cout << pref[n - 1] << " ";
            continue;
        }

        if (pos == 0)
        {
            cout << 0 << " ";
            continue;
        }
        cout << pref[pos - 1] << " ";
    }
    cout << nl;
}
int main ()
{
    fastIO();
    testCase{
        solve();
    }
    return 0;
}