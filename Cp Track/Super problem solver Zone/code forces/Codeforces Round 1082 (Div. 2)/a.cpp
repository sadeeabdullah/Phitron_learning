		
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
    ll x, y;	cin >> x >> y;
    // if (y > x){
    // 	cout << "NO" << nl;
    // 	return;
    // }

    if(y > 0){
    	x -= (y * 2);
    }else if(y < 0){
    	x += (y * 4);
    }
    // cout << x << " " << y <<nl;
    if(x < 0){
    	cout << "NO" << nl;
    	return;
    }
    if(x % 3 == 0){
    	cout << "YES" << nl;
    }else{
    	cout << "NO" << nl;
    }
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