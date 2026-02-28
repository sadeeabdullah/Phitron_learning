		
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
    string s;	cin >> s;
    map<char,int> mp;
    for(auto c : s){
    	mp[c]++;
    }
    int mx = 0;
    for(auto [x, y] : mp){
    	mx = max(mx, y);
    }
    
    set<char> st;
    for(auto [x, y] : mp){
    	if(y == mx){
    		st.insert(x);
    	}
    }

    for(auto ch : s){
    	if(st.find(ch) == st.end())cout << ch ;
    }
    cout << nl;
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