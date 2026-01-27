// problem link : https://codeforces.com/contest/2093/problem/E

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
    ll n, k;    cin >> n >> k;
    vector<ll> a(n);    for(ll i= 0;i < n; i++) cin >> a[i];
    auto ok = [&](ll mid){
        ll mx = mid;
        // we will make sure we make the mx minimum of the array make k partition
        ll partition= 0;
        set<ll> s;
        for(ll i = 0; i < n; i++){
            if(a[i] < mid){
                s.insert(a[i]);
            }
            if(s.size() == mid){
                partition++;
                s.clear();
            }
        }
        return partition >= k;
    };
    
    ll l = 0, r= n, ans, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid +1;
        }else r = mid  - 1;
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