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


vector<ll> composite;
vector<bool> precompute(201, true);

void sieve(ll n){
    composite.push_back(1);
    composite.push_back(0);
    precompute[0] = precompute[1] = false;
    for(ll i = 2; i <= n; i++){
        if(precompute[i]){
            for(ll j = i * i; j <= n; j+=i){
                if(precompute[j]){
                    precompute[j] = false;
                composite.push_back(j);
                }
            }
        }
    }
}


void solve()
{
    ll n;   cin >> n;
    vector<ll> a(n + 1);    for(ll i = 1; i <= n; i++)  cin >> a[i];

    map<ll,ll> loc;     // store value and idx
    for(ll i = 1; i <= n; i++){
        ll val = a[i];
        for(ll j = 0; j <= composite.size(); j++){
            auto it = loc.find(composite[j] - a[i]);
            if(it != loc.end()){
                cout << loc[composite[j] - a[i]] << " " << i << nl;
                return;
            }
        }
        loc[val] = i;
    }

    cout << -1 << nl;
}
int main()
{
    fastIO();

    sieve(200);

    testCase
    {
        solve();
    }
    return 0;
}