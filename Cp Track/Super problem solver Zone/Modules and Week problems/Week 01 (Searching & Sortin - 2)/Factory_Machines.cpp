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
    ll n, t;    cin >> n >> t;
    vector<ll> a(n);    for(ll i= 0;i < n; i++) cin >>a[i];

    auto ok = [&](ll s){
        ll cnt = 0;
        for(ll i = 0;i < n;i++){
            cnt += s / a[i];

            if(cnt >= t)
                return true;
        }

        return false;
    };

    ll l = 1, r = 1e18, ans = 0, mid;

    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r  = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    cout << ans << nl;
}
int main()
{
    fastIO();


        solve();
    
    return 0;
}