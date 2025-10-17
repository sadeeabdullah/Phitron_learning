//problem link : https://codeforces.com/problemset/problem/4/C
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
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (mp[name] == 0)
        {
            cout << "OK" << nl;
            mp[name] = 1;
        }
        else
        {
            string newName = name + to_string(mp[name]);
            cout << newName << nl;
            mp[name]++;
        }
    }
    return 0;
}