// problem link : https://vjudge.net/contest/763324#problem/C


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

int main ()
{
    fastIO();
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        loop (0, n - 1, i)
        {
            cin >> a[i]; 
        }
        loop (0, n - 1, i)
        {
            cin >> b[i];
        }

        int ans = 0;
        loop(0, n - 1, i)
        {
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i])
            {
                ans++;
            }
        }

        cout << ans << nl;
    }
    return 0;
}