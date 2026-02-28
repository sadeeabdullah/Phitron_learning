		
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
    string s, t;
    cin >> s >> t;
    int n=s.size(), m = t.size();
    int i = 0, j =0;
    while(i < n && j < m){
    	if(s[i] == t[j])j++;
    	i++;
    }

    // if(j < m){
    // 	cout << -1 << nl;
    // 	return;
    // }

    cout << (n - j) + (m - j) << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 