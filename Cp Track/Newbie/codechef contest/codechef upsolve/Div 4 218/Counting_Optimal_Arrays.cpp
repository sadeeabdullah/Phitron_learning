// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()  ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) string var; cin >> var;
#define testCase  int t; cin >> t;while (t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n,m; cin >> n >> m;
    //we need to find the MSB for m;    see the explaination if you dont get why

    if(n == 1){
        cout << m + 1 << nl;
        return;
    }
    ll msb = 0;
    ll tmp = m;
    // while(m > 0){
    //     m >>= 1;
    //     msb++;
    // }

    // msb --;  // because we take it from 0
    // or we can do is use log2 base for getting the bits
    msb = floor(log2(m));
    cout << ((tmp -( 1 << msb) + 1)* 2) << nl;
}
int main()
{
    fastIO();

    testCase
    {
        solve();
    }
    return 0;
}