// problem link : https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    string s, t;
    cin >> s >> t;

    int n = s.length();

    int cnt = 0;
    for(int i = 0; i < n; i ++)
    {
        if (s[i] != t[i])
            cnt++;
    }

    cout << cnt << nl;
    return 0;
}