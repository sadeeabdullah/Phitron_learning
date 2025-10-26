// problem link : https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
using namespace std;

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;
    multiset<int> s;
    loop(1, n, i)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    while (m--)
    {
        int val;
        cin >> val;
        auto it = s.upper_bound(val);

        if (it == s.begin())
        {
            cout << -1 << nl;
        }
        else
        {
            --it;
            cout << *it << nl;
            s.erase(it);
        }

    }

    return 0;
}