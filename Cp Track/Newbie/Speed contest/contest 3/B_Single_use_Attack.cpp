// problem liink : https://vjudge.net/contest/763324#problem/B

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
        int h, x, y;
        cin >> h >> x >> y;
        h -= y;
        cout << ((h % x> 0) ? (h / x) + 2 : h / x + 1) << nl;
    }
    return 0;
}