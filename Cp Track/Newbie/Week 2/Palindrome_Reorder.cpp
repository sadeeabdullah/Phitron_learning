// problem link : https://cses.fi/problemset/task/1755

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

    string s;
    cin >> s;

    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }

    int odd_cnt = 0;
    char odd_char;
    for (auto [c, cnt] : mp)
    {
        if (cnt % 2 != 0)
        {
            odd_char = c;
            odd_cnt++;
        }
    }

    if (odd_cnt > 1)
    {
        cout << "NO SOLUTION" << nl;
    }
    else
    {
        string first_to_middle = "";
        for (auto [c, cnt] : mp)
        {
            for (int i = 1; i <= cnt / 2; i++)
            {
                first_to_middle += c;
            }
        }
        cout << first_to_middle;
        if (odd_cnt == 1)
            cout << odd_char;
        reverse(first_to_middle.begin(), first_to_middle.end());
        cout << first_to_middle;
    }
    return 0;
}