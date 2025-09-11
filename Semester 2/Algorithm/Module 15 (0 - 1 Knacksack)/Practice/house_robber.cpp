// problem link; https://leetcode.com/problems/house-robber/submissions/1766211352/

// solution:


// not optimized getting TLE;
class Solution {
public:
    int rec(vector<int>& nums, int n)
    {
        if (n < 0)
            return 0;

        int op1 = rec(nums, n - 2) + nums[n];
        int op2 = rec(nums, n -1);
        return max(op1, op2);
    }
    int rob(vector<int>& nums) {
        int sz = nums.size();
        int res = rec(nums, sz - 1);
        return res;
    }
};


// well optimized and accepted and used DP:
class Solution {
public:
    int dp[405];
    int rec(vector<int>& nums, int n)
    {
        if (n < 0)
            return 0;
        if (dp[n] != -1)
            return dp[n];
        int op1 = rec(nums, n - 2) + nums[n];
        int op2 = rec(nums, n -1);
        dp[n] =  max(op1, op2);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        int sz = nums.size();
        int res = rec(nums, sz - 1);
        return res;
    }
};



/// using for loop:

class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 0)
            return 0;

        vector<int> res(n);

        res[0] = nums[0];
        for (int i = 1; i < n; i++) {
            if (i == 1) {
                res[i] = max(nums[0], nums[1]);

            } else {

                int op1 = nums[i] + res[i - 2];
                int op2 = res[i - 1];
                res[i] = max(op1, op2);
            }
        }
        return res[n - 1];
    }
};


// using loops and more optimal:


class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 0)
            return 0;

        for (int i = 1; i < n; i++) {
            if (i == 1) {
                nums[i] = max(nums[0], nums[1]);

            } else {

                int op1 = nums[i] + nums[i - 2];
                int op2 = nums[i - 1];
                nums[i] = max(op1, op2);
            }
        }
        return nums[n - 1];
    }
};