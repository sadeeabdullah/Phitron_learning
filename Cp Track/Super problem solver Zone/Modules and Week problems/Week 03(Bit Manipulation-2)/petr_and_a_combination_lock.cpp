/*problem  link: https://codeforces.com/problemset/problem/1097/B*/

		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

bool check(vector<int> &a, int idx, int sum){

	// base case 
	if(a.size()== idx){
		return sum % 360 == 0;
	}
	// here we have total two option take clockwise and other one is take anti-clockwise
	bool op1 = check(a, idx + 1, sum - a[idx]);
	bool op2 = check(a, idx + 1, sum + a[idx]);
	return op1 || op2;
}
void Puzzle_Out()
{
    int n;	cin >> n;
    vector<int> a(n);
    for(int &val : a) cin >> val;
    // for(auto val : a)	cout << val << " ";
    cout << ((check(a,0, 0) ? "YES" : "NO")) << nl;
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