//problem link : https://www.codechef.com/START207D/problems/TOURIST

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int dis = INT_MAX;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            int get_dis = abs(x - a) + abs(y - b);
            if (get_dis < dis)
                dis = get_dis;
        }

        cout << dis << nl;
    }
    return 0;
}