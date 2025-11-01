// problem link : https://codeforces.com/problemset/problem/1791/C

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
        vector<char> dp(n + 1);
        loop(1, n, i)
        {
            cin >> dp[i];
        }

        int i = 1, j = n;
        while(i < j && dp[i] != dp[j])
        {
                i++, j--;
        }
        cout << j - i + 1 << nl;
    }
    return 0;
}