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
    vector<ll> a(n);    for(ll i = 0; i < n;i++)    cin >>a[i];
    ll l = 0;
    while(l < n && a[l] == n  - l){
        l++;
    }

    if(l < n)
    {
        ll need_Change = n - l;
        auto  it = find(a.begin() + 1, a.end(), need_Change);
        ll l_pos = it - a.begin();
        reverse(a.begin() + l, a.begin() + l_pos + 1);
    }
    for(ll val : a) cout <<  val<<" ";

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