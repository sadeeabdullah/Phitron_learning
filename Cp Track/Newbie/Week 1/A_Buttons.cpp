// problem link : https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int n, m;
    cin >> n >> m;

    if (n - 1 > m)
    {
        cout << n + (n - 1) << nl;
    }
    else if (m - 1 > n)
    {
        cout << m + m - 1 << nl;
    }
    else
    {
        cout << n + m << nl;
    }
    return 0;
}