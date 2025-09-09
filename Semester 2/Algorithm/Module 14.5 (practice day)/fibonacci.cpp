// problem:https://leetcode.com/problems/fibonacci-number/description/

// class Solution {
// public:
//     int fib(int n) {
//         if (n == 0) return 0;
//         if (n == 1) return 1;
//         int a = 0, b = 1;
//         for(int i = 2; i <= n; i++){
//             int c = a + b;
//             a = b;
//             b = c;
//         }
//         return b;
//     }
// };
class Solution {
public:
    long long dp[32];
    int fib(int n) {
        if (n < 2) return n;

        if (dp[n] != 0)
            return dp[n];
        dp[n] = fib(n - 1) + fib(n - 2);
        return dp[n];
    }
};