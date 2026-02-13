		
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
    int n;	 cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    int ans = 0;
    for(int i = 1; i < n; i++){
    	int val = abs(a[i] -  a[i - 1]);
    	ans+= val;
    }
    int tmpAns = ans;

    // //for the first and last  check
    // ans = min(ans, (tmpAns - abs(a[1] - a[ 0])));
    // ans = min(ans, (tmpAns - abs(a[n - 1] - a[n - 2])));

    // or we can check it at once
    ans = min((tmpAns - abs(a[1] - a[ 0])), (tmpAns - abs(a[n - 1] - a[n - 2])));
    // we will check by removing each element
    for(int i=1; i < n - 1; i++){
    	ans = min(ans , (tmpAns - abs(a[i] - a[i - 1]) - abs(a[i] - a[i + 1]) + abs(a[i + 1] - a[i - 1])));
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