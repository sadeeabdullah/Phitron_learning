/* problem link : https://codeforces.com/problemset/problem/1881/D */

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
    vector<ll> a(n);    for(ll i= 0; i <n;i++)  cin >>a[i];

    map<ll,ll> mp;
    for(auto val : a){
        for(ll i= 2; i * i <= val; i++){
            while(val % i == 0){
                mp[i]++;
                val /= i;
            }
        }
        if(val > 1){
            mp[val]++;
        }
    }
    for(auto [x, y] : mp){
        // if(y % n != 0){
        //     cout << "NO" << nl;
        //     return;
        // }
        cout << x << " -> " << y << nl;

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