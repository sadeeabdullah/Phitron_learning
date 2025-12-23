// problem link : https://cses.fi/problemset/task/1629

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
   int n;   cin >> n;
   vector<pair<int, int>> movies;  
   while (n--)
   {
        int x, y;  cin >> x >> y;
        movies.push_back({y, x});
   }
   // now sort the array 
   sORT(movies);

   int ans = 0, lastEnd = -1;
   for(auto [end, start] : movies)
   {
        if(start >= lastEnd)
        {
            ans++;
            lastEnd = end;
        }
   }
   cout << ans << nl;

}
int main ()
{
    fastIO();
    solve();
    return 0;
}