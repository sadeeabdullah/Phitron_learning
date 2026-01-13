// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()  ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) string var; cin >> var;
#define testCase  int t; cin >> t;while (t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n, k;    cin >> n >> k;
    vector<ll> a(n);    for(ll i = 0; i < n; i++)   cin >> a[i];

    ll ans = 0;
    ll cnt = 0;
   ll sum =0;
    ll l = 0, r = 0;
   while(r < n){
        sum += a[r];
        if(sum <= k){
            ans = max(ans, (r - l + 1));
        }else{
            l = r ;
        }
        r++;
   }

    cout << ans << nl;
}
int main()
{
    fastIO();

    testCase
    {
        solve();
    }
    return 0;
}