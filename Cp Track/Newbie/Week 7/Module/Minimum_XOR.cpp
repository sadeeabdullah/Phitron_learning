// problem link : https://www.codechef.com/problems/MINMXOR


//Bismillah hir rahmanir rahim
//keep Patience, Destiny is more beautiful


// key observation 
// check the xor first
// then check after removing every element from the xor when you get the minimum count then that is the anser


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
   int n;
   cin >> n;
   vector<int> a(n);
   int before_xor = 0;
   for(int i = 0; i < n; i++)
   {
        cin >> a[i];
        before_xor ^= a[i];
   }
//    cout << before_xor << nl;

   int min_xor = before_xor;
   // after removing each element
   for(int i = 0; i < n; i++)
   {
        min_xor = min(min_xor, before_xor ^ a[i]);
        
   }
   cout << min_xor << nl;
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