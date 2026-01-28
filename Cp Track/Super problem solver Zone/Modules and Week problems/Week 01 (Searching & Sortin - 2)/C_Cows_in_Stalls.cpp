// problem link : https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C
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

bool ok(vector<ll> &a, ll n, ll gap, ll c){
    ll cows = 1;
    ll l = a[0];
    for(ll i =1; i < n; i++){
        if(abs(l - a[i]) >= gap){
            cows++;
            l = a[i];
        }
    }
    return cows >= c;
}

void EktakeDekhi()
{
    ll n, k;    cin >> n >> k;
    vector<ll> a(n);    for(ll i =0; i < n; i++)    cin >> a[i];
    sort(all(a));

    ll l = 0, r = 1e9, ans, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(a, n, mid, k)){
            ans = mid;
            l = mid + 1;
        }else r = mid - 1;
    }
    cout<< ans << nl;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

        EktakeDekhi();
    thakbenaDada;
}
/* author : Sadee Abdullah */ 