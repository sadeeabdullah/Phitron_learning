/*problem link : https://codeforces.com/problemset/problem/749/A*/
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
    ll n;   cin >> n;

    ll cnt =0;
    vector<ll> ans;
    ll cnt2 = n / 2;
    ll cnt3 = 0;
    if(n % 2 == 1){
        cnt2--;
        cnt3++;
    }

    cout << cnt2 + cnt3 <<  nl;
    for(ll i = 1; i<= cnt2; i++)
        cout << 2 << " ";
    if (cnt3) cout << 3;
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