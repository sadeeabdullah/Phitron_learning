// problem link : https://vjudge.net/contest/755982#problem/K

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;

        if (s.size() == 1)
        {
            if (s[0] != 'z')
                s.push_back(char(s[0] + 1));
            else
                s.push_back('a');
            cout << s << nl;
        }
        else if (s.size() == 2 && s[0] == s[1])
        {
            if (s[0] != 'z')
                s.insert(s.begin() + 1, char(s[0] + 1));
            else
                s.insert(s.begin() + 1, 'a');

            cout << s << nl;
        }
        else if (s.size() == 2 && s[0] != s[1])
        {
            cout << s << nl;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (i != s.size() - 1 && s[i] == s[i + 1])
                {
                    if (s[0] != 'z')
                        s.insert(s.begin() + i + 1, char(s[0] + 1));
                    else
                        s.insert(s.begin() + i + 1, 'a');
                }
            }
            cout << s << nl;
        }
    }
    return 0;
}