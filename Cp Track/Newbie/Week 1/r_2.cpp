// problem link : https://open.kattis.com/problems/r2

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int r1, s;
    cin >> r1 >> s;
    cout << 2*s - r1 << nl;
    return 0;
}