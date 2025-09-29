// the main difference between 0/1 knapsack and unbounded knapsack is in 0/1 we cannot take same value multiple time but here we can take it mulitiple time

#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int val[1005];
int weight[1005];
int dp[1005][1005];  // using dp

// creating knapsack function
int knapsack(int i, int mx_weight)
{
    //base case here
    if (i < 0 || mx_weight == 0)
    {
        return 0;
    }

    // if the value is stored then no need to check again return the value
    if (dp[i][mx_weight] != -1)
    {
        return dp[i][mx_weight];
    }

    if(weight[i] <= mx_weight)
    {
        int op1 = knapsack(i, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mx_weight);
        dp[i][mx_weight] = max(op1, op2);
        return dp[i][mx_weight];
    }
    else
    {
        dp[i][mx_weight] = knapsack(i - 1, mx_weight);
        return dp[i][mx_weight];
    }
}
int main()
{
    fastIO();
    
    int n;
    cin >> n;

    // taking input of the value
    for (int i = 0; i < n; i++)
        cin >> val[i];

    // taking input of the weight
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    int mx_weight;
    cin >> mx_weight;

    // setting all the value of dp to -1
    memset(dp, -1, sizeof(dp));

    int ans = knapsack(n - 1, mx_weight);

    cout << ans << nl;
    return 0;
}