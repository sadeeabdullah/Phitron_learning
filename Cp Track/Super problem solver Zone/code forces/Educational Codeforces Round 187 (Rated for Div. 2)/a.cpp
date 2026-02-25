		
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
    int n, m, d;	cin >>n >> m >> d;
    // cout << d / m << nl;
    int canHave = d / m;
    // cout << canHave << " ";
    if(canHave == 0){
    	cout << n << nl;
    	return;
    }
    if(n <= canHave){
    	cout << 1 << nl;
    	return;
    }
    int ans = n / (canHave + 1);
    if(n % (canHave + 1) != 0 ) ans++;
    cout <<  ans << nl;
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