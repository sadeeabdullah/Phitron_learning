// problem link : https://cses.fi/problemset/task/1646


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase{} int tc; cin >> tc; while(tc--)
using namespace std;

int main ()
{
    fastIO();
 
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    arr[0] = 0;
    loop(1, n, i)
    {
        cin >> arr[i];
    }

    vector<ll> pref(n + 1);
    pref[0] = 0;
    pref[1] = arr[1];
    loop(2,n,i)
    {
        pref[i] = pref[i - 1] + arr[i];
    }

    while(q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
        {
            cout << pref[r] << nl;
            continue;
        }

        cout << (pref[r] - pref[l - 1]) << nl;
    }
    return 0;
}