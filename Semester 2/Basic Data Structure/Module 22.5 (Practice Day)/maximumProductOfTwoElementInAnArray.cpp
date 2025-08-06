//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

// brute force solution:
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // using brute force to solve the problem
        long long maxResult = INT_MIN;
        int n = nums.size();
        for (int i  = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
               long long result = (nums[i] - 1) *(nums[j] - 1);
               if (result > maxResult)
                    maxResult = result;

            }
        }
        return maxResult;
    }
};