// problem link : https://cses.fi/problemset/task/1084

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
   int n, m, k; cin >> n >> m >> k;
   vector<int> a(n);    for(int i = 0; i  < n ;i++) cin >> a[i];
   vector<int> b(m);    for(int i = 0; i < m; i++)  cin >> b[i];
   sORT(a);
   sORT(b);

   int ans = 0;
    for(int i= 0, j =0; i < n && j < m;){
        if(abs(a[i] - b[j]) <= k)   ans++, j++, i++;
        else if (a[i] > b[j])   j++;
        else if (a[i] < b[j])   i++;
    }
   cout << ans << nl;
}
int main ()
{
    fastIO();
    solve();
    return 0;
}