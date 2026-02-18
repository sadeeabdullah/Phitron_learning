		
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
    int n, k;	cin >> n >> k;
    map<int,int> mp;
    std::vector<int> a(n);
    for(int i = 0 ; i < n; i++){
    	cin>> a[i];
    	mp[a[i]]++;
    }

    vector<int> l;

    for(auto [x, y] : mp){
    	l.push_back(y);
    }
    sort(all(l));
    if(mp.size() == n){
    	cout << n - k << nl;
    	return;
    }

    for(int i = 0; i < l.size() && k > 0; i++){
    	if(k >= l[i]){
    		k -= l[i];
    		l[i] = 0;
    		mp[l[i]] = 0;
    	}
    }

    int ans = 0;
    for(auto [x, y] : mp){
    	if(y > 0) ans++;
    }
    cout << ans << nl;
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