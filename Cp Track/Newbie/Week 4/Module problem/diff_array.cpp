#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);

    loop(1, n, i)
    {
        cin >> a[i];
    }

    vector<int> d(n + 2),pref(n + 2);

    loop(1, q,i)
    {
        int l, r, x;
        cin >> l >> r >> x;
        d[l] += x;
        d[r + 1] -= x;

    }
    loop(1, n, i)
    {
        pref[i] = pref[i - 1] + d[i];
    }

    // for(auto val : pref)
    // {
    //     cout << val << " ";
    // }

    loop(1, n, i)
    {
        a[i] += pref[i];
    }

    loop(1, n, i)
    {
        cout << a[i] << " ";
    }

}
int main ()
{
    fastIO();
    
    solve();
    return 0;
}