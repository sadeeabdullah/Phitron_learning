		
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
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >>a[i];
    }
    string s;	cin >> s;
    std::vector<int> v;
    for(int i = 0; i < n; i++)
    {
    	if(s[i] == '0'){
    		v.push_back(a[i]);
    	}
    }
    sort(all(v));
    if(v.size() < k){
    	cout <<-1 << nl;
    	return;
    }
    int ans = 0;
    for(int i =0; i < k; i++){
    	ans+= v[i];
    }
    cout << ans <<nl;
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