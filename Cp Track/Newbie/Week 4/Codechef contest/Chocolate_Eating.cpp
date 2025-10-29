// problem link : https://www.codechef.com/START210D/problems/CHOCEAT

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
        if (a == b)
        {
            cout << a + b - 1 << nl;
        }
        else
        {
            cout << a + b << nl;
        }
    }
    return 0;
}