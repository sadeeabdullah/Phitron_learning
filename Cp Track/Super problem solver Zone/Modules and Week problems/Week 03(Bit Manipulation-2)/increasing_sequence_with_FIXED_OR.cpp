/*problem link : https://codeforces.com/problemset/problem/1988/C*/
		
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
    ll n;
    std:: cin >> n;
    ll mxBit = __lg(n);

    deque<ll> dq;
    dq.push_back(n);
    for(int mask = 0; mask <= mxBit; mask++){
    	if((n >> mask) & 1 ){
    		ll val = n - (1LL << mask);
    		if(val > 0) dq.push_front(val);
    	}
    }
    cout << dq.size() << nl;
    for(auto val : dq) cout << val << " ";
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