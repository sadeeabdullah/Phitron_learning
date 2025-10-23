/// problem link : https://codeforces.com/problemset/problem/1702/C

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    int tc;     cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>>mp;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        while(m--)
        {
            int a, b;
            cin>> a >> b;
            if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
            {
                cout << "NO" << nl;
            }
            else
            {
                int a_idx =*mp[a].begin();
                int b_idx = *mp[b].rbegin();
                cout << ((a_idx < b_idx) ? "YES" : "NO") << nl;
            }
        }
        
    }
    return 0;
}