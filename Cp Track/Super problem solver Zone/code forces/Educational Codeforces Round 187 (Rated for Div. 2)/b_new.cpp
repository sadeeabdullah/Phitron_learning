		
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
    int f = s[0] - '0';
    int ans= 0;
    std::vector<ll> dg;
    ll sum = 0;
    for(auto c : s){
    	sum += (c - '0');
    	dg.push_back(c - '0');
    }

    // cout << sum << nl;
    std::vector<ll> rest;
    for(ll i= 1; i < dg.size(); i++){
    	rest.push_back(dg[i]);
    }
    rest.push_back(f-1);
    sort(all(rest));
    while(sum>9){
    	sum -= rest.back();
    	rest.pop_back();
    	ans++;
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