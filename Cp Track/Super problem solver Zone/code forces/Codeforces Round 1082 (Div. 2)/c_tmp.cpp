		
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
    multiset<int> ml;
	
	int ans =  0;
	for(int i =0; i < n;i++){
		int val  = a[i] - 1;
		if(ml.find(val) == ml.end()){
			ans++;
			ml.clear();
		}
		ml.insert(a[i]);

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