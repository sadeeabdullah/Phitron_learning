// problem link : https://open.kattis.com/problems/hissingmicrophone

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
    if (s.find("ss") != string ::npos)
        cout << "hiss" << nl;
    else
        cout << "no hiss" << nl;
    return 0;
}