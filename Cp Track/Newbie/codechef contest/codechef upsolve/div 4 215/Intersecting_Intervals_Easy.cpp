// problem link ; https://www.codechef.com/problems/INTINT?tab=submissions

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
   ll n;
   cin >> n;

   vector<ll> a(n), b(n);
   for(ll i = 0 ; i < n; i++)
   {
        cin >>a[i];
   }
   for(ll i = 0 ; i < n; i++)
   {
        cin >>b[i];
   }

   // now we will store the maximum sum of every index of suffix and prefix  using maximum sub array sum kadanes algorithm
   vector<ll> pref_a(n), suff_a(n), pref_b(n), suff_b(n);

   pref_a[0] = a[0];
   suff_a[n - 1] = a[n - 1];
   pref_b[0] = b[0];
   suff_b[n - 1] = b[n - 1];

   // calculating prefix max for vector a
   for(ll i = 1; i < n;i++)
   {
        pref_a[i] = max(pref_a[i - 1] + a[i], a[i]);
   }

   // calculating suffix max for vector a
   for(ll i = n - 2; i >= 0;i--)
   {
        suff_a[i] = max(suff_a[i + 1] + a[i], a[i]);
   }


   // calculating prefix max for vector b
   for(ll i = 1; i < n;i++)
   {
        pref_b[i] = max(pref_b[i - 1] + b[i], b[i]);
   }

   // calculating suffix max for vector b
   for(ll i = n - 2; i >= 0;i--)
   {
        suff_b[i] = max(suff_b[i + 1] + b[i], b[i]);
   }


   ll ans = -1e18;

   for(ll i = 0 ; i <n; i++)
   {
        ans = max(((pref_a[i] + suff_a[i] - a[i] ) + (pref_b[i] + suff_b[i] - b[i] )), ans);
   }

   cout << ans << nl;
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