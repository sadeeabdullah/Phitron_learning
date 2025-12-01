// PROBLEM LINK : https://codeforces.com/problemset/problem/1991/B

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
   int n ;
   cin >> n;
   vector<int> b(n-1);
   for(int i = 0; i < n - 1; i++)
   {
        cin >> b[i];
   }


   vector<int> a (n);
   // setting the first and last value
   a[0] = b[0];
   
   bool flag = true;
   
   for(int i = 1; i < n - 1; i++)
   {
       a[i] = b[i - 1] | b[i];
       
    }
    a[n - 1] = b[n - 2];
    
   for(int i = 0; i < n - 1; i++)
   {
        if((a[i] & a[i + 1] )!= b[i ])
        {
            cout << -1 << nl;
            return;
        }
   }

        for(auto v : a)
        {
            cout << v << " ";
        }
        cout << nl;

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