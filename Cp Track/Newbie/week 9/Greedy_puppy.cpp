//problem link : https://www.codechef.com/problems/GDOG
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
   ll n, m; cin >> n >> m;
   if (m == 1) {
    cout << 0 << nl;
    return;
   }
   if(m == 2)
   {
    if(n % m == 0)
    cout << 0 << nl;
    else cout << 1 << nl;
    return;
   }

   // we have to find the max bone he can get
   ll ans =0;
   for(ll i =1 ; i <= m; i++){
        if(n % i != 0)
        {
            ans = max(ans, (n % i));
        }
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