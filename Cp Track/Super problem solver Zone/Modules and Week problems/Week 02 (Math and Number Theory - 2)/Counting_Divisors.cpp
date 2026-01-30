// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define Ek1takeDekhe9ibo  int t; cin >> t;while (t--)
#define thakbenaDada return 0

using namespace std;
const int maxN = 1e6 + 9;
vector<ll> divisors(maxN);
void precomputeDivisors(){
    for(ll i =  1; i <= maxN; i++){
        for(ll j = i; j <= maxN; j+=i){
            divisors[j]++;
        }
    }
}
void EktakeDekhi(){
    ll n;   cin >> n;
    cout << divisors[n] << nl;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    precomputeDivisors();
    Ek1takeDekhe9ibo
    {
        EktakeDekhi();
    }
    thakbenaDada;
}
/* author : Sadee Abdullah */ 