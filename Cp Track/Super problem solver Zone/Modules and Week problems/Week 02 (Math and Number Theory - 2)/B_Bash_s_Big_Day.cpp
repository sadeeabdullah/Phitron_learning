/*Problem link : https://codeforces.com/problemset/problem/757/B*/
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

vector<vector<ll>> prime_divisor(100006);

// precomputing their prime divisors
void precm(){
    for (ll i = 2; i <= 100005; i++){
        if (prime_divisor[i].empty())
        for (ll j = i; j <= 100005; j += i ){
            prime_divisor[j].push_back(i);
        }
    }
}
void Puzzle_Out()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> mp;
    for(ll i = 0; i < n; i++){
        for(auto u : prime_divisor[a[i]]){
            mp[u]++;
        }
    }
    ll ans = 1;
    for (auto [x,y]: mp){
        ans= max(ans,y);
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precm();
    int t = 1;
    // cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */