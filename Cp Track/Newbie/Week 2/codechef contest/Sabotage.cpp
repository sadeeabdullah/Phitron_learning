// problem link : https://www.codechef.com/START208D/problems/SBTG

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
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        
        sort (arr.rbegin(), arr.rend());

        
        int operation = 0;
        for (int i = 0 ; i < n && operation < k; i++)
        {
            if (arr[i] > x)
            {
                x += 100;
                arr[i] = 0;
                operation++;
            }
        }

        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (x < arr[i])
            {
                ans++;
            }
        }

        cout << ans << nl;
    }
    return 0;
}