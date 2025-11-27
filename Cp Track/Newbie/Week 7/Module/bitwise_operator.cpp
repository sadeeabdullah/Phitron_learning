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
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    
    int a = 5, b = 6;
    cout << (a & b) << nl;      // 4
    cout << (a | b) << nl;      // 7
    cout << (a ^ b) << nl;      // 3
    int n = a << 1;
    cout << (n) << nl;      // 10
    cout << (n << 1) << nl;      // 20
    cout << (n >> 1) << nl;      // 10


    //  KEY OBSERVATION :
    // BY LEFT SHIFTING WE HAVE THE TWICE OF THE SHIFTING VALUE AND BY RIGHT SHIFTING WE GET THE 1/2




    /// ANOTHER INTERESTING PART IS GETTING THE POWER OF 2 BY USING THE LEFT SHIFT

    cout << (1 << 4) << nl;     // 16
}
int main ()
{
    fastIO();
    
    int t  = 1;
    cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}