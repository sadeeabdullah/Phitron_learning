/*problem link : https://codeforces.com/problemset/problem/1420/B*/
		
// /* Bismillah hir rahmanir rahim */

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define llmax LLONG_MAX
// #define nl '\n'
// #define rall(var) (var).rbegin(), (var).rend()
// #define all(var) (var).begin(), (var).end()
// const ll Mod = 1e9 + 7;

// void Puzzle_Out()
// {
//     int n;	cin >> n;
//     std::vector<int> v(n);
//     for(int i =0; i < n; i++){
//     	cin >> v[i];
//     }

//     int ans = 0;
//     for(int i =0; i < n - 1; i++)
//     	for(int j = i + 1; j < n; j++){
//     		if(__lg(v[i]) == __lg(v[j]))ans++;
//     	}
//     cout << ans << nl;
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     cin >> t;
//     for (int tc = 1; tc <= t; tc++)
//         Puzzle_Out();

//     return 0;
// }
// /* author : Sadee Abdullah */ 

// GOT TLE WITH THE SOLUTION LETS MAKE IT MORE OPTIMIZE;

/**
* APPROACH:	
* Here in the problem we got solution that only the highest set bit matters.
* so we are checking with all the combination instead we can count in one set bit how many pair
* we can make then using the summation formula we can get their pair sum and add it to the main ans
**/

		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;
const int mxBit = 30;
void Puzzle_Out()
{
    int n;	cin >> n;
    std::vector<int> v(n);
    for(int &val : v) cin >> val;

    // highest we can have 29 bits on the 10^9
    	// cout << __lg(1000000000) << nl;
    std::vector<int> onBit(mxBit);
	for(int i = 0;i<n;i++){
		onBit[__lg(v[i])]++;
	}	

	ll ans=0;
	for(auto val : onBit){
		if(val > 0){
			// cout << val << nl;
			ans += 1LL * val* (val - 1) / 2;
		}
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