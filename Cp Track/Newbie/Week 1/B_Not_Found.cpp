// problem link : https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    string s;
    cin >> s;
    int freq[26] = {0};
    for(int c : s)
    {
        freq[c - 'a']++;
    }

    int miss = 1e8;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            miss = i;
            break;
        }
    }

    if (miss == 1e8)
    {
        cout << "None" << nl;
        return 0;
    }
    cout << char('a' + miss) << nl;
    return 0;
}