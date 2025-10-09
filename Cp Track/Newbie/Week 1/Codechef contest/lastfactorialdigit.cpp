//problem link: https://open.kattis.com/problems/lastfactorialdigit

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int last_dig(int n)
{
    return n % 10;
}

int main ()
{
    fastIO();
    
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        cout << last_dig(fact(n)) << nl;
    }
    return 0;
}