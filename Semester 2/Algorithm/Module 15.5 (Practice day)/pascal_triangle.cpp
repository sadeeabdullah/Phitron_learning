// problem linK:https://leetcode.com/problems/pascals-triangle/description/

// solution:
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // taking a 2d vector for returning
        vector<vector<int>> ans;

        for(int i = 0; i < numRows; i++)
        {
            // taking tmp vector with the 1 extra size of i and the value should be 1 primarily
            vector<int> tmp (i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                tmp[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(tmp); // in first iteration the inner loop will not work
        }
        return ans;
    }
};