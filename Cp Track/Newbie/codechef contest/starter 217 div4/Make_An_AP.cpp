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
   vector<ll> a(n);
   for(ll i = 0 ; i < n; i++)
   {
    cin >> a[i];
   }

   ll first_element = a[0];
   ll last_element = a[n - 1];
   ll d = last_element - first_element;

   vector<ll> divisor;
   for(ll i = 1; i *i <= d; i++)
   {
    if(d%i ==0)
    {
        divisor.push_back(i);
        if(i != d/ i)
        {
            divisor.push_back(d / i);
        }
    }
   }

   ll ans = llmax;

   for(auto i : divisor)
   {
    bool flag = true;
    for(ll j = 0; j < n; j++)
    {
        if((a[j] - first_element) % i != 0)
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        ll total = d / i + 1;
        ans = min(ans, total - n);
    }
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