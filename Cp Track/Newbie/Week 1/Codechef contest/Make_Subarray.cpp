// problem link : https://www.codechef.com/START207D/problems/MAKESUB

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
        cin >> n;
        string s;
        cin >> s;
        bool black_flag = false;
        int initial_black = 1e8, terminal_black = 1e8;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1' && !black_flag)
            {
                black_flag = true;
                initial_black = i;
            }
        }

        black_flag = false;

        for (int i = n - 1; i >= 0; i--)
        {
            if(s[i] == '1' && !black_flag)
            {
                black_flag = true;
                terminal_black = i;
            }
        }

        if ((initial_black == 1e8 && terminal_black == 1e8) || (initial_black == terminal_black))
        {
            cout << 0 << nl;
        }
        else
        {
            int cnt = 0;
            for (int i = initial_black + 1; i < terminal_black; i++)
            {
                if (s[i] == '0')
                    cnt++;
            }

            cout << cnt << nl;
        }

    }
    return 0;
}