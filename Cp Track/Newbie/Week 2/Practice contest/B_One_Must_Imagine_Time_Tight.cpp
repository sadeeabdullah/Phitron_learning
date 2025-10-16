// problem link : https://vjudge.net/contest/757589#problem/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    vector<int> arr;
    int n = INT_MAX;
    int x;
    while (cin >> x)
    {
        if (x < n)
            n = x;
    }

    cout << n << nl;
    return 0;
}