		
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
    int n;	cin >> n;
    std::vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i)
    {
    	cin >> v[i];
    }

    int mx = 0;
    int l = 0, r = n;
    for (int i = 1; i <= n; ++i)
    {
    	mx = max(mx, v[i]);
    	if(i == mx && l == 0){
    		l = i;
    	} else if(i == mx && l != 0){
    		r = i;
    	}
    }

    // cout << l << " " << r << nl;
    if(l != r){
    	swap(v[l], v[r]);
    }
    for(int i =1; i <= n; i++){
    	cout << v[i] << " ";
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