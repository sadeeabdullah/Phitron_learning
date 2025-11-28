// problem link : https://codeforces.com/problemset/problem/1669/H

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


const int B = 30;

void solve()
{
 
    int n, K;
    cin >> n >> K;

    vector<int> a(n);
    loop(0, n - 1, i)
    {
        cin>> a[i];
    }

    int ans = 0;

    // storing how many bits is on the k index or kth bit
    vector<int> bits(B + 1);
    for(int i = 0 ; i < n; i++)
    {
        for(int k = B; k >= 0; k--)
        {
            if(a[i] >> k & 1)
            {
                bits[k]++;
            }
        }
    }

    // now we will go from the highest bit to lowest bit and on it
    for(int k = B; k >= 0; k--)
    {
        // if all beats is on then we will add it
        if(bits[k] == n)
        {
            ans+= (1LL << k);
        }

        else
        {
            int need = n - bits[k];

            if(K >= need)
            {

                ans += (1LL << k);
                K -= need;
            }
        }
    }
    cout << ans << nl;
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