#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.size() != s2.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            map<char, int> mp1;
            map<char, int> mp2;

            for (int i = 0; i < s1.size(); i++)
            {
                mp1[s1[i]]++;
                mp2[s2[i]]++;
            }

            cout << ((mp1 == mp2) ? "YES" : "NO") << endl;
        }
    }
    return 0;
}