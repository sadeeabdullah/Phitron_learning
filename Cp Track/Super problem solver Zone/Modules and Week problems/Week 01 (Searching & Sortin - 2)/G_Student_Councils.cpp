// problem link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G
#include<bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;
int main(){
    ll k, n;    cin >> k >> n;
    vector<ll> a(n);
    for(ll i = 0;i < n; i++){
        cin>> a[i];
    }
    
    auto ok = [&](ll mid){
        ll studentNeed = mid * k;
        ll studentHave = 0;
        for(ll i = 0; i <  n;i++)
            studentHave += min(a[i], mid);
        return studentHave >= studentNeed;
    };
    // doing binary search here
    ll l = 0, r = accumulate(a.begin(), a.end(), 0LL) / k, ans = 0, mid;
    while(l <= r){
        mid = l + (r  - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }else r = mid - 1;
    }
    
    cout << ans << nl;
    return 0;
}
/* author : Sadee Abdullah */ 