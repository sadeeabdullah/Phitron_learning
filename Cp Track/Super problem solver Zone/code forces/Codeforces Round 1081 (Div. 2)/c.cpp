		
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
    ll n, h, k;	cin >> n >> h >> k;
    std::vector<ll> a(n);
    ll sum = 0;
    for(ll &i : a)	cin >> i, sum += i;
    // cout << sum << nl;

    vector<ll> premin(n), suffMax(n);
	premin[0] = a[0];
	suffMax[n - 1] = a[n - 1];
	for(int i = 1; i < n; i++) premin[i] = min(premin[i - 1], a[i]);
	for(int i = n - 2; i >= 0; i--) suffMax[i] = max(suffMax[i + 1], a[i]);

	if(h % sum == 0){
		cout << (h / sum) * n + (h / sum) * k << nl;
		return;
	}
	ll ans = h / sum;
	ll extra = h % sum;

	ll mn= LLONG_MAX;
	for(int i = 0; i < n; i++){

	}
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