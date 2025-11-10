// problem link ; https://codeforces.com/problemset/problem/600/B

#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
#define tInt(var) int var; cin >> var;
#define tLL(var)  ll var;  cin >> var;
#define tStr(var) string var; cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree <T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main ()
{
    fastIO();
 
    int n, m;
    cin >> n >> m;
    pbds<int> a;
    vector<int> ans;
    loop(0, n - 1, i)
    {
        tInt(x);
        a.insert(x);
    }
    loop(0, m - 1, i)
    {
        tInt(x);
        ans.push_back(a.order_of_key(x + 1));
    }

    for(int val : ans)
    {
        cout << val << " ";
    }
    cout << nl;


    return 0;
}