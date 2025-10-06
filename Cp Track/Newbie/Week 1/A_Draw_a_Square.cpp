//problem link : https://codeforces.com/problemset/problem/2074/A


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
        int l, r, d, c;
        cin >> l >> r >> d >> c;
        cout << ((l == r && r == d && d == c) ? "Yes" : "No") << nl;
    }
    return 0;
}



