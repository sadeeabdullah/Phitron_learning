// problem link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
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

void EktakeDekhi()
{
    ll n, x, y;     cin >> n >> x >> y;

    if(n == 1){
        cout << min(x, y) << nl;
        return;
    }
    auto ok = [&](ll minute){
        ll print = 1;
        if(minute < (min(x, y))) return false;  // minutes can be shorter than the printer start working then it will not work
        minute-= min(x, y);       // for the first copy
        print += minute / x ;
        print += minute / y ;

        return print>=n;
    };
    // we will be using Binary search on answer
    ll l =1, r = 2e9, ans, mid;
    while(l <= r){
        mid = l + (r - l) /2 ;
        if(ok(mid))
        {
            ans =mid;
            r = mid - 1;
        }else l = mid + 1;
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

        EktakeDekhi();
    thakbenaDada;
}
/* author : Sadee Abdullah */ 