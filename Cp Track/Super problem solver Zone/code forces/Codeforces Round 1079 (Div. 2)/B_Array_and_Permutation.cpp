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
    ll n;
    cin >> n;
    map<ll,ll> mpP,  mpA;
    vector<ll> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
        mpP[p[i]] = i;
    }
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mpA[a[i]] = i;
    }
    for(auto [x, y] : mpP){
        cout << x  << " --> " << y <<",";
    }
    cout << nl;
    for(auto [x, y] : mpA){
        cout << x  << " --> " << y <<",";
    }
    cout << nl;
    cout << nl;
    cout << nl;
    cout << nl;
    cout << nl;
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