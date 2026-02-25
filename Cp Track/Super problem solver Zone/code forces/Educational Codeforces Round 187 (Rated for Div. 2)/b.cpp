		
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
    string s = to_string(n);
    if(s.size() == 1){
    	cout << 0 << nl;
    	return;
    }
    ll sum = 0;
    std::vector<ll> dg;
    for(char c : s){
    	dg.push_back(c - '0');
    	sum += (c - '0');
    }

    if (sum <= 9)
    {
    	cout << 0 << nl;
    	return;
    }

    ll f = dg[0];

   	std::vector<ll> v;
   	for (ll i =  1; i < dg.size(); i++)
   	{
   		v.push_back(dg[i]);
   	}
   	v.push_back(f - 1);
   	sort(rall(v));
    ll have = sum - 9;
    ll ded = 0;
    ll ans = 0;
    for(ll val : v){
    	ded += val;
    	ans++;
    	if(ded >= have) break;
    }
    cout << ans << nl;
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