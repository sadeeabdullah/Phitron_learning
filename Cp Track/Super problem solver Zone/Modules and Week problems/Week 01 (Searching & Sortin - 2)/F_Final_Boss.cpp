//problem link : https://codeforces.com/problemset/problem/1985/F

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
    ll h, n;    cin >> h >> n;
    vector<ll> a(n);    for(ll i = 0;i < n; i++)    cin >> a[i];
    vector<ll> c(n);    for(ll i = 0;i < n; i++)    cin >> c[i];

    auto ok  = [&](ll mid){
        ll damage = 0 ;
        for(ll i = 0 ; i < n; i++){

            damage = min(damage+(1 + (mid - 1) / c[i]) * a[i], h);
        }
        return damage >= h;
    };
    ll l = 1, r = 1e12, ans, mid;
    while(l <=r){
        mid = l  + (r-l)/2;
        if(ok(mid)){
            ans  =  mid;
            r = mid-1;
        }else l  = mid + 1;
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