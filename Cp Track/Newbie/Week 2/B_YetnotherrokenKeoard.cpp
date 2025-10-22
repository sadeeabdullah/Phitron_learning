// problem link: https://codeforces.com/problemset/problem/1907/B
// solution link : https://www.youtube.com/watch?v=NEhDrjws6io

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

        
        stack<int> lowerCaseIdx, upperCaseIdx;

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
                lowerCaseIdx.push(i);
            else if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
                upperCaseIdx.push(i);

            // when we get the upper case B
            if (s[i] == 'B')
            {
                if (!upperCaseIdx.empty())
                {
                    s[upperCaseIdx.top()] = '#';
                    upperCaseIdx.pop();
                }
                s[i] = '#';
            }
            else if (s[i] == 'b')
            {
               if (!lowerCaseIdx.empty())
                {
                    s[lowerCaseIdx.top()] = '#';
                    lowerCaseIdx.pop();
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