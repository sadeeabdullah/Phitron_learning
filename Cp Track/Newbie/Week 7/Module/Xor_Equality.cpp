// probelm link : https://www.codechef.com/problems/XOREQUAL


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

const ll M = 1e9 + 7, N = 1e5;
template <typename T> using pbds = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


vector<int> pw(N + 1); // storing the power value

void precompute()
{
    pw[0] = 1;

    for(int i= 1 ;i <= N; i++)
    {
        pw[i] =(pw[i - 1] * 2LL) % M;
    }

}


void solve()
{
    int n;
    cin >> n;

    cout << pw[n - 1] <<nl;
   
}
int main ()
{
    fastIO();
    precompute();
    testCase
    {
        solve();
    }
    return 0;
}