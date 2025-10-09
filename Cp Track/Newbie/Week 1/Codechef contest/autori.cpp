//problem link : https://open.kattis.com/problems/autori

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

    string res = "";
    for(char ch : s)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            res += ch;
        }
    }

    cout << res << nl;
    return 0;
}