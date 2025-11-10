//  problem link : https://www.spoj.com/problems/INVCNT/en/

#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rloop(start, end,var) for (int var = (start); var >= (end); var--)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main ()
{
    fastIO();
 
    testCase
    {
        pbds<int> pb;
        tInt(n);
        vector<int> a(n);
        loop(0, n - 1, i)
        {
            cin >> a[i];
        }

        ll ans = 0;
        // inserting in pbds
        rloop(n - 1, 0, i)
        {
            ans += pb.order_of_key(a[i]);
            pb.insert(a[i]);
        }
        cout << ans << nl;
    }
    return 0;
}