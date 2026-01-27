// problem link : https://codeforces.com/problemset/problem/1593/C
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
    vector<ll> a(k);    for(ll i= 0;i < k; i++) cin >> a[i];
    sort(rall(a));

    ll step = 0;
    ll cnt = 0;
    for(ll i =0; i < k; i++){
        // cout << a[i] << " ";
        step += (n - a[i]);
        if(step < n) cnt++;
        else break;
    }
    cout << cnt << nl;
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