#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        char ch;
        cin >> n >> ch;
        string s(n,ch);
        // cout << s;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << s[i] << " ";
        // }

        for(auto it = s.begin(); it < s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    
    return 0;
}