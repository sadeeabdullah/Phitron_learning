		
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
    vector<ll> a(n), p(n), v(n + 1);
    for(ll i = 0; i < n; i++)	cin >> p[i], v[p[i]] = i;	
    for(ll i = 0; i < n; i++)	cin >> a[i];

    for(ll i = 1; i < n; i++)	if(v[a[i - 1]] > v[a[i]]){
    	    cout << "NO" << nl;
    	    return;
    } 
    cout << "YES" << nl;
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