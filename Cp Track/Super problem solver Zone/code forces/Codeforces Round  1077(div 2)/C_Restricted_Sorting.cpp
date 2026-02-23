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
    multiset<pair<ll, ll>> ml;
    vector<ll> a(n);    for(ll i= 0; i < n; i++) {
            cin >> a[i];
            ml.insert({a[i], i});
    }

    ll ans =  -1;
    for(ll i = 0;i<n ;i++){
        ll firstN = ml.begin()-> first;
        ll firstIdx = ml.begin()->second;
        // cout << firstN << " " << firstIdx << nl;
        if(firstN !=a[i]){
            ans = max(ans, abs(firstN - a[i]));
            swap(a[i], a[firstIdx]);
        }
        ml.erase(ml.begin());
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