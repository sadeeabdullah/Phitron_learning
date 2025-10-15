// problem link : https://codeforces.com/problemset/problem/1927/A
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first_b = s.find('B');
        int last_b = s.rfind('B');

        cout << last_b - first_b + 1 << nl;
    }
    return 0;
}