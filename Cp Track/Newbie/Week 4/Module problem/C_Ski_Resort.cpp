// probleml ink : https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase \
    {            \
    }            \
    int tc;      \
    cin >> tc;   \
    while (tc--)
using namespace std;

int main()
{
    fastIO();

    testCase
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<ll> arr(n);
        for (auto &val : arr)
        {
            cin >> val;
        }

        ll cnt = 0;

        ll ans = 0;
        loop(0, n - 1, i)
        {
            if (arr[i] <= q)
            {
                cnt++;
            }
            else
            {
                if (cnt >= k)
                {
                    int an = cnt - k + 1;
                    ans += (an * (an + 1)) / 2;
                }
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            ll an = cnt - k + 1;
            ans += (an * (an + 1)) / 2;
        }

        cout << ans << nl;
    }
    return 0;
}