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

ll getMex(vector<ll> a,ll n, ll m){
    ll mex = 0;
    
    for(ll i =0 ; i < n;i++){
        if(a[i] - m == mex){
            mex++;
        }else if(a[i] - m > mex){
            return mex;
        }
    }
    return mex;
}

void solve()
{
    ll n;   cin >>n;
    vector<ll> minus;
    vector<ll> a(n); for(ll i =0 ;i < n; i++)   cin>> a[i];

    // ll mn = llmax;
    // for(ll val : a){
    //     if(val >= 0)
    //     mn = min(val, mn);
    //     else{
    //         minus.push_back(val);
    //     }
    // }

    // sORT(a);
    // ll ans = LLONG_MIN;
    // if( minus.empty()){
    //     ans = min (ans,getMex(a, n, mn));
    // }
    // else{

    //     for(ll v : minus){
    //         // cout << v << nl;
    //         ans = max(ans, getMex(a,n,-v));
    //     }
    // }
    sORT(a);

    ll ans = LLONG_MIN;
    for(ll val : a){
        ans = max(ans,getMex(a,n, val));
    }
    cout << ans <<nl;
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