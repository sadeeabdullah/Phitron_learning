// problem link: https://www.codechef.com/problems/P1149?tab=statement

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int x, y, k;
    cin >> x >> y >> k;
    cout << (!(abs(x - y) <= k) ? "No" : "Yes") << nl;
    return 0;
}