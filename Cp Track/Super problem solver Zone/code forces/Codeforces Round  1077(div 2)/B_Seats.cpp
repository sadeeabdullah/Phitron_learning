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
    ll n;   cin >>  n;
    string s;   cin  >> s;
    ll zeros  = count(s.begin(),s.end(), '0');
    ll ones = n - zeros;

    if(n == zeros ){
        cout << (n + 2) / 3 << nl;
        return;
    }
    // counting untill we get 0
    ll ans = ones, cnt0 =0;

    ll i = 0;
    for(; i < n;i++){
        if(s[i] == '0') cnt0++;
        else break;
    }

    if(cnt0 > 0){
        // ans += (cnt0 + 1)/ 3;
        ans += cnt0 / 3;
        if(cnt0 % 3 == 2) ans++;
    }

    cnt0 = 0;
    for(ll j = i + 1; j < n; j++){
        if(s[j] == '0') cnt0++;
        else{
            ans+= cnt0 / 3;
            cnt0 = 0;
        }
    }


    if(s[n - 1] == '0'){
        // ans+= (cnt0 + 1) / 3;
        ans += cnt0 / 3;
        if(cnt0 % 3 == 2) ans++;
    }
    cout << ans << nl;

}


int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    Ek1takeDekhe9ibo
    {
        EktakeDekhi();
    }
    thakbenaDada;
}
/* author : Sadee Abdullah */ 