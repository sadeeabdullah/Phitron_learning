// problem link : https://codeforces.com/problemset/problem/1805/A

// Bismillah hir rahmanir rahim
// keep Patience, Destiny is more beautiful

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define tStr(var) \
    string var;   \
    cin >> var;
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

using namespace __gnu_pbds;

using namespace std;

// key observation:

//(a₁ ⊕ x) ⊕ (a₂ ⊕ x) ⊕ ... ⊕ (aₙ ⊕ x) = 0
// (a₁ ⊕ a₂ ⊕ ... ⊕ aₙ) ⊕ (x ⊕ x ⊕ ... ⊕ x) = 0
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 1 << 8;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     int Xor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         Xor ^= a[i];
//     }

//     if (Xor == 0)
//     {
//         cout << 0 << nl;
//         return;
//     }
//     if (n % 2 == 1)
//     {
//         cout << Xor << nl;
//         return;
//     }

//     cout << -1 << nl;
// }


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int x = 0 ; x <= N; x++)
    {
        int val  = 0;
        for(int i= 0; i < n; i++)
        {
            val ^= a[i] ^ x;
        }

        if (val == 0)
        {
            cout << x << nl;
            return;
        }

        
    }
    cout <<  -1 << nl;
}
int main()
{
    fastIO();
    testCase
    {
        solve();
    }
    return 0;
}