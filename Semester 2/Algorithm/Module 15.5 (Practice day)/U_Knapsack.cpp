#include <bits/stdc++.h>
using namespace std;
int n, w;
int weight[55], val[1005];
int dp[55][1005];

int knapsack(int n, int mx_weight)
{
    if (n < 0 || mx_weight  == 0)
        return 0;

    if (dp[n][mx_weight] != -1)
        return dp[n][mx_weight];
    if (weight[n] <= mx_weight)
    {
        // will take in bag
        int op1 = knapsack(n - 1, mx_weight - weight[n]) + val[n];
        int op2 = knapsack(n - 1, mx_weight);

        dp[n][mx_weight] =  max(op1, op2);
        return dp[n][mx_weight];
    }
    else
        dp[n][mx_weight] = knapsack(n - 1, mx_weight);
    return dp[n][mx_weight];
}
int main()
{
    cin >> n >> w;
    memset(dp, -1, sizeof(dp));
    // taking input the both array
    for (int i = 0; i < n; i++)
        cin >> weight[i] >> val[i];

    // we will call the 0/1 knapsack function here
    cout << knapsack(n - 1, w) << endl;
    return 0;
}