// problem link : https://www.codechef.com/problems/XORSMALL

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


// key observation:

// 1. if we do XOR between two number it can be smaller or greater both
// 2. if Most significant is on then obviously the XOR value would be smalller
// 3. if the most significant bits are not on (at least one  bit on) then the XOR value would be greateer
// 4. if we do XOR of  one numberm with another 0000… then it would be equal as the number.

void solve()
{
   int n;
   cin >> n;

   vector<int> a(n);

   int andO = INT_MAX;
   for(int i = 0; i < n;  i++)
   {
    cin >> a[i];
    andO = andO & a[i];
   }

   cout << andO <<nl;
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