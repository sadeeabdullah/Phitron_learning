// problem linK: https://leetcode.com/problems/climbing-stairs/

// solution:
class Solution {
public:
// after analyzing the solutions and problem we can say that it is a fibonacci series

    int dp[46];
    int fib(int i)
    {
        if (i < 3)
            return i;
        if (dp[i] != -1)
            return dp[i];
        dp[i] = fib(i - 1) + fib(i - 2);
        return dp[i];
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        int res = fib(n);
        return res;
    }   
};