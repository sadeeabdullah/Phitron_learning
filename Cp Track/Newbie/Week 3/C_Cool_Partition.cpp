// problme link :https://codeforces.com/problemset/problem/2117/C


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;

using namespace std;

int main ()
{
    fastIO();
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 1, ind = 0;
        set<int> s;
        s.insert(arr[0]);

        for(int i = 1; i < n; i++)
        {
            if (s.find(arr[i]) != s.end())
            {
                s.erase(arr[i]);
            }

            if (s.empty())
            {
                ans++;
                for(int j = ind + 1; j <= i; j++)
                {
                    s.insert(arr[j]);
                }
                ind = i;
            }
        }
        cout << ans << nl;
    }
    return 0;
}