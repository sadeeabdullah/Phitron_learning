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
   ll n;   cin >> n;
   vector<ll> a(n);    for(ll i = 0; i < n; i++)  cin >>a[i];

   if(n ==2){
    cout << 0 <<nl;
    return;
   }

   vector<ll> diff;
   for(ll i  = 0; i < n - 1; i++){
    diff.push_back(abs(a[i] - a[i + 1]));
   }

   ll ans = 0;



   ll gcd_base = diff[0];

   for(ll i = 1;i < diff.size(); i++){

        gcd_base = __gcd(gcd_base, diff[i]);

   }

   for(ll i = 0;i  < diff.size(); i++)
   {
        ans += (diff[i] / gcd_base) - 1;
   }
   cout << ans << nl;
}
int main ()
{
    fastIO();
    testCase{

        solve();
    }
    return 0;
}