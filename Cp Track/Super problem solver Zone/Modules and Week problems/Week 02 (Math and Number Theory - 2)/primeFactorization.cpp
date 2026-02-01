/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 30 + 7;

vector<bool> allPrime(Mod + 1, true);
vector<ll> isPrime;
void primeCheck(){
    for(ll i = 2; i * i <= Mod; i++){
        if(allPrime[i])
        for(ll j = i + i; j <= Mod; j += i){
            allPrime[j] = false;
        }
    }

    for(ll i = 2; i <= Mod; i++){
        if(allPrime[i])
        isPrime.push_back(i);
    }
}
void Puzzle_Out()
{
    ll n;   cin >> n;
    map<ll, ll> cnt;
    ll idx = 0;
    while(n > 1){
        while(n % isPrime[idx] == 0 )
        {
            cnt[isPrime[idx]]++;
            n /= isPrime[idx];
        }
        idx++;
    }
    for(auto [val , cnt] : cnt){
        cout << val << " -> " << cnt << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    primeCheck();
    int t = 1;
    // cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 