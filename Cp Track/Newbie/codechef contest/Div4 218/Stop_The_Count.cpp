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


// void solve()
// {
//    ll n;   cin >>n;
//    string s;    cin >> s;

//    ll  countN = count(s.begin(), s.end(), '1');
//    ll countZ = count (s.begin(), s.end(), '0');
//    if(countN == 0){
//     cout << 0 << nl;
//     return;
//    } else if(countZ == 0 && countN >= 1){
//     cout << countN <<nl;
//     return;
//    }
//    cout <<countN - countZ  + 1<< nl;
// //    cout << countN << nl;
// }


void solve()
{
    ll n;   cin >>n;
   string s;    cin >> s;

   ll ans = 0;
   int zeroCnt = 0, oneCnt = 0;
   for(ll i = 0;i < n; i++)
   {
        if(s[i] == '0') zeroCnt++;
        else oneCnt++;
        if(oneCnt > zeroCnt) ans++;
   }
   cout << ans <<nl;
}
int main ()
{
    fastIO();
    testCase{

        solve();
    }
    return 0;
}