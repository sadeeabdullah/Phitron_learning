/*problem link : https://codeforces.com/problemset/problem/1902/C*/
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

void Puzzle_Out()
{
    ll n; cin >> n ;
    ll mx = LLONG_MIN;
    map<ll, bool> mp;
    vector<ll> a(n);    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if(!mp[a[i]])
        mp[a[i]] = true;
        mx = max(mx, a[i]);
    }
    if(n == 1){
        cout << 1 << nl;
        return;
    }

    // cout << mx << nl;

    vector<ll> diff(n );
    for(ll i = 0; i < n ; i++){
        diff[i] = mx - a[i];
    }
    ll tmp = diff[0];
    for(ll i = 1; i < n ; i++){
        if(diff[i] != 0 )
        tmp = __gcd(tmp, diff[i]);
    }
    // cout << ans << nl;
    ll ans = 0;
    for(ll i =0; i < n; i++){
        ans += (diff[i] / tmp);
    }

    // for the last element to insert
    ll curr = mx;
    while(mp.find(curr) != mp.end()){
        curr-= tmp;
    }
    ans += (mx - curr) / tmp;
    cout << ans <<  nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 