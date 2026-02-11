/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;
const ll NN = 10000000 + 5;
bool isPrimes[NN];
vector<ll> primes;

void sieve(){
    primes.push_back(2);
    for(ll i = 4; i < NN; i += 2)  
        isPrimes[i] = true;
    for(ll i = 3; i < NN; i+= 2){
        if(!isPrimes[i]){
            primes.push_back(i);
            for(ll j = i * i; j < NN; j+= (2 * i)){
                isPrimes[j] = true;
            }
        }
    }
}



void Puzzle_Out()
{
    ll n;   cin >> n;
    ll ans= 0;
    for(auto val : primes){
        if(val <= n){
            ans += n / val ;
        }
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 