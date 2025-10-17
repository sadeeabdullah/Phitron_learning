// problem link : https://codeforces.com/problemset/problem/977/B


#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string twoGram = s.substr(i,2);
        mp[twoGram]++;
    }

    string ans;
    int maxCnt = 0;

    for (auto [x, y] : mp)
    {
        if (y > maxCnt)
        {
            maxCnt = y;
            ans=x;
        }
    }
    cout << ans << nl;
    return 0;
}