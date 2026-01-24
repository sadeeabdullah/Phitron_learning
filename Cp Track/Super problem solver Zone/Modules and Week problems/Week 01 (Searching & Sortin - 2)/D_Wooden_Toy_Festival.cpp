//problem link : https://codeforces.com/problemset/problem/1840/D

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
    
    ll n;   cin >> n;
    vector<ll> a(n);    for(ll i = 0; i < n;i++)    cin >> a[i];
    sort(all(a));

    auto ok = [&](ll mid){

        // we will be using a sliding window concept here
        ll l = 0, r = 0, carver = 1;
        while(r < n){
            // if((a[r] - a[l])  > 2 * mid){
            if((a[r] - a[l] + 1) / 2 > mid){
                carver++;
                l = r;
            }
            r++;
        }
        return carver <= 3;
    };
    // binary search
    ll l = 0, r = 1e9, ans, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid -1;
        }else l = mid + 1;
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