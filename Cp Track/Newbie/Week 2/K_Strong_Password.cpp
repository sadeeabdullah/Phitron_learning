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
 
        int n = s.size();
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            cout << s[i];
            if (s[i + 1] == s[i] && flag == true)
            {
                flag = false;
                if (s[i] == 'a')
                    cout << 'b';
                else
                    cout << 'a';
            }
        }
        cout << s[n - 1];
        if (flag == true)
        {
            if (s[n - 1] == 'a')
                cout << 'b';
            else
                cout << 'a';
        }
        cout << endl;
    }
    return 0;
}


