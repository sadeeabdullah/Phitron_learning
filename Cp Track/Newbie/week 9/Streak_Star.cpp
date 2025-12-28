// probleml ink : https://www.codechef.com/problems/STKSTR
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
   ll n, m;    cin >> n >>m;
   vector<ll> a(n);    for(ll i = 0; i < n;i++) cin >> a[i];

   ll ans= 1;

   ll op = true;
   ll cnt = 1;

   // without multiplication
   for(ll i = 1; i < n; i++){

    // we will start new count when it  breaks the condition
    if(a[i - 1] <= a[i])
    {
        cnt++;
    }
    else{
            cnt = 1;
    }
    ans = max(cnt, ans);
   }

   // You need to try multiplying EACH element by m
   for(ll k = 0; k < n; k++){  
        ll temp = a[k]; 
        a[k] = temp * m; 
        
        cnt = 1;
        for(ll i = 1; i < n; i++){
            if(a[i] >= a[i-1]){  
                cnt++;
            }
            else{
                cnt = 1;
            }
            ans = max(ans, cnt);
        }
        
        a[k] = temp;  // Restore original value
   }
   cout<< ans <<nl;
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