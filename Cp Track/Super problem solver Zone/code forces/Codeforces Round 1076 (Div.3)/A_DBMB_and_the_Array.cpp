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
    ll  n, s, x;    cin  >> n  >> s >> x;
    vector<ll> a(n); for(ll  i =0 ; i < n; i++) cin >> a[i];
    ll total = 0 ;
    for(auto val : a) total  += val;

    if(total>s){
        cout << "NO" << nl;
        return;
    }
    if(total == s){
        cout<< "YES" << nl;
        return;
    }

    if(total < s){
        cout << (((s - total) % x== 0) ? "YES" : "NO") <<nl;
    }
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



