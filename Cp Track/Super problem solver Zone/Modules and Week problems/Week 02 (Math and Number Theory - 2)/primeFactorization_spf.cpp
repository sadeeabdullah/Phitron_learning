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
    ll n;   cin >>n ;
    map<int, int> mp;
    for(ll i = 2;i * i <= n; i++){
        while(n % i == 0){
            mp[i]++;
            n /= i;
        }
    }
    if(n > 1){
        mp[n]++;
    }
    for(auto [x, y] : mp){
        cout << x << " " << y << nl;
    }
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