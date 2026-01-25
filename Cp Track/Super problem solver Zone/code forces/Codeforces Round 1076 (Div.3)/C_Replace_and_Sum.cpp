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
    ll n, q;    cin >> n >> q;
    vector<ll> a(n);    for(ll i = 0; i < n; i++)   cin >> a[i];
    vector<ll> b(n);    for(ll i = 0; i < n; i++)   cin >> b[i];

    for(ll i = 0; i < n; i++){
        a[i] = max(a[i], b[i]);
    }
    for(ll i = n - 1; i > 0; i--){
        a[i - 1] = max(a[i], a[i - 1]);
    }

    vector<ll> pref(n);
    pref[0] =a[0];
    for(ll i = 1; i < n; i++){
        pref[i] = pref[i - 1] + a[i];
    }
    while(q--){
        ll l, r;    cin >> l >> r;
        l--, r--;
        cout << pref[r] - pref[l] + a[l] << " ";
    }
    cout << nl;
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