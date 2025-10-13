// problem link : https://www.codechef.com/problems/ADJSUM

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
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        // now we basically have two options in the problem 
        // 1 : we will make the ith element 0;
        // 2 : we will make the ith element == (i - 1)th element and (i - 2)th element 0

        vector<ll> dp(n); // taking a dp array now we will traverse through the array and take the minimum of the two options
        // initially the first element of the dp will the first element of the array
        dp[0] = arr[0];

        for(int i = 1; i < n; i++)
        {

            ll cost1 = arr[i] + dp[i - 1];

            if (i - 1 >= 0)
            {
                ll cost2 = abs(arr[i] - arr[i - 1]);

                if (i - 2 >= 0)
                    cost2 += arr[i - 2];
                if (i - 3 >= 0)
                    cost2 += dp[i - 3];

                // now set the dp as the minimum cost
                dp[i] = min(cost1, cost2);
            }
        }

        cout << dp[n - 1] << nl;
    }
    return 0;
}