// problem link : https://codeforces.com/problemset/problem/1722/C

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
    while(tc--)
    {
        int n, m = 3;
        cin >> n;

        map<string, vector<int>> mp;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }

        
        vector<int> ans(m + 1);
        for (auto [x, y] : mp)
        {
            vector<int> v = y;
            if (v.size() == 1)
            {
                ans[v[0]] += 3;
            }
            else if (v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }

        for (int i = 1; i <= m; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
    return 0;
}