
		
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
    ll s, k, m;	cin >> s >> k >> m;
    // cout << s << k << m << nl;


    if(k >= s){
    	cout <<max(0LL, s - (m % k)) << nl;
    }else{
    	ll flip = m / k, rem = m % k;
    	if(flip % 2){
    		cout << k - rem << nl;
    	}else{
    		cout << s - rem << nl;
    	}
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