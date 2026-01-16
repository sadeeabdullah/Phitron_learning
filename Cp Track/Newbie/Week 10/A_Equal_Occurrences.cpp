// problem llink : https://codeforces.com/problemset/problem/2146/A
// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define llmin LLONG_MIN
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
    map<ll, ll> mp;

    for(ll i = 0;i < n;i++){
        ll x;   cin >> x;
        mp[x]++;
    }

  // we will see if we take 1 time 2 time or 3 time or go oooo n time then what will be the maximum sub sequent

  ll mxtimes = 0;
  for(auto [val, cnt] : mp){
        mxtimes = max(mxtimes, cnt);
  }
  ll ans = 0;
  for(ll times = 1; times <= mxtimes; times++)
  {
    ll tmpAns = 0;
      for(auto [val, cnt] : mp){
          if(cnt >= times){
            tmpAns += times;
          }
      }
      ans = max(ans, tmpAns);
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