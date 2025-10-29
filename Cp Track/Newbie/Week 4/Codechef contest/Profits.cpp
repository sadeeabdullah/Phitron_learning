// problem link : https://www.codechef.com/START210D/problems/PROFIT?tab=statement
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
        int a, b;
        cin >> a >> b;

        int willServe =  a - b;

        if (willServe <= 0)
        {
            cout << 0 << nl;
        }
        else
        {
            int ans = (willServe* (willServe + 1)) / 2;
            cout << ans << nl;
        }
    }
    return 0;
}