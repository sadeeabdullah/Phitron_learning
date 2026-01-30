// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define Ek1takeDekhe9ibo \
    int t;               \
    cin >> t;            \
    while (t--)
#define thakbenaDada return 0

using namespace std;

void EktakeDekhi()          // time complexity of (n log n)__ more precise (n log log n)
{
    ll n;   cin >> n;   
    vector<bool> prime(n + 1, true);

    for(ll i = 2; i * i <= n; i++){
        if(prime[i]){
            for(ll j = i * 2; j <= n; j+=i)
                prime[j] = false;
        }
    }
    for(ll i = 2; i <=n; i++){
        if(prime[i])    cout << i << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    EktakeDekhi();
}
/* author : Sadee Abdullah */