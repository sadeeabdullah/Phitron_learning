//problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3301

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    ll n;
    while(cin >> n && n != 0)
    {
        cout << (n*(n + 1) * (2 * n + 1)) / 6 << nl;
    }
    return 0;
}