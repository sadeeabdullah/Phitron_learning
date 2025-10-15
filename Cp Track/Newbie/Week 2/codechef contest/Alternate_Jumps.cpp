// problem link : https://www.codechef.com/START208D/problems/ALJMP

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
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

        if (n % 2 != 0)
        {
            cout << n /2 + 1 << nl;
        }
        else
        {
            cout << n/2 << nl;
        }
    }
    return 0;
}