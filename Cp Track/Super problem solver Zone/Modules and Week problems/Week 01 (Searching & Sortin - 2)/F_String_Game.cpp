// problem link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F|


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
    string t, p;    cin >> t >> p;
    ll t_size = t.size(), p_size = p.size();
    ll x;
    vector<ll> a(t_size);   for(ll i = 0;i < t_size; i++)   cin >> a[i];
    auto ok = [&](ll mid){
        vector<bool> deleted(t_size + 1);   // going to track the character
        for(ll i=  0; i < mid; i++){
            deleted[a[i]] = true;
        }

        // looking for the sub sequence
        ll j = 0;
        for(ll i = 0; i < t_size;i++){
            if(t[i] == p[j] && !deleted[i + 1]){
                j++;
            }
            if(j == p_size){
                return true;
            }
        }
        return false;
    };
    // binary search part:
    ll l = 0, r = t_size, ans = 0, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1; 
        }
        else r = mid- 1;
    }
    cout << ans << nl;
}
int main()
{
    fastIO();

        solve();
    return 0;
}
// author : Sadee Abdullah