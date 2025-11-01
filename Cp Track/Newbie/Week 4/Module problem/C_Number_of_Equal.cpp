// problem link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

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
    map<int, int> mp;
    loop(1, n, i)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    ll cnt = 0;
    while(m--)
    {
        int y; 
        cin >> y;
        cnt += mp[y];
    }

    cout << cnt << nl;

    return 0;
}