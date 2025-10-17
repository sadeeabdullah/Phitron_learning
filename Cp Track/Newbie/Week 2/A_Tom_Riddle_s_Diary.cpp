//  problem link : https://codeforces.com/problemset/problem/855/A

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
    vector<string> names(n);
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    for (int i = 0;i < n; i++)
    {
        bool found = false;
        for (int j = 0 ; j < i; j++)
        {
            if (names[i] == names[j])
            {
                found = true;
                break;
            }
        }
        cout << ((found) ? "YES" : "NO") << nl;
    }
    return 0;
}