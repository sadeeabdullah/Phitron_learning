		
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
    int n;	cin >> n;
    string s;
    cin >> s;
    int ones = count(s.begin(), s.end(), '1');
    int zeros = n - ones;
    if(ones != 2 && n != zeros){
    	cout << -1 << nl;
    }else if (ones == 2 && n == 3){
    	int loc = 0;
    	for(int i = 0;i < n; i++){
    		if(s[i] == '0') loc = i + 1;
    	}
    	cout << 1 << nl;
    	cout << loc << nl;
    }
    else if(n == zeros){
    	cout << 0 << nl;
    }else{
    	int f=0, se = 0;
    	for(int i = 0; i < n; i++){
    		if(f == 0 && s[i] == '1') f = i+ 1;
    		else if(f != 0 && s[i] == '1') se = i + 1;
    	}
    	cout << 2 << nl;
    	cout << f << " " << se << nl;
    	// cout << s[1] << nl;
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