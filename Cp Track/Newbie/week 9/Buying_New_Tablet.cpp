//https://www.codechef.com/problems/TABLET

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


void solve()
{
   ll n, b;    cin >> n >> b;

   vector<pair<ll, ll >> lst;
   vector<ll> price;
    for(ll i = 0; i < n; i++){
        int w, h, p;    cin >> w >> h >> p;
        lst.push_back({(w * h), p});
        price.push_back(p);
    }

    rsORT(lst);

    for(ll i = 0 ; i < n ; i++){
        if(lst[i].second <= b){
            cout << lst[i].first << nl;
            return;
        }
    }

    cout << "no tablet" << nl;

}
int main ()
{
    fastIO();
    testCase{

        solve();
    }
    return 0;
}