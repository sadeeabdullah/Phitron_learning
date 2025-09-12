// problem link: https://leetcode.com/problems/min-cost-climbing-stairs/description/

// solution:
class Solution {
public:
int dp[1005];
    int solve(vector<int> &cost, int n)
    {
        // base case
        if (n == 0 || n == 1)
            return 0;

        if (dp[n] != -1)
            return dp[n];
        int c1 = cost[n - 1] + solve(cost, n - 1);
        int c2 = cost[n - 2] + solve(cost, n - 2);

        dp[n] =  min(c1, c2);
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        memset(dp, -1, sizeof(dp));
        return solve(cost, n);
    }
};