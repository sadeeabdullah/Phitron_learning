		
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
    int n; 	cin >> n;
    string s;	cin >> s;
    bool possible = true;
    for(int i = 0; i < s.size(); i++){
    	if(s[i] == '?') continue;
    	if((i + 1) % 2){
    		// cout << s[i] << " ";


    		if(s[i] != 'a'){
    			// cout << i + 1 << " ";
    			possible = false;
    			break;
    		}
    	}else{
    		if(s[i] != 'b'){
    			    		cout << s[i] << " ";
    			    		cout << i + 1 << " ";
    			possible = false;
    			break;
    		}
    	}
    }

    cout << ((possible)? "YES" : "NO" )<< nl;
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