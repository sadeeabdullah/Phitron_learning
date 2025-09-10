#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];

int dp[1005][1005];

int knapsack(int i, int mx_weight) // tc: o(n W) mx_weight w
{
    if (i < 0 || mx_weight <= 0)
        return 0;
    
        // if already setted
    if (dp[i][mx_weight] != -1)
    {
        return dp[i][mx_weight];
    }
    if (weight[i] <= mx_weight)
    {
        // 2 options
        // 1. bag e rakhbo, 2. bag e rakhbona
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mx_weight); // bag e rakhtesina
        dp[i][mx_weight] = max(op1, op2);
        return dp[i][mx_weight];
    }
    else
    {
        // bag e rakhbona
        dp[i][mx_weight] = knapsack(i - 1, mx_weight);
        return dp[i][mx_weight];
    }

}
int main()
{
    int n, maxWeight;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];

    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cin >> maxWeight;

    memset(dp, -1, sizeof(dp));

    // calling knacksack function
    int val = knapsack(n - 1, maxWeight);

    cout << val << endl;
    return 0;
}