// problem link : https://codeforces.com/problemset/problem/1831/A

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

        vector<int> arr(n + 1);
        int i;
        for(i = 1; i <= n; i++)
            cin >> arr[i];

        
        for(i = 1; i <= n; i++)
            cout << (n + 1) - arr[i] << " ";

        cout << nl;
    }
    return 0;
}