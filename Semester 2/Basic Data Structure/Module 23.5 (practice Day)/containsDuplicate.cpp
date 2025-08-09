// problem link : https://leetcode.com/problems/contains-duplicate/description/

// solution :


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // with set we will insert the nums into it and remove the duplicate and after duplication we  will check if the size is equal to the vector or not is equal we will return true else false
        set<int> st;
        for (int x : nums)
            st.insert(x);

        return st.size() != nums.size();
    }
};