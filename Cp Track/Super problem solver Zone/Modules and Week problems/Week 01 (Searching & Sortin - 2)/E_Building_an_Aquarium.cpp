// problem Link : https://codeforces.com/problemset/problem/1873/E

// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define Ek1takeDekhe9ibo  int t; cin >> t;while (t--)
#define thakbenaDada return 0

using namespace std;

void EktakeDekhi()
{
    ll n, x;    cin >> n >> x;
    vector<ll> a(n);    for(ll i = 0; i < n; i++)   cin >> a[i];

    auto ok = [&](ll h){
        ll waterCapacity = 0;
        for(ll val : a)
            if(val <= h) waterCapacity += (h - val);
        return waterCapacity <= x;
    };
    ll l = 1, r = 2e9 + 1, ans, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }else r = mid -1 ;
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    Ek1takeDekhe9ibo
    {
        EktakeDekhi();
    }
    thakbenaDada;
}
/* author : Sadee Abdullah */ 