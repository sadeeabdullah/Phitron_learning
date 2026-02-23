		
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
    std::vector<int> a(n);
    for(int &i : a)	cin >> i;
    // sort(all(a));
    // multiset<int> ml;
    vector<int> s;
	
	int ans =  0;
	for(int i =0; i < n;i++){
		
		while(!s.empty() && s.back() != a[i] - 1){
			s.pop_back();
		}
		if(s.empty()){
			ans++;
			s.push_back(a[i]);
		}else{
			s.push_back(a[i]);
		}
	}
	// cout << nl;
	cout << ans;
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