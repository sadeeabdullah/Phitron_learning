// problem link : https://cses.fi/problemset/task/2217

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
#define vi vector<int>

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, m;   cin >> n >>  m;
    map<int, int> pos;
    pos[0] = 0 ;
    pos[n + 1] = n + 1;
    vi a(n + 1);
    //storing the position
    for(int i = 1; i <= n; i++)  {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int round = 1;
    // counting the round at first
    for(int i = 2; i <= n; i++){
        if(pos[i - 1] > pos[i]) round++;
    }

    while(m--)
    {
        int i, j; cin >> i >> j;
        if(i > j)   swap(i, j);
        int x = a[i];
        int y = a[j];

        if(pos[x + 1] > i && pos[x + 1] < j)    round++;
        if(pos[x - 1] > i && pos[x - 1] < j)    round--;
        if(pos[y + 1] > i && pos[y + 1] < j)    round--;
        if(pos[y - 1] > i && pos[y -1] < j)     round++;

        // if the values are consequitive
        if(x == (y + 1)) round--;
        if(x == (y - 1)) round++;
        cout << round << nl;

        // performing the operation
        swap(a[i], a[j]);
        pos[x] = j, pos[y] = i;
    }
}
int main()
{
    fastIO();
    solve();
    return 0;
}