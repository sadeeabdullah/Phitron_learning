		
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
    ll n;	cin >> n;
    vector<ll> a(n);
    vector<ll> cnt(n + 1, 0);

    vector<ll> ans(n + 1, 0);

    for(ll i= 0; i < n; i++){
    	ll x;	cin >> x;
    	if(x <= n) cnt[x]++;
    }

    for(ll i= 1; i <= n; i++)
    	for(ll j = i; j <= n; j+= i) ans[j] += cnt[i];

    ll res = *max_element(all(ans));
	cout << res << nl;
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