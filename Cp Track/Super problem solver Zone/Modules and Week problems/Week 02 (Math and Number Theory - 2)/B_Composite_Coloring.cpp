/*problem lINk : https://codeforces.com/problemset/problem/1332/B*/

/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;
vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void Puzzle_Out()
{
    ll n;   cin >> n;
    vector<ll> a(n);    for (ll i= 0;i < n; i++)    cin >> a[i];

    map<ll, vector<ll> > mp;
    for (ll i = 0; i < n; i++){
        for(ll prime : primes)
        {
            if(a[i] % prime == 0){
                mp[prime].push_back(i);
                break;
            }
        }
    }
    cout << mp.size() << nl;
    vector<ll> ans(n);
    ll color = 1;
    for(auto [x, y] : mp){
        for(auto pos : y){
            ans[pos] = color;
        }
        color++;
    }
    for(ll val : ans){
        cout << val << " ";
    }
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