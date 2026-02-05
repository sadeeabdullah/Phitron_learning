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
    ll n;   cin >> n;
    string s;   cin >> s;
    for(ll i = 0; i < n; i++){

        s[i]= towlower(s[i]);
    }

    map<char, ll> mp;
    for(ll i = 0; i< n; i++){
        mp[s[i]]++;
    }

    ll mx = 0;
    char mxCh;
    for(auto [x, y] : mp){
        // mx = max(y, mx);
        if(y > mx){
            mx = y;
            mxCh = x;
        }
    }
    ll ans =mx;
    mx = 0;
    // cout << mxCh << nl;
    mp[mxCh] = 0;

    for(auto [x, y] : mp){
        mx = max(y, mx);
       
    }
    ans += mx;
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