// problem link :https://www.codechef.com/problems/TREATS
//Bismillah hir rahmanir rahim
//keep Patience, Destiny is more beautiful


#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) string var; cin >> var;
#define testCase int t; cin >> t; while(t--)

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//BRUTE FORCE
// void solve()
// {
//    ll n, m;    cin >> n >> m;
//     vector<ll> a(n), b(n);
//     for(ll i=0; i < n;i++)  cin >> a[i];
//     for(ll i=0; i < n;i++)  cin >> b[i];

//     ll ans = 0; 
//     for(ll i = 0 ; i < n; i++){
//         for(ll j= 0; j < n; j++){
//             if((a[i] + b [ j]) % m == 0) ans++;
//         }
//     }

//     cout << ans << nl;
// }


//OPTIMIZE
void solve(){
    ll n, m;    cin >> n >>m;
    map<ll, ll> mp;
    vector<ll> a(n),b(n);

    ll ans = 0;
    for(ll i= 0; i < n; i++) 
    {
        cin >> a[i];
        mp[a[i] % m]++;
    } 
    for(ll i= 0; i < n; i++){
        cin >> b[i];
        ll rem = b[i] % m;
        if(mp.find((m - rem) % m) != mp.end()) ans+= mp[(m - rem) % m];
    }   

    cout << ans << nl;
}
int main ()
{
    fastIO();
    testCase{

        solve();
    }
    return 0;
}