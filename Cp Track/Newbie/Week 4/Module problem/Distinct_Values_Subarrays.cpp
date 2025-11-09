// problem link : https://cses.fi/problemset/task/3420


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
 
    int n;
    cin>> n;
    map<int, int> lastSeen;
    ll ans = 0;
    for(int i = 1, j = 1; i <= n;i++)
    {
        int x;
        cin >> x;
        j = max(j, lastSeen[x] + 1);
        lastSeen[x] = i;
        ans += (i - j + 1);

    }

    cout << ans << nl;
    return 0;
}