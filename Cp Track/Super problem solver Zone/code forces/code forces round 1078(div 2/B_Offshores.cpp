/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

void Puzzle_Out()
{
    ll n, x, y;     cin >> n >>x >> y;
    vector<ll> a(n);   
    ll total = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        total += (a[i] / x);
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll tmp_ans = a[i] + (y * (total - (a[i]/ x)));
        ans = max(ans, tmp_ans);
    }
    cout<< ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 