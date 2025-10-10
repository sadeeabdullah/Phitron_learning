// problem link : https://cses.fi/problemset/task/1083

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
    vector<int> arr(n);
    for(int i = 1;i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for(int i = 1; i < n; i++)
    {
        if (arr[i] != i )
        {
            cout << i  << nl;
            return 0;
        }
    }
    cout << n << nl;
    return 0;
}