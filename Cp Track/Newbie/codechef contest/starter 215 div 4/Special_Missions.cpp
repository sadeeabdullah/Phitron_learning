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
   ll n, c;
   cin >> n >> c;
   vector<ll> a(n);
   for(ll i= 0; i < n; i++)
   {
    cin >> a[i];
   }

   string s;
   cin >> s;

   ll coin = 0, coin_sp = 0;
   ll coin_without_sp = 0;

   ll i = 0; 
   ll j = 0;
   bool isFound = false;
   for(int i= 0; i < n; i++)
   {
        if(s[i] == '1')
        {
            coin_sp += a[i];
        }
   }


   for(int i = 0; i < n; i++)

   {
        if(s[i] == '0')
        {
            coin_without_sp += a[i];
        }
   }

   if(coin_without_sp >= c)
   {
        // cout << coin_without_sp + coin_sp -c << nl;

        ll with_sp = coin_without_sp + coin_sp - c;
        ll ans = max(with_sp, coin_without_sp);
        cout << ans << nl;
   }
   else 
   {
    cout << coin_without_sp << nl;
   }

}
int main ()
{
    fastIO();
    testCase
    {

        solve();
    }
    return 0;
}