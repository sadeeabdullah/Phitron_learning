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
	vector<ll> a(n + 1);
	for (ll i = 1; i <= n; i++)
		cin >> a[i];


	multiset<pair<ll, ll>> ml;

	vector<ll> cntedPref(n + 1);
	cntedPref[1] = a[1];
	for (ll i = 2; i <= n; i++)	cntedPref[i] = cntedPref[i - 1] + a[i] * i;		// ok


	// here storing the normal prefix sum
	vector<ll> pref(n+1);
	pref[1] = a[1];
	for (int i = 2; i <= n; i++) pref[i] = pref[i - 1] + a[i];		// ok


	// we are going to store the reverse part prefix sum here
	vector<ll> rPref(n + 1);
	rPref[1] = a[1];
	for(int i=2; i <= n; i++){									//  ok
		rPref[i] =rPref[i -1] + pref[i];
	}

	if(n > 1)
	ml.insert({cntedPref[n], 1});
	for(int i = 2; i < n ;i++){
		ll secondSum = cntedPref[n] - cntedPref[i + 1] + a[i + 1] * (i + 1);
		ml.insert({secondSum + rPref[i] , i});
	}
	ml.insert({rPref[n],n });

	for(auto [x, y] : ml){
		cout << y << " ";
	}	
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