// problem link : https://codeforces.com/problemset/problem/276/C

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define sORT(var) sort(var.begin(), var.end())
#define rsORT(var) sort(var.rbegin(), var.rend())
using namespace std;

int main ()
{
    fastIO();
    
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    loop(0, n - 1, i)
    {
        cin >> a[i];
    }

    vector<int> d(n + 1);
    loop(0, q - 1, i)
    {
        int l , r;
        cin >> l >> r;
        l--, r--; // making these  0 base index;
        d[l]++;
        d[r + 1]--;

    }

    loop(1, n, i)
    {
        d[i] = d[i - 1] +  d[i];
    }

    rsORT(a);
    rsORT(d);

    ll ans = 0;
    loop(0, n - 1, i)
    {
        ans += (1LL * a[i] * d[i]);
    }

    cout << ans << nl;

    return 0;
}