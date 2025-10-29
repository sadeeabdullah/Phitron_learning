// problem link : https://www.codechef.com/START210D/problems/NOTECNT


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES"<< nl;
#define no cout << "NO" << nl;
#define loop(start, end,var) for (int var = (start); var <= (end); var++)
using namespace std;

int main ()
{
    fastIO();
    int n, m;
    cin >> n >> m;
    cout << (n * m ) * 100 << nl;
    return 0;
}