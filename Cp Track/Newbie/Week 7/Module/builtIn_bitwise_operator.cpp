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
   // here in c++ we have some builtin bitwise operator;
   // 1. __builtin_popcount(var) --> it gives the count of on bit
   // 2. __lg(var) --> it gives the highest set bit or most significant bit or the position of the first on bit from the left

   cout << __builtin_popcount(39) << nl;
   cout << __builtin_popcountll(9) << nl; // for long long integer use ll 
   cout << __lg(39) << nl;
}
int main ()
{
    fastIO();
    solve();
    return 0;
}