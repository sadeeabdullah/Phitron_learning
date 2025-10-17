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
        int n;
        string s;
        cin >> n >> s;

        bool present[26] = {0};
        for (char c : s)
        {
            present[c - 'a'] = true;
        }

        string r;
        for (int i = 0;i < 26; i++)
        {
            if (present[i])
                r.push_back('a' + i);
        }


        char decode[26];
        int m = r.size();

        for (int i = 0 ;i < m; i++)
        {
            decode[r[m - 1 - i] - 'a'] = r[i];
        }


        string ans;
        for (char c : s)
        {
            ans.push_back(decode[c - 'a']);
        }

        cout << ans << nl;

    }
    return 0;
}