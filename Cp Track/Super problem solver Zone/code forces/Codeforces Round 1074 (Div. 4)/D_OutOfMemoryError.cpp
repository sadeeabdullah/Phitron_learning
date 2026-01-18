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
    ll n, m, h;     cin >> n >> m >> h;
    vector<ll> a(n);    for(ll  i = 0; i < n; i++)  cin>>a[i];
    vector<ll> org = a;

    while(m--){
        ll b, c;    cin>> b >> c;
        b--;
        vector<ll> tmp = a;
        tmp[b] = tmp[b] + c;

        bool haveCrushed = false;
        
        for(ll i = 0;i < n; i++){
            if(tmp[i] > h){
                haveCrushed = true;
                break;
            }
        }

        if(haveCrushed) a = org;
        else a = tmp;
    }

    for(ll val : a){
        cout << val << " ";
    }
    cout << nl;

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