// problem link; https://codeforces.com/problemset/problem/2009/E
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
ll sum (ll n, ll k){
    return ((k*(k + 1)) / 2) - ((n - 1) * n ) / 2;
}
void EktakeDekhi()
{
    ll n, k;    cin >> n >> k;
    ll full_sum  = sum (k, n +k - 1);
    ll halfSum =full_sum / 2;

    
    // we need to keep the mid closest the half sum of the array to get the minimum difference
    ll l = 2, r = 2e9, ans = llmax, mid;

    while(l<=r){
        mid = l +  (r - l) / 2;
        ll recentSum = sum(k, mid);
        ans = min(ans, abs((full_sum - recentSum) - recentSum));
        if(recentSum <= halfSum){
            l = mid + 1;
        }else r = mid - 1;
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