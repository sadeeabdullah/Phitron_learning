		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

int cntOnBit(int x){
	int cnt = 0;
	int msb = __lg(x);
	// cout << msb << nl;
	for(int i = 0; i <= msb; i++){
		if((x >> i) & 1) cnt++;
	}
	return cnt;
}
void Puzzle_Out()
{
    int n, m, k;	cin >> n >> m>> k;
    vector<int> a(m + 1);	
    for(int i = 0; i <= m; i++)	cin >> a[i];
    int fedor = a[m];	
	// cout << fedor << nl;
	// cntOnBit(fedor);
	int ans = 0;
	for(int i = 0; i < m; i++){
		if(cntOnBit((fedor ^ a[i])) <= k) ans++;
	}
	cout << ans << nl;
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