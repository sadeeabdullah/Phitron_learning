// problem link : https://codeforces.com/problemset/problem/1792/A


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
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int num_one = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                num_one++;
        }
        cout << n - ((num_one / 2)) << nl;
    }
    
    return 0;
}