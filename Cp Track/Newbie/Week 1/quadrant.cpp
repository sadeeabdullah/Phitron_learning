// problem link : https://open.kattis.com/problems/quadrant

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int a, b;
    cin >> a >> b;

    if (a < 0 && b < 0)
        cout << 3 << nl;
    else if (a < 0 && b > 0)
        cout << 2 << nl;
    else if (a > 0 && b < 0)
        cout << 4 << nl;
    else
        cout << 1 << nl;
    return 0;
}