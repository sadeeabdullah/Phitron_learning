		
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
    vector<int> a(n);	for(int i = 0; i <n; i++)	cin >> a[i];

    for(int mask =0 ; mask < (1 << n); mask++){
    	int sum = 0;
    	for(int k = 0; k < n; k++){
    		if((mask >> k) & 1){
    			sum += a[k];
    		}else sum -= a[k];
    	}
    	if(sum % 360 == 0){
    		cout << "YES" <<nl;
    		return;
    	}else sum = 0;
    }
    cout << "NO" <<nl;
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