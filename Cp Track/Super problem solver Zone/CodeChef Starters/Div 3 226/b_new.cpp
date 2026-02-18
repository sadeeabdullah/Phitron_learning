		
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
    int n, k;	cin >> n >> k;
    std::vector<int> v(n);
    set<int> s;
    for(int i = 0; i < n; i++){
    	cin >> v[i];
    	s.insert(v[i]);
    }

    int sz = s.size();
    if(sz == 1){
    	cout << 1 << nl;
    }
    else if(sz == 2 && n > 2){
    	cout << 2 << nl;
    }else{
    	if(sz > k){
    		cout << sz - k << nl;
    	}else if ()
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