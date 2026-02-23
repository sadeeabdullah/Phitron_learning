		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

int d(int y){
	int cnt = 0;
	while(y > 0){
		cnt += y % 10;
		y /= 10;
	}
	return cnt;
}
void Puzzle_Out()
{
    int x, ans = 0;	cin >> x;
    // maximum sum can be 90
    for(int i = 1; i <= 90; i++){
    	int val = x + i;
    	if(val - d(val) == x) ans++;
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