// problem link : https://www.codechef.com/problems/ALIENOR


// key observation:
// by doing OR operation we never can make integer like 1, 2, 4, 8...
/// here is the binary representation :

///                                     0 0 0 1
///                                     0 0 1 0
///                                     0 1 0 0
///                                     1 0 0 0 ....

// if we have it using or operation we can make any integer between these value to 2 ^4 - 1 for this case ^4 is variable


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
   int n, k;
   cin >> n >> k;

   map<string, bool> v;
   for(int i = 0; i < n; i++)
   {
        string s;
        cin >> s;
        v[s]= true;
   }


   string c = "";
   for(int i = 0; i < k; i++)
   {
        c.push_back('0');
   }

   bool flag = true;
   for(int i = 0; i < k; i++)
   {
        c[i] = '1';
        if(!v[c])
        {
            flag = false;
            break;
        }

        c[i] = '0';
   }

   if(flag)
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
    testCase{
        solve();
    }
    return 0;
}