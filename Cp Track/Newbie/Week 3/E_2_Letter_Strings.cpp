// problem link : https://codeforces.com/problemset/problem/1669/E

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        vector<string> arr(n);
        map<string, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        ll ans = 0;

        for (string s : arr)
        {
            for(char c = 'a'; c <= 'z'; c++)
            {
                if (c == s[1])
                    continue;
                string t = "";
                t+= s[0];
                t+= c;
                ans += freq[t];
            }
            for(char c = 'a'; c <= 'z'; c++)
            {
                if (c == s[0])
                    continue;
                string t = "";
                t+= c;
                t+= s[1];
                ans += freq[t];
            }
        }
        

        cout << ans / 2 << nl;
    }
    return 0;
}


