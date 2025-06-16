#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'A']++;
        }

        int total_balloons = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
                total_balloons += freq[i] + 1;
        }

        cout << total_balloons << endl;
    }
    return 0;
}