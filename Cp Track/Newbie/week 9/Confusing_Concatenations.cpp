// problem link : https://www.codechef.com/problems/CONFCAT

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
   ll n;    cin >> n;
   vector<ll> gvn(n);     for(ll i= 0; i < n; i++)    cin >> gvn[i];
   
   vector<ll>a, b;

    ll l = 1, curr = 0;
    ll lastPush = gvn[0];
    a.push_back(lastPush);
    
   for(ll i = 1; i < n; i++){
       
       if(gvn[i] > lastPush){
           lastPush = gvn[i];
           curr = 1 - curr ;
        }

        if(curr == 0){
            a.push_back(gvn[i]);
        }else{
            b.push_back(gvn[i]);
        }
   }
   if(a.empty() || b.empty()){
    cout << -1 << nl;
   }else{
    cout << a.size() << nl;
    for(auto val : a){
        cout << val << " ";
    }
    cout << nl << b.size() << nl;
    for(auto val : b){
        cout << val << " ";
    }
    cout << nl;
   }
}
int main ()
{
    fastIO();

    testCase
    {

        solve();
    }
    return 0;
}