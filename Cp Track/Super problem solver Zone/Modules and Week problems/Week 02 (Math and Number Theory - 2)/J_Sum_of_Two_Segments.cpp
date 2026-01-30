/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()

using namespace std;
const ll Mod = 1e9 + 7;

void Puzzle_Out()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), pref(n, 0), suff_mx(n, -1);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += a[r];
        if (r - l + 1 == k)
        {
            pref[l] = sum;
            sum -= a[l];
            l++;
        }
        r++;
    }

    suff_mx[n - k] = pref[n - k];
    for (ll i = n - k - 1; i >= 0; i--)
        suff_mx[i] = max(suff_mx[i + 1], pref[i]);

    ll ans = 0;
    for (ll i = 0; i < n - k; i++)
        ans = max(ans, (pref[i] + suff_mx[i + k]));

    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */