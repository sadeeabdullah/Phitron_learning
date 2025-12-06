// problem link : https://www.codechef.com/problems/P2HOME

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


// key observation the both of the vector should be in the same order if one is increasing and other other one is in decreasing order then in some point the two element will be equal (ai == ai + 1)

void solve()
{
   int n;
   cin >> n;

   vector<int> a(n), b(n);
   for(int i = 0; i  < n; i++)
   {
        cin >> a[i];
   }
   for(int i = 0; i  < n; i++)
   {
        cin >> b[i];
   }

   bool flag = true;
   for(int i = 0 ;i < n - 1; i ++)
   {
        if(a[i] < a[i + 1] != b[i] < b[i+ 1])
        {
            flag  = false;
            break;
        }
   }

   if (flag)
   {
    yes;
   }
   else
   {
    no;
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