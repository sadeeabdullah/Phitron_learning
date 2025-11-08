// problem link : https://codeforces.com/problemset/problem/1873/D

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
 
    testCase{
        int n, m;
        cin >> n >> m;
        string s;
        cin  >> s;
        int cnt = 0;
        for(int i = 0; i < n; i++ )
        {
            if(s[i] == 'B')
            {
                cnt++;
                i += m - 1;
            }
        }
        cout << cnt << nl;

    }
    return 0;
}