#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int val[1005];

int dp[1005][1005];

// creating the subset funtion
bool subset_sum(int i, int sum)
{
    if (i < 0)
    {
        if (sum == 0)
        {

            return true;
        }
        else
        {
            return false;
        }
    }
    
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    if (val[i] <= sum)
    {

        bool op1 = subset_sum(i - 1, sum - val[i]);
        bool op2 = subset_sum(i - 1, sum);
        dp[i][sum] =  op1 || op2;
        return dp[i][sum];
    }
    else
    {
        dp[i][sum] =  subset_sum(i - 1, sum);
        return dp[i][sum];
    }
}
int main()
{
    fastIO();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];

    int sum;
    cin >> sum;

    // setting dp array to false
    memset(dp, -1, sizeof(dp));

    bool isPossible = subset_sum(n - 1, sum);

    cout << ((isPossible) ?  "YES" : "NO") << nl;
    return 0;
}