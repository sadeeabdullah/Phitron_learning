/* problem lINk : https://codeforces.com/problemset/problem/776/B*/
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;
const ll N = 1000005;
// sieve code here to precompute the prime numbers;
vector<ll> prime;
bool isPrime[N];
void sieve(ll NN){
    prime.push_back(2);
    for(ll i = 4; i <= NN; i += 2)
        isPrime[i] = true;
        
    for(ll i = 3; i <= NN; i+= 2){
        if(isPrime[i])  continue;
        prime.push_back(i);
        for(ll j = i * i; j <= NN; j += (2 * i))
            isPrime[j] = true;
    }   
}

void Puzzle_Out()
{
    ll n;   cin >> n;
    sieve(n + 5);
    if(n == 1 ){
        cout << 1 << nl;
        cout << 1 << nl;
        return;
    }
    if(n == 2){
        cout << 1 << nl;
        cout << 1 << " " << 1 << nl;
        return;
    }

    cout << 2 << nl;
    for(ll i = 2; i <= n + 1; i++){
        if(isPrime[i]){
            cout << 2 << " ";
        }else cout << 1 << " ";
    }
    cout << nl;
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