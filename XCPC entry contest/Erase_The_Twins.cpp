#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;


//
int main()
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

        // // we will be using a frequency array to store the repitation and if any letter is repeated more than once we will not coount it

        // vector<int> freq(26, 0);

        // // traversing through the string
        // for (char c : s)
        // {
        //     freq[c - 'a']++;
        // }

        // // now traversing through the frequency array and counting how many singe letter we have
        // int cnt = 0;
        // for (int val : freq)
        // {
        //     if (val == 1)
        //         cnt++;
        // }

        // cout << cnt << nl;


        // we will use linked list
    }
    return 0;
}