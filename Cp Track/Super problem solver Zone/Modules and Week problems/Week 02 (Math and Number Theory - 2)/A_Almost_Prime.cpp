/*problem link : https://codeforces.com/problemset/problem/26/A*/
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

void Puzzle_Out()
{
    ll n;   cin >>n;

    set<ll> st; /// we will check the size of the set after inserting the prime divisors into it if the size stays 2 then we have another almost primme number

    ll ans = 0;
    for(ll i = 4 ; i <= n; i++){
        // getting the prime divisor
        ll tmpI = i;
        for(ll j = 2; j * j <= tmpI; j++){
            while(tmpI % j == 0){
                st.insert(j);
                tmpI /= j;
            }
        }
        if(tmpI > 1){
            st.insert(tmpI);
        }
        if(st.size() == 2) ans++;
        st.clear();
    }
    cout << ans << nl;

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