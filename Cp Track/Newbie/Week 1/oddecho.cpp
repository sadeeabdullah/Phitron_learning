// problem link : https://open.kattis.com/problems/oddecho

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
    vector<string> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i += 2)
    {
        cout << arr[i] << nl;
    }
    return 0;
}