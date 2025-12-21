// problem link : https://codeforces.com/problemset/problem/474/B
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
    int n;  cin >> n;
    vector<int> a(n);   for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> pref(n);    pref[0] = a[0];     for(int i= 1; i < n; i++)   pref[i] = pref[i - 1] + a[i];

    int q;  cin >> q;
    while(q--){
        int x;  cin >> x;
        int pos = lower_bound(pref.begin(), pref.end(), x) - pref.begin();
        cout << pos + 1 << nl;
    }
}
int main ()
{
    fastIO();
    solve();
    return 0;
}