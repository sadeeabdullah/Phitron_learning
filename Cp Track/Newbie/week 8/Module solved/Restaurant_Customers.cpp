// problem link : https://cses.fi/problemset/task/1619
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

    map<int,int> mp;
   int n;   cin >> n;

   while(n--)
   {
        int enter, exit;    cin >> enter >> exit;
        mp[enter]++, mp[exit + 1]--;
   }

   int cnt =0, ans = 0;
   // we cannot use 10^9 size vector so we have to use map for that
   for(auto [f, s]: mp){
    cnt+=s;
    ans = max(ans, cnt);
   }
   cout << ans << nl;
}
int main ()
{
    fastIO();
    solve();
    return 0;
}