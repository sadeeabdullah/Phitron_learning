//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

// brute force solution: time complexity O(N^2)
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


// little more optimize solution; time complexity O(NlogN)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // using brute force to solve the problem
        sort(nums.begin(),nums.end(), greater<int> ());
        int mx1 = nums[0];
        int mx2 = nums[1];
        long long maxResult = (mx1 - 1) * (mx2 - 1);

        return maxResult;
    }
};