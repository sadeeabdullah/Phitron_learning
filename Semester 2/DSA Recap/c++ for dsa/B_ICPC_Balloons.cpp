#include <bits/stdc++.h>
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // taking a frequency array
        vector<int> freq(26, 0);

        for(int i = 0; i < n; i++)
        {
            freq[s[i] - 'A']++;
        }

        int ballonCnt = 0;
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > 0)
            {
                ballonCnt += freq[i] + 1;
            }
        }

        cout << ballonCnt << nl;
    }
    return 0;
}