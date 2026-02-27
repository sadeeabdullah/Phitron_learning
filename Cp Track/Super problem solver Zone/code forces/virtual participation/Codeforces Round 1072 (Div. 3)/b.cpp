		
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
    int s, k, m;	cin >> s >> k >> m;
    int flip = m / k;
    int last = m % k;
    if(s > k){
    	// check which flip we are on
    	if(flip % 2){
    		// cout << s << " -> " << last << " " << s - last << " " ;
    		cout << k - last << nl;
    	}else{
    		cout << s - last << nl;
		}
    }else{
    	if(last == 0){
    		cout << s << nl;
    	}else{
    		cout << max(s - last, 0) <<  nl;
    	}

    }
}
// 4
// 0
// 1
// 7
// 1
// 0

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