		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

ll getDigitSum(ll y){
	ll sum = 0;
	while(y > 0){
		sum += y % 10;
		y /= 10;
	}
	return sum;
}
void Puzzle_Out()
{
    ll x;
    cin >> x;
    ll ans = 0;
    for(ll y = x; y <= x + 90; y++){
    	if(y - getDigitSum(y) == x){
    		ans++;
    	}
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