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

ll oddDgtCnt = 0, evenDgt = 0 , mxDgt = 0, lastDGt = 0;

void digit(ll n){
    while(n > 0){
        ll dg = n % 10;
        mxDgt = max(mxDgt, dg);
        if(dg & 1) oddDgtCnt++;
        else evenDgt++;
        n /= 10;
    }
    // cout << nl;
}
void solve()
{
    oddDgtCnt =  evenDgt = mxDgt = 0;

    ll n;   cin >> n;

    lastDGt = n % 10;
    if(n < 10){
        if(n % 2 == 1){
            cout << 0 << nl;
        }else{
            cout << -1 << nl;
        }
        return;
    }

    if(n & 1){
        cout << 0 << nl;
        return;
    }
    digit(n);

    if(oddDgtCnt > 0){
        cout << 1 << nl;
        return;
    }
    if(oddDgtCnt == 0){
        if(mxDgt != lastDGt){
            cout << 2 << nl;
        }else{
            cout << 3 << nl;
        }
        return;
    }

    // cout << oddDgtCnt << " " << evenDagt << nl;
    // cout << mxDgt << " " << lastDGt << nl;

    // cout << evenDgt << " " << oddDgtCnt << nl;
    // cout << max(evenDgt, oddDgtCnt) << nl;
    
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