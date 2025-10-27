// problem link : https://vjudge.net/contest/761292#problem/B

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
 
    int tc;
    cin >>tc;
    while(tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int total_student = x * y;
        if (total_student / 2 < z)
        {
            yes;
        }
        else 
        {
            no;
        }
    }
    return 0;
}