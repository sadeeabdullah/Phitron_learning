		
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
    int n;  cin >> n;
    string s = to_string(n);
    int ans = 0;

    for(int i = 1; i < s.size(); i++)
        ans += (1 << i);
    // cout << ans << nl;

    int bit = 0;
    for(int i = s.size() - 1; i>= 0; i--){
        // cout << s[i] ;
        if(s[i] == '7'){
            ans += (1 << bit);
        }
        bit++;
    }
    // for(char c : s)cout << c << nl;
    cout << ans + 1 << nl;
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