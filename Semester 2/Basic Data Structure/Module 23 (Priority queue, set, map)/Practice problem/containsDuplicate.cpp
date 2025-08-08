// problem link: https://leetcode.com/problems/contains-duplicate/description/

// here i have tried to solve the problem with nested for loop got TLE
// then i tried with freqency array got error because in a test case it was tested with negative value

// lastly the map works;

// accepted solution here:
 class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // brute force solution
        bool check = false;

        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > 1)
            {
                check = true;
                break;
            }
        }
        return check;
    }
};