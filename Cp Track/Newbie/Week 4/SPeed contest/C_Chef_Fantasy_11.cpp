// problem link : https://vjudge.net/contest/761292#problem/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * (n - 1);
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
        cout << fact(n) << nl;
    }
    return 0;
}