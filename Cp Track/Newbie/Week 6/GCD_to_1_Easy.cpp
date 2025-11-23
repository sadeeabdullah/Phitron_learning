// pr oblem link :https://www.codechef.com/problems/GCD_1?tab=statement

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
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
   tInt(n);
   tInt(m);

   for(int i = 1; i <= n; i++)
   {

       for(int j = 1; j <= m; j++)
       {
           if((i + j )% 2  == 0)
           {
               cout << 2 << " ";
           }
           else
               cout << 3 << " ";
       }
       cout << nl;
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