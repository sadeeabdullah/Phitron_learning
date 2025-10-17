// problem link: https://codeforces.com/problemset/problem/1907/B

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
        string s;
        cin >> s;

        bool found_b = false;
        bool found_B = false;

        stack<int> lowercase_idx;
        stack<int> uppercase_idx;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] <= 'z' && s[i] >= 'a' && s[i] != 'b')
            {
                lowercase_idx.push(i);
            }
            else if(s[i] <= 'Z' && s[i] >= 'A' && s[i] != 'B')
            {
                uppercase_idx.push(i);
            }

            if (s[i] == 'b')
            {
                 if (!(lowercase_idx.empty()))
                {
                    s[lowercase_idx.top()] = '#';
                    lowercase_idx.pop();
                }
                s[i] = '#';
            }
            else if (s[i] == 'B')
            {
                if (!(uppercase_idx.empty()))
                {
                    s[uppercase_idx.top()] = '#';
                    uppercase_idx.pop();
                }
                s[i] = '#';
            }
        }

        for(char c : s)
        {
            if (c != '#')
                cout << c;
        }
        cout << nl;
        
    }
    return 0;
}