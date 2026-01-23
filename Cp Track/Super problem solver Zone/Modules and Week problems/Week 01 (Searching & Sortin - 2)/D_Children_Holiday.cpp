// problem link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D
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
    ll m, a;    cin >> m >> a;
    vector<pair<ll, pair<ll, ll>>> assistants;
    for(ll i =0;i < a; i++){
        ll per_baloon, continousInflates, rest;     cin >> per_baloon >> continousInflates >> rest;
        assistants.push_back({per_baloon,{continousInflates, rest}});
    }

    vector<ll> can(a);
    auto ok = [&](ll mid){

        vector<ll> may(a);
        ll has = m;
        for(ll i = 0; i < a;i++){
            auto [per_baloon,times] = assistants[i];
            auto [con, rest] = times;

            ll fullSegment = (per_baloon * con) + rest;
            ll partialSegment = mid % fullSegment;
            ll cycles = mid / fullSegment;

            ll partialtimeInflates = partialSegment / per_baloon;
            ll baloonCount = ((cycles * con) + min(con,partialtimeInflates));  // think of a case where con is less than partial time Inflation --> 1 1 3 --> assume we have 2 min then 2 / 1 = 2. is this ok?where is the rest time? thats why con will be the answer for the partial time inflation

            ll curr = min(has, baloonCount);        // here we are updating the value according to the need. suppose we need 5 baloon and we can make 10 what we will take? 5
            has -= curr;
            may[i] = curr;
        }
        // if has become zero means we inflates all baloons;
        if(!has){
            for(ll i =0 ;i < a; i++){
                can[i] = may[i];
            }
        }
        return (!has);
    };
    // Binary search here
    ll l = 0, r = 1e8, mid, ans;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }else  l = mid + 1;
    }
    cout << ans << nl;
    for(ll val : can)
        cout << val << " ";
    cout << nl;
}
int main()
{
    fastIO();

        solve();
    return 0;
}
// author : Sadee Abdullah