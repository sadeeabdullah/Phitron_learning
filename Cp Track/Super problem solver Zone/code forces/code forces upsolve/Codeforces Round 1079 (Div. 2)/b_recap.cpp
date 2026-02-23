		
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
    vector<int> p_pos(n + 1), a(n);
    for(int i = 0;i <n; i++){
    	int x;	cin >> x;
    	p_pos[x] = i;
    }

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    for(int i = 1; i < n; i++){
    	if(p_pos[a[i - 1]] > p_pos[a[i]]){
    		cout << "NO" << nl;
    		return;
    	}
    }
    cout << "YES" << nl;
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
