// problem link :https://codeforces.com/problemset/problem/1676/E

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


void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    rsORT(a);
    
    // saving the prefix sum
    vector<int> prefix(n);
    prefix[0] = a[0];
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + a[i];

    
    while(q--){
        int x, ans = -1;   cin >> x;
        auto it = lower_bound(prefix.begin(), prefix.end(), x);
        if(it != prefix.end())
        {
            cout << (it - prefix.begin() + 1) << nl;
            continue;
        }
        cout << ans << nl;
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