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
    ll n;   cin >> n;
    vector<ll> a;
    map<ll, ll> mp;
    for(ll i =0;i < n; i++){
        ll x;   cin >> x;
        a.push_back(x);
        mp[x]++;
    }

    if(mp.size() == 1){
        cout << (n * (n - 1)) / 2<<nl;
        return;
    }

    // cout << mx_val  <<nl;

    ll mx_rep =0,mx_num=0, zero_rep =0;
   // update map 
   for(auto [num, rep] : mp ){
        if(num == 0 ){
            zero_rep = rep;
        }else{
            if(rep >mx_rep){
                mx_rep= rep;
                mx_num = num;
            }
        }
   } 

   mp[mx_num]  += zero_rep;
   mp.erase(0);


   ll ans = 0;
   for(auto [num,rep]: mp){
        if(rep > 1){
            ans += (((rep) * (rep - 1)) / 2);
        }
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