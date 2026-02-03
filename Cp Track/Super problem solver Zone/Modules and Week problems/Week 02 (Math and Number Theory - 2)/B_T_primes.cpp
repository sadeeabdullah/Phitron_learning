/*problem linK ; https://codeforces.com/problemset/problem/230/B*/

/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

bool isPrime(ll n){
    if(n == 1) return false;
    for (ll i = 2; i * i <= n; i++)
        if(n % i == 0)  return false;
    return true;
}

bool isPerfectSquare(ll n){
    ll val = sqrtl(n);
    return (val * val ) == n;
}
void Puzzle_Out()
{
    ll n;  cin >> n;
    cout << (((isPerfectSquare(n)) && isPrime(sqrtl(n))) ? "YES" : "NO") << nl;
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