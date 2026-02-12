/*problem link : http://codeforces.com/problemset/problem/1474/B*/
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

bool isPrime(int x){
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}
int ithPrime (int x){
    for(int i = x; ; i++){
        if(isPrime(i)) return i;
    }
}
void Puzzle_Out()
{
    int d; cin >> d;
    int p = ithPrime(d + 1);
    int q = ithPrime(p + d);
    cout << 1LL * p * q << nl;
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