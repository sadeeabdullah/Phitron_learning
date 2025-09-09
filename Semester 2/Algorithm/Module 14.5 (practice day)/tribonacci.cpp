// problem link: https://leetcode.com/problems/n-th-tribonacci-number/submissions/1764925866/


// solution:
class Solution {
public:
    int dp[39];
    int tribonacci(int n) {
        if (n <= 1)
            return n;
        if(n == 2)
            return 1;
        
        if (dp[n] != 0)
            return dp[n];
        // recursive call
        dp[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
        return dp[n];
    }
};