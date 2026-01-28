// problemlink: https://codeforces.com/problemset/problem/2091/D
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
    ll n, m, k;     cin >> n >> m >> k;

    auto ok = [&](ll len){
        return ((m / (len + 1)) * len + (m % (len + 1))) * n >= k;
    };
    ll l = 1, r = 1e9, ans, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }else l= mid + 1;
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